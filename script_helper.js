if (game) {

    var myhai = [];
    var rest = [];
    var dora = [];
    var yi = [];
    var discards = [];
    var last_self_deal = false;
    var last_self_cpk = false;
    var nowDoraNum = 0;
    var isLiqi = false;
    var state = 0;
    var maxf = 4;
    var xt = 100;
    var left = 69;

    var isonenine = function(id) {
        return !(id != 0 && id != 8 && id != 9 && id != 17 && id != 18 && id < 26);
    }
    var hai2nxtid = function(hname) {
        var tmp = hai2id(hname);
        if (tmp == 8 || tmp == 17 || tmp == 26) return (tmp - 9);
        if (tmp == 30) return 26;
        if (tmp == 33) return 31;
        return (tmp + 1);
    }

    var hai2id = function(hname) {
        var base = 0;
        if (hname[1] == "m") base = 0;
        else if (hname[1] == "p") base = 9;
        else if (hname[1] == "s") base = 18;
        else if (hname[1] == "z") base = 27;
        var idx = parseInt(hname[0]);
        if (idx == 0) idx = 5;
        return base + idx - 1
    }

    var maj2id = function(it) {
        var base = 0;
        if (it.val.type == 1) base = 0;
        else if (it.val.type == 0) base = 9;
        else if (it.val.type == 2) base = 18;
        else base = 27;
        var idx = it.val.index;
        if (idx == 0) idx = 5;
        return base + idx - 1;
    }

    var doDiscard = function(r) {
        // Ajax here (process Liqi, Zimo here)
        console.log(uiscript);
        last_self_deal = true;

        if (r.operation && r.operation.operation_list && r.operation.operation_list.length > 0) {

            if (view.ViewPlayer_Me.Inst.hand.length > 0) {

                var hasLiqi = false;
                var hasKang = false;
                var liqi_select = [];

                // clear operation list
                {
                    var hasZimo = false;
                    for (var i = 0; i < r.operation.operation_list.length; ++ i) {
                        var op = r.operation.operation_list[i];
                        if (op.type == mjcore.E_PlayOperation.zimo) {
                            hasZimo = true;
                            break;
                        }
                    }
                    if (hasZimo) {
                        setTimeout(function() {
//                            uiscript.UI_LiQiZiMo.Inst.onBtn_Zimo();	// zimo
                        }, 1000);
                        return;
                    }

                    for (var i = 0; i < r.operation.operation_list.length; ++ i) {
                        var op = r.operation.operation_list[i];
                        if (op.type == mjcore.E_PlayOperation.liqi) {
                            hasLiqi = true;
                            liqi_select = op.combination; 
                            break;
                        }
                    }

                    for (var i = 0; i < r.operation.operation_list.length; ++ i) {
                        var op = r.operation.operation_list[i];
                        if (op.type == mjcore.E_PlayOperation.an_gang) {
                            hasKang = true;
                            break;
                        }
                    }
                }

                    // ajax here
                    var xhr = new XMLHttpRequest();
                    xhr.open("POST", "http://127.0.0.1:2356/api", true);
                    xhr.setRequestHeader('Content-type', 'application/json');
                    xhr.onreadystatechange = function () {
                        if(xhr.readyState === XMLHttpRequest.DONE){
                            if(xhr.status === 200) {
                                var data = JSON.parse(xhr.responseText);
                                var did = data.discard_id;
                                var handid = 0;
                                var found = false;
                                var d_isdora = true;
                                //console.log(view.ViewPlayer_Me.Inst.hand.length);
                                for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                    if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == did ) {
                                        if (d_isdora) {
                                            handid = i;
                                            found = true;
                                            d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                        }
                                        else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                            handid = i;
                                            found = true;
                                        }
                                    }
                                }
                                if(found){
                                if(myhai[did]==4){
                    if (hasKang && !hasLiqi) {
                         last_self_cpk = true;
                        myhai[r.tile]--;
//                        uiscript.UI_LiQiZiMo.Inst.onBtn_Gang();
                        return;
                    }
                                    
                                }
                                }

                                if(!found){
                                    console.error('hai not found, find nearest discard');
                                    for(var j = discards.length - 1; j >= discards.length - 5 && j >= 0; -- j){
                                        for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                            if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == discards[j] ) {
                                                if (d_isdora) {
                                                    handid = i;
                                                    found = true;
                                                    d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                                }
                                                else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                                    handid = i;
                                                    found = true;
                                                }
                                            }
                                        }}}


                                if(!found){
                                    var minremain = 4;
                                    for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                        var tempid = maj2id(view.ViewPlayer_Me.Inst.hand[i])
                                        if (tempid >= 27 && rest[tempid] + myhai[tempid] < minremain) {
                                            minremain = rest[tempid] + myhai[tempid] ;
                                            handid = i;
                                        }
                                    }
                                }


                                if(!found){
                                    for(var j = discards.length - 6; j >= 0; -- j){
                                        for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                            if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == discards[j] ) {
                                                if (d_isdora) {
                                                    handid = i;
                                                    found = true;
                                                    d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                                }
                                                else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                                    handid = i;
                                                    found = true;
                                                }
                                            }
                                        }}}

                                if (!found) {
                                    console.error("Discard hai not found");
                                    console.error(did, view.ViewPlayer_Me.Inst.hand, view.ViewPlayer_Me.Inst.hand.map(maj2id));
                                    try{
//                                        view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.last_tile.val, true, 0);
                                    }catch(error){
//                                        view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[13].val, false, 0);
                                    }
                                }

                                if (hasLiqi) {
                                    if (liqi_select.map(hai2id).indexOf(did) != -1) { // handid in qili_select
//                                        view.ViewPlayer_Me.Inst.desktop.Action_LiQi(view.ViewPlayer_Me.Inst.hand[handid].val, view.ViewPlayer_Me.Inst.hand[handid] === view.ViewPlayer_Me.Inst.last_tile);
                                        isLiqi = true;
                                    }
                                    else {
//                                        view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[handid].val, view.ViewPlayer_Me.Inst.hand[handid] == view.ViewPlayer_Me.Inst.last_tile, 0);
                                    }
                                }
                                else {
//                                    view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[handid].val, view.ViewPlayer_Me.Inst.hand[handid] == view.ViewPlayer_Me.Inst.last_tile, 0);
                                }
                                GameMgr.Inst.clientHeatBeat();
                            } else{
                                console.error('server internal error');
                                try{
//                                    view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.last_tile.val, true, 0);
                                }catch(error){
//                                    view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[13].val, false, 0);
                                }
                            }
                        }
                    };

                    //              console.log(r.tile);
                    //            console.log(view.ViewPlayer_Me.Inst.hand.length);
                    //if(view.ViewPlayer_Me.Inst.hand.length==14){
                    try{
                        for(var i=0;i<34;++i) dora[i]=0;
                        for(var i=0;i<view.ViewPlayer_Me.Inst.hand.length;++i)
                            if(view.ViewPlayer_Me.Inst.hand[i].isDora)dora[maj2id(view.ViewPlayer_Me.Inst.hand[i])]+=1;
                    }catch(error){
                        console.log(error);
                    }
                    left = r.left_tile_count;
                    if(left <= 12) state = 3;
                    xhr.send(JSON.stringify({
                        "hai": myhai,
                        "rest": rest,
                        "left": r.left_tile_count,
                        "dora": dora,
                        "yi": yi,
                        "state": state,
                        "maxf": maxf
                    }));

            }
            else{
                setTimeout(()=>doDiscard(r),500);          
            }
        }
        else {	// after liqi

            return; // do nothing
        }
    };




    var inject_func = function(t, e) {
        var n = net.ProtobufManager.lookupType("lq." + t.name);
        r = n.decode(t.data);
        if (t.name == "ActionNewRound") {
                            console.log(uiscript.UI_Activity_Exchange.Inst);
            rest = [];
            myhai = [];
            dora = [];
            yi = [];
            state = 0;
            maxf = 4;
            for (var i = 0; i < 34; ++ i) {
                rest.push(4);
                myhai.push(0);
                dora.push(0);
                yi.push(i > 30 ? 1 : 0);
            }
            yi[(view.ViewPlayer_Me.Inst.seat - r.ju + 4)%4 + 27]=1;
            yi[r.chang + 27]=1;
            //console.log(yi[27],yi[28],yi[29],yi[30]);
            
            for (var i = 0; i < r.doras.length; ++ i) {
                rest[hai2id(r.doras[i])] -= 1;
            }
            for (var i = 0; i < r.tiles.length; ++ i) {
                var tid = hai2id(r.tiles[i]);
                rest[tid] -= 1;
                myhai[tid] += 1;
                if(yi[tid]==1 && myhai[tid]>=2 && state < 2)state = 2;
                for (var j = 0; j < r.doras.length; ++ j) {
                    if(tid==hai2nxtid(r.doras[j])) dora[tid] += 1;
                }
            }
            last_self_deal = false;
            last_self_cpk = false;
            nowDoraNum = 1;
            isLiqi = false;
            if (r.tiles.length == 14) {
                setTimeout(()=>doDiscard(r),3000);
            }
        }
        else if (t.name == "ActionDiscardTile") {
            discards.push( hai2id(r.tile) );
            if (last_self_deal) {
                last_self_deal = false;
                myhai[ hai2id(r.tile) ] --;
            }
            else {
                var tid = hai2id(r.tile);
                rest[ tid ] --;
                if (r.operation) {
                    var hasRong = false;
                    for (var i = 0; i < r.operation.operation_list.length; ++ i) {
                        if (r.operation.operation_list[i].type == mjcore.E_PlayOperation.rong) {
                            hasRong = true;
                            break;
                        }
                    }
                    if (hasRong) {	// Ron !!!
                        setTimeout(function() {
//                            uiscript.UI_ChiPengHu.Inst.onBtn_Hu();
                        }, 1500);
                    }
                    else {	// no chi pon kang
                        //console.log('chi');
                        var klist = []
                        var pengyi = false;
                        for (var i = 0; i < r.operation.operation_list.length; ++ i) {
                            if (r.operation.operation_list[i].type == mjcore.E_PlayOperation.eat) {
                                if(state < 2 && isonenine( hai2id(r.tile) )){
                          //          console.log('pai chi onenine');
                                    continue;
                                }
                                for (var j = 0; j < r.operation.operation_list[i].combination.length; ++ j) {
                                    tiles = r.operation.operation_list[i].combination[j].split('|');
                                    if(state < 2 &&(  isonenine( hai2id(tiles[0]) ) ||   isonenine( hai2id(tiles[1]) ) ) ){
                            //            console.log('pai next onenine');
                                        continue;
                                    }
                                    klist.push([ hai2id(tiles[0]), hai2id(tiles[1])]);
                              //      console.log('chilist',klist);
                                }
                            }
                            else if (r.operation.operation_list[i].type == mjcore.E_PlayOperation.peng) {
                                if(myhai[hai2id(r.tile)] == 3)continue;
                                if(yi[ hai2id(r.tile) ] > 0){
                                    //console.log('peng yi');
                                    pengyi = true;
        last_self_deal = true;
                                        last_self_cpk = true;                                                               
                                    setTimeout(function() {
//                                        uiscript.UI_ChiPengHu.Inst.onBtn_Peng();
//                                        rest[ hai2id(r.tile) ] += 2;
                                        myhai[ hai2id(r.tile) ] -= 2;
                                        state = 3;
                                        maxf -= 1;
                                        var xhr = new XMLHttpRequest();
                                        xhr.open("POST", "http://127.0.0.1:2356/api", true);
                                        xhr.setRequestHeader('Content-type', 'application/json');
                                        xhr.onreadystatechange = function () {
                                            if(xhr.readyState === XMLHttpRequest.DONE){
                                                if(xhr.status === 200) {
                                                    var data = JSON.parse(xhr.responseText);
                                                    var did = data.discard_id;
                                                    var handid = 0;
                                                    var found = false;
                                                    var d_isdora = true;
                                                    //console.log(view.ViewPlayer_Me.Inst.hand.length);
                                                    for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                                        if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == did ) {
                                                            if (d_isdora) {
                                                                handid = i;
                                                                found = true;
                                                                d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                                            }
                                                            else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                                                handid = i;
                                                                found = true;
                                                            }
                                                        }
                                                    }

                                                    if(!found){
                                                        console.error('hai not found, find nearest discard');
                                                        for(var j = discards.length - 1; j >= discards.length - 5 && j >= 0; -- j){
                                                            for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                                                if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == discards[j] ) {
                                                                    if (d_isdora) {
                                                                        handid = i;
                                                                        found = true;
                                                                        d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                                                    }
                                                                    else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                                                        handid = i;
                                                                        found = true;
                                                                    }
                                                                }
                                                            }}}


                                                    if(!found){
                                                        var minremain = 4;
                                                        for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                                            var tempid = maj2id(view.ViewPlayer_Me.Inst.hand[i])
                                                            if (tempid >= 27 && rest[tempid] + myhai[tempid] < minremain) {
                                                                minremain = rest[tempid] + myhai[tempid] ;
                                                                handid = i;
                                                            }
                                                        }
                                                    }


                                                    if(!found){
                                                        for(var j = discards.length - 6; j >= 0; -- j){
                                                            for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                                                if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == discards[j] ) {
                                                                    if (d_isdora) {
                                                                        handid = i;
                                                                        found = true;
                                                                        d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                                                    }
                                                                    else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                                                        handid = i;
                                                                        found = true;
                                                                    }
                                                                }
                                                            }}}

                                                    if (!found) {
                                                        console.error("Discard hai not found");
                                                        console.error(did, view.ViewPlayer_Me.Inst.hand, view.ViewPlayer_Me.Inst.hand.map(maj2id));
                                                        try{
//                                                            view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.last_tile.val, true, 0);
                                                        }catch(error){
//                                                            view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[13].val, false, 0);
                                                        }
                                                    }

//                                                    view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[handid].val, view.ViewPlayer_Me.Inst.hand[handid] == view.ViewPlayer_Me.Inst.last_tile, 0);
                                                    GameMgr.Inst.clientHeatBeat();
                                                } else{
                                                    console.error('server internal error');
                                                    try{
//                                                        view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.last_tile.val, true, 0);
                                                    }catch(error){
//                                                        view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[13].val, false, 0);
                                                    }
                                                }
                                            }
                                        };

                                        //              console.log(r.tile);
                                        //            console.log(view.ViewPlayer_Me.Inst.hand.length);
                                        if(view.ViewPlayer_Me.Inst.hand.length==14){
                                            for(var i=0;i<34;++i) dora[i]=0;
                                            for(var i=0;i<view.ViewPlayer_Me.Inst.hand.length;++i)
                                                if(view.ViewPlayer_Me.Inst.hand[i].isDora)dora[maj2id(view.ViewPlayer_Me.Inst.hand[i])]+=1;
                                        }
                                        xhr.send(JSON.stringify({
                                            "hai": myhai,
                                            "rest": rest,
                                            "left": left,
                                            "dora": dora,
                                            "yi": yi,
                                            "state": state,
                                            "maxf": maxf
                                        }))

                                    }, 1000);
                                    break;
                                }else{
                                    if(state < 2 && isonenine( hai2id(r.tile) )){
                                        //console.log('peng onenine');
                                        continue;
                                    }
                                    klist.push([ hai2id(r.tile),hai2id(r.tile)]);
                                    //console.log('chilist',klist);
                                }
                            }
//                            console.log('chi2');
                        }
                        if(klist.length == 0){
                            if(pengyi == false)    {
  //                          console.log('klist zero');
                            setTimeout(function() {
//                                uiscript.UI_ChiPengHu.Inst.onBtn_Cancel();
                            }, 1000);
                            }
                        }else{

                            var xhr = new XMLHttpRequest();
                            xhr.open("POST", "http://127.0.0.1:2356/cpk", true);
                            xhr.setRequestHeader('Content-type', 'application/json');
                            xhr.onreadystatechange = function () {
                                if(xhr.readyState === XMLHttpRequest.DONE){
                                    if(xhr.status === 200) {
                                        var data = JSON.parse(xhr.responseText);
                                        did = data.discard_id;
                                        bestk = data.k1;
                                        bestk2 = data.k2;
                                        if(did != -1){
        last_self_deal = true;
                                                if(state == 0)state = 1;
                                                maxf -= 1;
                                            var chipengflag = false;
                                            last_self_cpk = true;                                                               
                                            if(bestk == bestk2){ 
                                                chipengflag = true;
                                                myhai[bestk]-=2;
                                            }else{
                                                var isdora = 0;
                                                var bestj = -1;
                                                for (var i = 0; i < r.operation.operation_list.length; ++ i) {
                                                    if (r.operation.operation_list[i].type == mjcore.E_PlayOperation.eat) {
                                                        for (var j = 0; j < r.operation.operation_list[i].combination.length; ++ j) {
                                                            tiles = r.operation.operation_list[i].combination[j].split('|');
                                                            if(bestk == hai2id(tiles[0]) && bestk2 == hai2id(tiles[1])){
//                                                                rest[bestk]++;
 //                                                               rest[hai2id(tiles[1])] ++;
                                                                myhai[bestk]--;
                                                                myhai[hai2id(tiles[1])] --;
                                                                var tdora = (tiles[0][0] == '0' || tiles[1][0] == '0') ? 1 : 0;
                                                                if(tdora >= isdora){ bestj = j;isdora = tdora;}
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            setTimeout(function() {
                                                if(chipengflag){
//                                                    uiscript.UI_ChiPengHu.Inst.onBtn_Peng();
                                                }
                                                else{
                                                    try{
//                                                    uiscript.UI_ChiPengHu.Inst.onBtn_Chi();
                                                    
                                                            var n = uiscript.UI_ChiPengHu.Inst.container_Detail.getChildByName("container_chooses").getChildByName("c" + bestj);
                                                            n.clickHandler.run();
                                                    }catch(error){
                                                        console.log(error);
                                                    }

                                                }

                                                setTimeout(function(){
                                                    var handid = 0;
                                                    var found = false;
                                                    var d_isdora = true;
                                                    //console.log(view.ViewPlayer_Me.Inst.hand.length);
                                                    for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                                        if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == did ) {
                                                            if (d_isdora) {
                                                                handid = i;
                                                                found = true;
                                                                d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                                            }
                                                            else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                                                handid = i;
                                                                found = true;
                                                            }
                                                        }
                                                    }

                                                    if(!found){
                                                        console.error('hai not found, find nearest discard');
                                                        for(var j = discards.length - 1; j >= discards.length - 5 && j >= 0; -- j){
                                                            for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                                                if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == discards[j] ) {
                                                                    if (d_isdora) {
                                                                        handid = i;
                                                                        found = true;
                                                                        d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                                                    }
                                                                    else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                                                        handid = i;
                                                                        found = true;
                                                                    }
                                                                }
                                                            }}}


                                                    if(!found){
                                                        var minremain = 4;
                                                        for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                                            var tempid = maj2id(view.ViewPlayer_Me.Inst.hand[i])
                                                            if (tempid >= 27 && rest[tempid] + myhai[tempid] < minremain) {
                                                                minremain = rest[tempid] + myhai[tempid] ;
                                                                handid = i;
                                                            }
                                                        }
                                                    }


                                                    if(!found){
                                                        for(var j = discards.length - 6; j >= 0; -- j){
                                                            for (var i = 0; i < view.ViewPlayer_Me.Inst.hand.length; ++ i) {
                                                                if (  maj2id(view.ViewPlayer_Me.Inst.hand[i]) == discards[j] ) {
                                                                    if (d_isdora) {
                                                                        handid = i;
                                                                        found = true;
                                                                        d_isdora = view.ViewPlayer_Me.Inst.hand[i].isDora;
                                                                    }
                                                                    else if (!view.ViewPlayer_Me.Inst.hand[i].isDora) {
                                                                        handid = i;
                                                                        found = true;
                                                                    }
                                                                }
                                                            }}}

                                                    if (!found) {
                                                        console.error("Discard hai not found");
                                                        console.error(did, view.ViewPlayer_Me.Inst.hand, view.ViewPlayer_Me.Inst.hand.map(maj2id));
                                                        try{
//                                                            view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.last_tile.val, true, 0);
                                                        }catch(error){
//                                                            view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[13].val, false, 0);
                                                        }
                                                    }

//                                                    view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[handid].val, view.ViewPlayer_Me.Inst.hand[handid] == view.ViewPlayer_Me.Inst.last_tile, 0);
                                                    GameMgr.Inst.clientHeatBeat();

                                                },1000);
                                            }, 1000);

                                        } else{
                                            setTimeout(function() {
                                                //console.log('did-1 cancel');
//                                                uiscript.UI_ChiPengHu.Inst.onBtn_Cancel();
                                            }, 1000);
                                        }


                                    } else{
                                        console.error('server internal error');
                                        try{
//                                            view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.last_tile.val, true, 0);
                                        }catch(error){
//                                            view.ViewPlayer_Me.Inst.desktop.Action_QiPai(view.ViewPlayer_Me.Inst.hand[13].val, false, 0);
                                        }
                                    }

                                }
                            };

                            xhr.send(JSON.stringify({
                                "hai": myhai,
                                "rest": rest,
                                "left": left,
                                "dora": dora,
                                "yi": yi,
                                "state": state,
                                "maxf": maxf,
                                "choices":klist
                            }));


                        }
                    }
                }
            }

            if (r.doras && r.doras.length == nowDoraNum + 1) { // new Dora
                var tid = hai2id(r.doras[r.doras.length - 1]);
                rest[tid] -= 1;
                nowDoraNum += 1;
            }
        }
        else if (t.name == "ActionDealTile") {
            if (r.tile && r.tile != "") { // self
                var tid = hai2id(r.tile);
                myhai[tid] += 1;
                if(yi[tid]==1 && myhai[tid]>=2 && state < 2)state = 2;
                rest[tid] -= 1;
                setTimeout(()=>doDiscard(r),500);
            }
            if (r.doras && r.doras.length == nowDoraNum + 1) { // new Dora
                var tid = hai2id(r.doras[r.doras.length - 1]);
                rest[tid] -= 1;
                nowDoraNum += 1;
            }
        }
        else if (t.name == "ActionChiPengGang") {
            var ats = [];
            if (r.type == 0) { // Chi
                ats = [ hai2id(r.tiles[0]), hai2id(r.tiles[1]) ];
            }
            else if (r.type == 1) { // Pon
                var tmp = hai2id(r.tiles[0]);
                ats = [tmp, tmp];
            }
            else { // Kang
                var tmp = hai2id(r.tiles[0]);
                ats = [tmp, tmp, tmp];
            }
            if(last_self_cpk)last_self_cpk = false;else
                for (var i = 0; i < ats.length; ++ i) {
                    rest[ats[i]] -= 1;
                }
        }
        else if (t.name == "ActionAnGangAddGang") {
            if (r.type == 3) { // kang
                var tid = hai2id(r.tiles);
                if(last_self_cpk)last_self_cpk = false;else
                rest[tid] -= 4;
            }
            else {
                var tid = hai2id(r.tiles);
                if(last_self_cpk)last_self_cpk = false;else
                rest[tid] -= 1;
            }
        }
        else { // not care
        }

    };

    requestAnimationFrame(function autoRun () {
        try {
            var tmp = view.DesktopMgr.prototype.DoMJAction;
            view.DesktopMgr.prototype.DoMJAction = function(t, e) {

                inject_func(t, e);

                tmp.apply(this, [t, e]);
            }

            uiscript.UI_GameEnd.prototype.onEnable = function() {
                setTimeout(function ASDNqFA_bq2() {
                    if (uiscript.UI_GameEnd.Inst.enable) {
                        if (uiscript.UI_MJReward.Inst.enable) {
                            uiscript.UI_MJReward.Inst.complete.run();
                        }
                        if (uiscript.UI_MJReward_Activity.Inst.enable) {
                            uiscript.UI_MJReward_Activity.Inst.complete.run();
                        }
                        if (uiscript.UI_MJTask_Progress.Inst.enable) {
                            uiscript.UI_MJTask_Progress.Inst.compelte.run();
                        }
                        if (uiscript.UI_RankChange.Inst.enable) {
                            uiscript.UI_RankChange.Inst.complete.run();
                        }
                        uiscript.UI_GameEnd.Inst.onConfirm();
                        setTimeout(ASDNqFA_bq2, 10000);
                    }
                }, 10000);
            };
            /*
            var tmp2 = uiscript.UI_Lobby.prototype.onEnable;
            uiscript.UI_Lobby.prototype.onEnable = function() {
                setTimeout(function() {
                    uiscript.UI_Lobby.Inst.page0.btn_yibanchang.clickHandler.run();
                    setTimeout(function() {
                        uiscript.UI_PlayerInfo.Inst.show();
                        console.warn(uiscript.UI_PlayerInfo.Inst.level.level_v.text,uiscript.UI_PlayerInfo.Inst.level.level_vmax.text);
                    setTimeout(function() {
             if(parseInt(uiscript.UI_PlayerInfo.Inst.level.level_vmax.text) > 200)
                        uiscript.UI_Lobby.Inst.page_rank.content0._childs[0]._childs[1]._childs[0]._childs[0].clickHandler.run(); // yin zhi jian
             else
         uiscript.UI_Lobby.Inst.page_rank.content0._childs[0]._childs[0]._childs[0]._childs[0].clickHandler.run();	// tong zhi jian

                        setTimeout(function() {
                            uiscript.UI_Lobby.Inst.page_east_north.btns[0]._childs[0].clickHandler.run();	// si ren dong
        //uiscript.UI_Lobby.Inst.page_east_north.btns[1]._childs[0].clickHandler.run();		// si ren nan
                        }, 4000);
                        }, 4000);
                    }, 4000);
                }, 4000);
                tmp2.apply(this, []);
            }

         var tmp2 = uiscript.UI_Lobby.prototype.onEnable;
      uiscript.UI_Lobby.prototype.onEnable = function() {
          setTimeout(function() {
              uiscript.UI_Lobby.Inst.page0.btn_dajiangsai.clickHandler.run();
              setTimeout(function() {
                  uiscript.UI_Lobby.Inst.page_match.onClickAt(2);
                  setTimeout(function() {
                      uiscript.UI_Lobby.Inst.page_east_north.btns[0]._childs[0].clickHandler.run();
                  }, 2500);
              }, 2500);
          }, 3000);
          tmp2.apply(this, []);
      }
      */


    } catch (error) {
        console.error(error);
        requestAnimationFrame(autoRun);
    }
    })}

