from bs4 import BeautifulSoup
import os
import sqlite3
import bz2

con = sqlite3.connect(r'G:\2014.db')
cur = con.cursor()
cnt = [0, 0]
threshold = 10000
with open("data.txt", "w") as df:
    for row in cur.execute('SELECT * from logs'):
        if row[0][15:17] != 'a9': continue
        # data = bz2.decompress(bytes.fromhex(row[0][2:-1]))
        data = bz2.decompress(row[5])

        nums = []
        soup = BeautifulSoup(data, "lxml")

        players = [[], [], [], []]
        playerhais = [[0] * 34, [0] * 34, [0] * 34, [0] * 34]
        rest = [4] * 34
        valid = [1, 1, 1, 1]
        for child in soup.find_all():
            try:
                if child.name == 'init':

                    playerhais = [[0] * 34, [0] * 34, [0] * 34, [0] * 34]
                    rest = [4] * 34
                    valid = [1, 1, 1, 1]

                    for i in range(4):
                        if(len(child.attrs['hai' + str(i)]) == 0):
                            print(row[0])
                            break
                        temp = [int(k) for k in child.attrs['hai' + str(i)].split(',')]
                        for j in temp:
                            playerhais[i][int(j / 4)] += 1
                            rest[int(j / 4)] -= 1  ##########################debug unknown rest
                elif child.name == 'n':
                    valid[int(child.attrs['who'])] = 0

                elif len(child.name) > 1 and child.name[1:].isdigit():
                    # get
                    temp = ord(child.name[0]) - ord('t')
                    if 0 <= temp < 4:
                        nums.append(int(child.name[1:]))
                        num = int((int(child.name[1:])) / 4)
                        playerhais[temp][num] += 1
                        rest[num] -= 1
                    # discard
                    temp = ord(child.name[0]) - ord('d')
                    if 0 <= temp < 4:
                        nums.append(int(child.name[1:]))
                        num = int((int(child.name[1:])) / 4)
                        playerhais[temp][num] -= 1
                        # players[temp].append(int(num / 9))
                        # players[temp].append(num % 9)
                        players[temp].append(num)
                        # after each discard
                        if valid[temp] and len(players[temp]) == 10:  # only output silent players
                            assert sum(playerhais[temp]) == 13
                            assert sum(rest) - 14 <= 69
                            assert max(rest) <= 4
                            assert min(rest) >= 0
                            assert max(playerhais[temp]) <= 4
                            assert min(playerhais[temp]) >= 0
                            with open('input.txt', 'w') as g:
                                g.write(str(sum(rest) - 14) + '\n')
                                for i in playerhais[temp]: g.write(str(i) + ' ')
                                g.write('\n')
                                for i in rest: g.write(str(i) + ' ')
                                g.write('\n')
                                for i in range(34): g.write('0 ')
                            ans = os.system('calc_xt.exe')
                            cnt[int(ans == 1)] += 1
                            if cnt[int(ans == 1)] > threshold:
                                print(int(ans == 1), cnt)
                                if cnt[int(ans != 1)] > threshold: break
                                continue
                            df.write(str(int(ans == 1)) + ' ')
                            for i in players[temp]: df.write(str(i) + ' ')
                            df.write('\n')
            except Exception as e:
                print(e)
                break
        if cnt[0] > threshold and cnt[1] > threshold: break
