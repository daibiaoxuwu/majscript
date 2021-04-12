
int64_t __set_app_type = 0x3dcd84c;

void __set_app_type(int64_t rcx) {
    goto __set_app_type;
}

/* .refptr.__imp__fmode */
int32_t** refptr___imp__fmode = reinterpret_cast<int32_t**>(0x41cd440);

/* .text */
int32_t* text(int64_t rcx) {
    int32_t** rax2;

    rax2 = refptr___imp__fmode;
    return *rax2;
}

/* .text */
int64_t text(int64_t rcx) {
    return 0;
}

int64_t malloc = 0x3dcd98a;

void** malloc(void** rcx, ...) {
    goto malloc;
}

int64_t strlen = 0x3dcd9d0;

void** strlen(void** rcx, ...) {
    goto strlen;
}

int64_t memcpy = 0x3dcd994;

void memcpy(void** rcx, void** rdx, void** r8, ...) {
    goto memcpy;
}

int64_t _cexit = 0x3dcd88a;

void _cexit() {
    goto _cexit;
}

int64_t _amsg_exit = 0x3dcd87c;

void _amsg_exit(void** rcx) {
    goto _amsg_exit;
}

int64_t _initterm = 0x3dcd8b0;

void _initterm(void** rcx, void** rdx) {
    goto _initterm;
}

/* .text */
uint32_t text(uint32_t ecx, uint32_t edx, void** r8, void** r9, ...) {
    uint32_t eax5;

    if (reinterpret_cast<int32_t>(ecx) >= reinterpret_cast<int32_t>(edx)) {
        eax5 = edx;
    } else {
        eax5 = ecx;
    }
    return eax5;
}

int64_t __imp___acrt_iob_func = 0x40fe80;

/* .text */
int32_t text(void** rcx, void** rdx, void** r8, void** r9);

/* printf(char const*, ...) */
int64_t _Z6printfPKcz(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t rax5;
    void** rax6;
    int32_t eax7;
    int64_t rax8;

    rax5 = __imp___acrt_iob_func;
    rax6 = reinterpret_cast<void**>(rax5(1));
    eax7 = text(rax6, rcx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56 + 0x80 + 0xffffffffffffffd8, r9);
    *reinterpret_cast<int32_t*>(&rax8) = eax7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    return rax8;
}

/* .text */
void text(void** rcx, void** rdx, int32_t r8d, void** r9);

void free(void** rcx, void** rdx, void** r8, void** r9, int64_t a5);

int64_t free = 0x3dcd92c;

void _assert(void** rcx, void** rdx, int32_t r8d, void** r9) {
    void** rdi5;
    void** rbp6;
    void** rax7;
    void** rax8;
    void** rsi9;
    void** rax10;
    void** rax11;
    uint32_t ecx12;
    void** rbx13;
    void** r8_14;
    uint32_t ecx15;
    void** rax16;
    int64_t v17;

    rdi5 = rdx;
    rbp6 = rcx;
    rax7 = strlen(rcx);
    rax8 = malloc(reinterpret_cast<unsigned char>(rax7) + reinterpret_cast<unsigned char>(rax7) + 2);
    rsi9 = rax8;
    rax10 = strlen(rdi5);
    rax11 = malloc(reinterpret_cast<unsigned char>(rax10) + reinterpret_cast<unsigned char>(rax10) + 2);
    ecx12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp6));
    rbx13 = rax11;
    *reinterpret_cast<int32_t*>(&r8_14) = r8d;
    *reinterpret_cast<int32_t*>(&r8_14 + 4) = 0;
    if (!*reinterpret_cast<signed char*>(&ecx12)) {
        *reinterpret_cast<void***>(rsi9) = reinterpret_cast<void**>(0);
        ecx15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi5));
        if (*reinterpret_cast<signed char*>(&ecx15)) {
            addr_404423_3:
            *reinterpret_cast<int32_t*>(&r9) = 0;
            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        } else {
            goto addr_404480_5;
        }
    } else {
        *reinterpret_cast<int32_t*>(&r9) = 0;
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        do {
            *reinterpret_cast<void***>(rsi9 + reinterpret_cast<unsigned char>(r9) * 2) = *reinterpret_cast<void***>(&ecx12);
            ++r9;
            ecx12 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp6) + reinterpret_cast<unsigned char>(r9));
        } while (*reinterpret_cast<signed char*>(&ecx12));
        *reinterpret_cast<void***>(rsi9 + reinterpret_cast<unsigned char>(r9) * 2) = reinterpret_cast<void**>(0);
        ecx15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi5));
        if (!*reinterpret_cast<signed char*>(&ecx15)) 
            goto addr_404480_5; else 
            goto addr_404423_3;
    }
    do {
        *reinterpret_cast<void***>(rbx13 + reinterpret_cast<unsigned char>(r9) * 2) = *reinterpret_cast<void***>(&ecx15);
        ++r9;
        ecx15 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi5) + reinterpret_cast<unsigned char>(r9));
    } while (*reinterpret_cast<signed char*>(&ecx15));
    rax16 = rbx13 + reinterpret_cast<unsigned char>(r9) * 2;
    addr_404446_11:
    *reinterpret_cast<void***>(rax16) = reinterpret_cast<void**>(0);
    text(rsi9, rbx13, *reinterpret_cast<int32_t*>(&r8_14), r9);
    free(rsi9, rbx13, r8_14, r9, v17);
    goto free;
    addr_404480_5:
    rax16 = rbx13;
    goto addr_404446_11;
}

/* fprintf(_iobuf*, char const*, ...) */
int64_t _Z7fprintfP6_iobufPKcz(void** rcx, void** rdx, void** r8, void** r9) {
    int32_t eax5;
    int64_t rax6;

    eax5 = text(rcx, rdx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 32, r9);
    *reinterpret_cast<int32_t*>(&rax6) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

int32_t __mingw_vfscanf(void** rcx, void** rdx, void** r8);

/* fscanf(_iobuf*, char const*, ...) */
int64_t _Z6fscanfP6_iobufPKcz(void** rcx, void** rdx, void** r8, void** r9) {
    int32_t eax5;
    int64_t rax6;

    eax5 = __mingw_vfscanf(rcx, rdx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 32);
    *reinterpret_cast<int32_t*>(&rax6) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

int64_t _onexit(int64_t rcx, void** rdx, void** r8, void** r9);

int64_t atexit(int64_t rcx, void** rdx, void** r8, void** r9) {
    int64_t rax5;
    int64_t rax6;

    rax5 = _onexit(rcx, rdx, r8, r9);
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(-static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax5 == 0))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

int64_t abort = 0x3dcd8e6;

void abort() {
    goto abort;
}

void*** __iob_func();

/* .text */
void** text(int32_t ecx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    void*** rax6;
    int64_t rcx7;

    rax6 = __iob_func();
    *reinterpret_cast<int32_t*>(&rcx7) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    return reinterpret_cast<int64_t>(rax6) + (rcx7 + rcx7 * 2 << 4);
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

int64_t fprintf = 0x3dcd91a;

void fprintf(void** rcx, int64_t rdx, int64_t r8, struct s0* r9, int64_t a5) {
    goto fprintf;
}

struct s1 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

struct s2 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

/* .refptr.__image_base__ */
struct s2* refptr___image_base__ = reinterpret_cast<struct s2*>(0x400000);

/* .text */
int32_t text(struct s2* rcx);

struct s3 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s1* __mingw_GetSectionForAddress(void** rcx) {
    struct s2* r8_2;
    int32_t eax3;
    void* rcx4;
    struct s3* r8_5;
    uint32_t edx6;
    void* rax7;
    struct s1* rax8;
    int64_t rdx9;
    struct s1* r9_10;
    void* r8_11;
    void* rdx12;
    void* rdx13;

    r8_2 = refptr___image_base__;
    if (r8_2->f0 != 0x5a4d || ((eax3 = text(r8_2), eax3 == 0) || (rcx4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<uint64_t>(r8_2)), r8_5 = reinterpret_cast<struct s3*>(reinterpret_cast<uint64_t>(r8_2) + static_cast<int64_t>(r8_2->f60)), edx6 = r8_5->f6, *reinterpret_cast<uint32_t*>(&rax7) = r8_5->f20, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0, rax8 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(r8_5) + reinterpret_cast<uint64_t>(rax7) + 24), edx6 == 0))) {
        addr_403fdd_2:
        *reinterpret_cast<int32_t*>(&rax8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rdx9) = edx6 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
        r9_10 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rax8) + (rdx9 + rdx9 * 4) * 8 + 40);
        do {
            *reinterpret_cast<int32_t*>(&r8_11) = rax8->f12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = 0;
            rdx12 = r8_11;
            if (reinterpret_cast<uint64_t>(rcx4) < reinterpret_cast<uint64_t>(r8_11)) 
                continue;
            *reinterpret_cast<int32_t*>(&rdx13) = *reinterpret_cast<int32_t*>(&rdx12) + rax8->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
            if (reinterpret_cast<uint64_t>(rcx4) < reinterpret_cast<uint64_t>(rdx13)) 
                break;
            rax8 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rax8) + 40);
        } while (rax8 != r9_10);
        goto addr_403fdd_2;
    }
    return rax8;
}

struct s2* _GetPEImageBase(void** rcx) {
    struct s2* rdx2;
    int32_t eax3;
    struct s2* rax4;

    rdx2 = refptr___image_base__;
    if (rdx2->f0 != 0x5a4d) {
        return 0;
    } else {
        eax3 = text(rdx2);
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        if (eax3) {
            rax4 = rdx2;
        }
        return rax4;
    }
}

void fwrite(int64_t rcx, void** rdx, void** r8, void** r9);

void vfprintf(void** rcx, void** rdx, void** r8, void** r9);

void __gcc_deregister_frame();

/* .text.unlikely */
void text_unlikely(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    void** rax6;
    int64_t v7;
    void** rax8;
    int64_t v9;

    rax6 = text(2, rdx, r8, r9, v5);
    fwrite("Mingw-w64 runtime failure:\n", 1, 27, rax6);
    rax8 = text(2, 1, 27, rax6, v7);
    vfprintf(rax8, rcx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56 + 88, rax6);
    abort();
    _onexit(__gcc_deregister_frame, rcx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56 + 88, rax6);
    goto v9;
}

int32_t maxSections;

struct s4 {
    void** f0;
    signed char[23] pad24;
    void** f24;
};

struct s4* the_secs;

struct s6 {
    signed char[8] pad8;
    int32_t f8;
};

struct s5 {
    void** f0;
    signed char[7] pad8;
    struct s6* f8;
};

struct s7 {
    void** f0;
    signed char[31] pad32;
    struct s1* f32;
};

int64_t VirtualQuery = 0x3dcd7a8;

int64_t VirtualProtect = 0x3dcd796;

int64_t GetLastError = 0x3dcd600;

/* .bss */
int32_t bss;

uint32_t __mingw_GetSectionCount(void** rcx, void** rdx, void** r8);

int64_t ___chkstk_ms(void** rcx, ...);

struct s8 {
    int32_t f0;
    int32_t f4;
    unsigned char f8;
};

/* .refptr.__RUNTIME_PSEUDO_RELOC_LIST_END__ */
struct s8* refptr___RUNTIME_PSEUDO_RELOC_LIST_END__ = reinterpret_cast<struct s8*>(0x4130f0);

/* .refptr.__RUNTIME_PSEUDO_RELOC_LIST__ */
struct s8* refptr___RUNTIME_PSEUDO_RELOC_LIST__ = reinterpret_cast<struct s8*>(0x4130f0);

struct s9 {
    signed char[32] pad32;
    void** f32;
};

struct s10 {
    signed char[40] pad40;
    int64_t f40;
};

void** g4125e0 = reinterpret_cast<void**>(32);

int64_t signal(int64_t rcx, ...);

struct s11 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int64_t f16;
};

/* .text */
void text(int64_t rcx, void** rdx, ...);

/* .text */
void text(void** rcx, void*** rdx, void** r8, void** r9) {
    void* rsp5;
    void* rsi6;
    void** rbx7;
    void*** rbp8;
    void** rdi9;
    struct s4* rax10;
    int32_t ecx11;
    struct s5* rax12;
    struct s1* rax13;
    void* rsp14;
    struct s4* rax15;
    struct s7* rax16;
    struct s2* rax17;
    int64_t rcx18;
    struct s4* rax19;
    int64_t rax20;
    struct s4* rax21;
    void** rdx22;
    int64_t rax23;
    int32_t v24;
    void** tmp64_25;
    void** v26;
    void** v27;
    int32_t eax28;
    int32_t tmp32_29;
    int32_t eax30;
    void** rdx31;
    void* rsp32;
    void* rbp33;
    int32_t ebx34;
    int64_t rax35;
    struct s8* r12_36;
    struct s8* rsi37;
    struct s9* rsp38;
    uint64_t rax39;
    int32_t edx40;
    int64_t v41;
    struct s8* r14_42;
    struct s2* r13_43;
    void*** rdi44;
    struct s8* r12_45;
    void* rcx46;
    int64_t* rsp47;
    void** rdx48;
    int64_t* rsp49;
    struct s10* rsp50;
    void** eax51;
    int64_t* rsp52;
    int64_t rax53;
    int64_t* rsp54;
    int64_t* rsp55;
    struct s10* rsp56;
    int64_t* rsp57;
    int64_t rax58;
    int64_t* rsp59;
    int64_t* rsp60;
    int64_t* rsp61;
    struct s2* r13_62;
    struct s8* rsi63;
    void*** r14_64;
    void* rcx65;
    void* rax66;
    void** rcx67;
    int64_t r8_68;
    int64_t rdx69;
    int64_t r8_70;
    int64_t* rsp71;
    int64_t* rsp72;
    int64_t r8_73;
    int64_t* rsp74;
    int64_t* rsp75;
    int32_t eax76;
    void* rsi77;
    int64_t r12_78;
    struct s4* rax79;
    struct s11* rax80;
    int64_t rdx81;
    int64_t rcx82;
    int64_t* rsp83;
    int1_t less84;
    int64_t* rsp85;
    int64_t* rsp86;
    int64_t* rsp87;
    int64_t rax88;
    int64_t* rsp89;
    int64_t* rsp90;
    int64_t* rsp91;
    void* rax92;
    uint32_t edi93;
    uint32_t edi94;
    uint32_t eax95;
    void* rdx96;
    void* rdi97;
    uint32_t eax98;
    void* rdi99;
    uint32_t eax100;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 80);
    rsi6 = reinterpret_cast<void*>(static_cast<int64_t>(maxSections));
    rbx7 = rcx;
    rbp8 = rdx;
    rdi9 = r8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi6) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi6) == 0)) {
        *reinterpret_cast<int32_t*>(&rsi6) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    } else {
        rax10 = the_secs;
        ecx11 = 0;
        rax12 = reinterpret_cast<struct s5*>(&rax10->f24);
        do {
            if (reinterpret_cast<unsigned char>(rbx7) < reinterpret_cast<unsigned char>(rax12->f0)) 
                continue;
            *reinterpret_cast<int32_t*>(&r8) = rax12->f8->f8;
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            if (reinterpret_cast<unsigned char>(rbx7) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax12->f0) + reinterpret_cast<unsigned char>(r8))) 
                goto addr_4033a5_6;
            ++ecx11;
            rax12 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rax12) + 40);
        } while (ecx11 != *reinterpret_cast<int32_t*>(&rsi6));
    }
    rax13 = __mingw_GetSectionForAddress(rbx7);
    rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    if (!rax13) {
        addr_40348d_9:
        text_unlikely("Address %p has no image-section", rbx7, r8, r9);
    } else {
        rax15 = the_secs;
        rsi6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi6) + reinterpret_cast<uint64_t>(rsi6) * 4 << 3);
        rax16 = reinterpret_cast<struct s7*>(reinterpret_cast<uint64_t>(rax15) + reinterpret_cast<uint64_t>(rsi6));
        rax16->f32 = rax13;
        rax16->f0 = reinterpret_cast<void**>(0);
        rax17 = _GetPEImageBase(rbx7);
        *reinterpret_cast<int32_t*>(&rcx18) = rax13->f12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
        rax19 = the_secs;
        *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax19) + reinterpret_cast<uint64_t>(rsi6) + 24) = rcx18 + reinterpret_cast<uint64_t>(rax17);
        rax20 = reinterpret_cast<int64_t>(VirtualQuery());
        if (!rax20) {
            rax21 = the_secs;
            *reinterpret_cast<int32_t*>(&rdx22) = rax13->f8;
            *reinterpret_cast<int32_t*>(&rdx22 + 4) = 0;
            r8 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax21) + reinterpret_cast<uint64_t>(rsi6) + 24);
            text_unlikely("  VirtualQuery failed for %d bytes at address %p", rdx22, r8, r9);
            rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8 - 8 + 8 - 8 + 8);
            goto addr_40348d_9;
        } else {
            *reinterpret_cast<int32_t*>(&rax23) = v24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
            if (!(static_cast<uint32_t>(rax23 - 4) & 0xfffffffb) || (!(reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax23) - 64) & 0xffffffbf) || (tmp64_25 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsi6) + reinterpret_cast<uint64_t>(the_secs)), *reinterpret_cast<void***>(tmp64_25 + 8) = v26, *reinterpret_cast<void***>(tmp64_25 + 16) = v27, eax28 = reinterpret_cast<int32_t>(VirtualProtect()), !!eax28))) {
                tmp32_29 = maxSections + 1;
                maxSections = tmp32_29;
                goto addr_4033a5_6;
            } else {
                eax30 = reinterpret_cast<int32_t>(GetLastError());
                *reinterpret_cast<int32_t*>(&rdx31) = eax30;
                *reinterpret_cast<int32_t*>(&rdx31 + 4) = 0;
                text_unlikely("  VirtualProtect failed with code 0x%x", rdx31, 64, tmp64_25);
                goto addr_403444_15;
            }
        }
    }
    rsp32 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 56);
    rbp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp32) + 0x80);
    ebx34 = bss;
    if (ebx34) 
        goto addr_4034c2_17;
    bss = 1;
    __mingw_GetSectionCount("Address %p has no image-section", rbx7, r8);
    rax35 = ___chkstk_ms("Address %p has no image-section", "Address %p has no image-section");
    r12_36 = refptr___RUNTIME_PSEUDO_RELOC_LIST_END__;
    maxSections = 0;
    rsi37 = refptr___RUNTIME_PSEUDO_RELOC_LIST__;
    rsp38 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(rsp32) - 8 + 8 - 8 + 8 - rax35);
    the_secs = reinterpret_cast<struct s4*>(&rsp38->f32);
    rax39 = reinterpret_cast<uint64_t>(r12_36) - reinterpret_cast<uint64_t>(rsi37);
    if (reinterpret_cast<int64_t>(rax39) <= reinterpret_cast<int64_t>(7)) 
        goto addr_4034c2_17;
    edx40 = rsi37->f0;
    if (reinterpret_cast<int64_t>(rax39) > reinterpret_cast<int64_t>(11)) {
        if (edx40) 
            goto addr_403540_21;
        if (rsi37->f4) 
            goto addr_403540_21;
        if (rsi37->f8) 
            goto addr_403613_24;
        edx40 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi37) + 12);
        rsi37 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi37) + 12);
    }
    if (edx40 || rsi37->f4) {
        addr_403540_21:
        if (reinterpret_cast<uint64_t>(rsi37) >= reinterpret_cast<uint64_t>(r12_36)) {
            addr_4034c2_17:
            goto v41;
        } else {
            r14_42 = reinterpret_cast<struct s8*>(&rsi37->f8);
            r13_43 = refptr___image_base__;
            rdi44 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp33) - 88);
            r12_45 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi37) + (reinterpret_cast<uint64_t>(r12_36) + 7 - reinterpret_cast<uint64_t>(r14_42) >> 3) * 8 + 8);
            while (*reinterpret_cast<int32_t*>(&rcx46) = rsi37->f4, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = 0, rsi37 = r14_42, rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) - 8), *rsp47 = 0x403592, text(reinterpret_cast<int64_t>(rcx46) + reinterpret_cast<uint64_t>(r13_43), rdi44, 4, r9), rsp38 = reinterpret_cast<struct s9*>(rsp47 + 1), r14_42 != r12_45) {
                r14_42 = reinterpret_cast<struct s8*>(&r14_42->f8);
            }
        }
    } else {
        addr_403613_24:
        *reinterpret_cast<unsigned char*>(&rdx48) = rsi37->f8;
        *reinterpret_cast<int32_t*>(&rdx48 + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&rdx48) != 1) {
            addr_40374e_30:
            rsp49 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) - 8);
            *rsp49 = 0x40375a;
            text_unlikely("  Unknown pseudo relocation protocol version %d.\n", rdx48, r8, r9);
            rsp50 = reinterpret_cast<struct s10*>(rsp49 + 1 - 5);
            eax51 = g4125e0;
            if (reinterpret_cast<unsigned char>(eax51) > reinterpret_cast<unsigned char>(0xc0000091)) {
                if (eax51 == 0xc0000094) {
                    rsp52 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp50) - 8);
                    *rsp52 = 0x40389c;
                    rax53 = signal(8);
                    rsp50 = reinterpret_cast<struct s10*>(rsp52 + 1);
                    if (rax53 != 1) {
                        addr_403801_33:
                        if (rax53) {
                            rsp54 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp50) - 8);
                            *rsp54 = 0x40380d;
                            rax53(8);
                            goto (rsp54 + 1)[5];
                        }
                    } else {
                        rsp55 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp50) - 8);
                        *rsp55 = 0x4038b5;
                        signal(8, 8);
                        rsp56 = reinterpret_cast<struct s10*>(rsp55 + 1);
                        goto addr_4037c3_36;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(eax51) > reinterpret_cast<unsigned char>(0xc0000094)) {
                        if (eax51 == 0xc0000095) {
                            addr_403884_39:
                            goto rsp50->f40;
                        } else {
                            if (!reinterpret_cast<int1_t>(eax51 == 0xc0000096)) {
                                addr_40385e_41:
                                goto rsp50->f40;
                            } else {
                                addr_403822_42:
                                rsp57 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp50) - 8);
                                *rsp57 = 0x40382e;
                                rax58 = signal(4);
                                rsp56 = reinterpret_cast<struct s10*>(rsp57 + 1);
                                if (rax58 == 1) {
                                    rsp59 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp56) - 8);
                                    *rsp59 = 0x4038cf;
                                    signal(4, 4);
                                    rsp56 = reinterpret_cast<struct s10*>(rsp59 + 1);
                                    goto addr_4037c3_36;
                                } else {
                                    if (rax58) {
                                        rsp60 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp56) - 8);
                                        *rsp60 = 0x403848;
                                        rax58(4);
                                        goto (rsp60 + 1)[5];
                                    }
                                }
                            }
                        }
                    } else {
                        if (eax51 == 0xc0000092) 
                            goto addr_403884_39;
                        if (!reinterpret_cast<int1_t>(eax51 == 0xc0000093)) 
                            goto addr_40385e_41; else 
                            goto addr_4037ef_48;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(eax51) >= reinterpret_cast<unsigned char>(0xc000008d)) {
                    addr_4037ef_48:
                    rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp50) - 8);
                    *rsp61 = 0x4037fb;
                    rax53 = signal(8);
                    rsp50 = reinterpret_cast<struct s10*>(rsp61 + 1);
                    if (rax53 == 1) 
                        goto addr_403870_50; else 
                        goto addr_403801_33;
                } else {
                    if (eax51 == 0xc0000008) 
                        goto addr_403884_39;
                    if (reinterpret_cast<unsigned char>(eax51) > reinterpret_cast<unsigned char>(0xc0000008)) 
                        goto addr_403850_53; else 
                        goto addr_403785_54;
                }
            }
        } else {
            r13_62 = refptr___image_base__;
            rsi63 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi37) + 12);
            r14_64 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp33) - 88);
            if (reinterpret_cast<uint64_t>(rsi63) >= reinterpret_cast<uint64_t>(r12_36)) {
                goto addr_4034c2_17;
            }
            do {
                *reinterpret_cast<int32_t*>(&rcx65) = rsi63->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rax66) = rsi63->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax66) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rdx48) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(rsi63->f8));
                *reinterpret_cast<int32_t*>(&rdx48 + 4) = 0;
                rcx67 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rcx65) + reinterpret_cast<uint64_t>(r13_62));
                r9 = *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rax66) + reinterpret_cast<uint64_t>(r13_62));
                if (*reinterpret_cast<unsigned char*>(&rdx48) != 16) {
                    if (*reinterpret_cast<unsigned char*>(&rdx48) <= reinterpret_cast<unsigned char>(16)) {
                        if (*reinterpret_cast<unsigned char*>(&rdx48) != 8) 
                            goto addr_40373a_60;
                        *reinterpret_cast<uint32_t*>(&r8_68) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx67));
                        if (*reinterpret_cast<signed char*>(&r8_68) >= 0) 
                            goto addr_403720_62;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(&rdx48) == 32) {
                            *reinterpret_cast<void***>(&rdx69) = *reinterpret_cast<void***>(rcx67);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = 0;
                            r8_70 = rdx69;
                            if (*reinterpret_cast<int32_t*>(&r8_70) >= 0) {
                            }
                            *reinterpret_cast<int32_t*>(&r8) = 4;
                            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                            rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) - 8);
                            *rsp71 = 0x4036fa;
                            text(rcx67, r14_64, 4, r9);
                            rsp38 = reinterpret_cast<struct s9*>(rsp71 + 1);
                            continue;
                        } else {
                            if (*reinterpret_cast<unsigned char*>(&rdx48) != 64) 
                                goto addr_40373a_60;
                            *reinterpret_cast<int32_t*>(&r8) = 8;
                            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                            rsp72 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) - 8);
                            *rsp72 = 0x403678;
                            text(rcx67, r14_64, 8, r9);
                            rsp38 = reinterpret_cast<struct s9*>(rsp72 + 1);
                            continue;
                        }
                    }
                } else {
                    *reinterpret_cast<uint32_t*>(&r8_73) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx67));
                    if (*reinterpret_cast<int16_t*>(&r8_73) < 0) {
                    }
                    *reinterpret_cast<int32_t*>(&r8) = 2;
                    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                    rsp74 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) - 8);
                    *rsp74 = 0x4036cd;
                    text(rcx67, r14_64, 2, r9);
                    rsp38 = reinterpret_cast<struct s9*>(rsp74 + 1);
                    continue;
                }
                addr_403720_62:
                *reinterpret_cast<int32_t*>(&r8) = 1;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                rsp75 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) - 8);
                *rsp75 = 0x403735;
                text(rcx67, r14_64, 1, r9);
                rsp38 = reinterpret_cast<struct s9*>(rsp75 + 1);
                rsi63 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi63) + 12);
            } while (reinterpret_cast<uint64_t>(rsi63) < reinterpret_cast<uint64_t>(r12_36));
        }
    }
    eax76 = maxSections;
    *reinterpret_cast<int32_t*>(&rsi77) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi77) + 4) = 0;
    r12_78 = VirtualProtect;
    if (!(reinterpret_cast<uint1_t>(eax76 < 0) | reinterpret_cast<uint1_t>(eax76 == 0))) {
        do {
            rax79 = the_secs;
            rax80 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rax79) + reinterpret_cast<uint64_t>(rsi77));
            if (rax80->f0) {
                rdx81 = rax80->f16;
                rcx82 = rax80->f8;
                rsp83 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) - 8);
                *rsp83 = 0x4035d0;
                r12_78(rcx82, rdx81);
                rsp38 = reinterpret_cast<struct s9*>(rsp83 + 1);
            }
            ++ebx34;
            rsi77 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi77) + 40);
            less84 = ebx34 < maxSections;
        } while (less84);
        goto addr_4034c2_17;
    }
    addr_4037c3_36:
    goto rsp56->f40;
    addr_403870_50:
    rsp85 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp50) - 8);
    *rsp85 = 0x40387f;
    signal(8, 8);
    rsp86 = rsp85 + 1 - 1;
    *rsp86 = 0x403884;
    text(8, 1, 8, 1);
    rsp50 = reinterpret_cast<struct s10*>(rsp86 + 1);
    goto addr_403884_39;
    addr_403850_53:
    if (eax51 == 0xc000001d) 
        goto addr_403822_42;
    if (eax51 == 0xc000008c) 
        goto addr_403884_39; else 
        goto addr_40385e_41;
    addr_403785_54:
    if (eax51 == 0x80000002) 
        goto addr_403884_39;
    if (!reinterpret_cast<int1_t>(eax51 == 0xc0000005)) 
        goto addr_40385e_41;
    rsp87 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp50) - 8);
    *rsp87 = 0x4037a7;
    rax88 = signal(11);
    rsp56 = reinterpret_cast<struct s10*>(rsp87 + 1);
    if (rax88 != 1) 
        goto addr_4037b1_83;
    rsp89 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp56) - 8);
    *rsp89 = 0x4038ef;
    signal(11, 11);
    rsp56 = reinterpret_cast<struct s10*>(rsp89 + 1);
    goto addr_4037c3_36;
    addr_4037b1_83:
    if (!rax88) {
        goto addr_4037c3_36;
    } else {
        rsp90 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp56) - 8);
        *rsp90 = 0x4037c1;
        rax88(11);
        rsp56 = reinterpret_cast<struct s10*>(rsp90 + 1);
        goto addr_4037c3_36;
    }
    addr_40373a_60:
    rsp91 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp38) - 8);
    *rsp91 = 0x40374e;
    text_unlikely("  Unknown pseudo relocation bit size %d.\n", rdx48, r8, r9);
    rsp38 = reinterpret_cast<struct s9*>(rsp91 + 1);
    goto addr_40374e_30;
    addr_4033a5_6:
    if (*reinterpret_cast<uint32_t*>(&rdi9) >= 8) {
        *reinterpret_cast<uint32_t*>(&rax92) = *reinterpret_cast<uint32_t*>(&rdi9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax92) + 4) = 0;
        edi93 = *reinterpret_cast<uint32_t*>(&rdi9) - 1;
        *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbx7) + reinterpret_cast<uint64_t>(rax92) - 8) = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp8) + reinterpret_cast<uint64_t>(rax92) - 8);
        if (edi93 >= 8) {
            edi94 = edi93 & 0xfffffff8;
            eax95 = 0;
            do {
                *reinterpret_cast<uint32_t*>(&rdx96) = eax95;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx96) + 4) = 0;
                eax95 = eax95 + 8;
                *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbx7) + reinterpret_cast<uint64_t>(rdx96)) = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp8) + reinterpret_cast<uint64_t>(rdx96));
            } while (eax95 < edi94);
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&rdi9) & 4) {
            addr_403444_15:
            *reinterpret_cast<uint32_t*>(&rdi97) = *reinterpret_cast<uint32_t*>(&rdi9);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi97) + 4) = 0;
            *reinterpret_cast<void***>(rbx7) = *rbp8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx7) + reinterpret_cast<uint64_t>(rdi97) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp8) + reinterpret_cast<uint64_t>(rdi97) - 4);
        } else {
            if (*reinterpret_cast<uint32_t*>(&rdi9) && (eax98 = reinterpret_cast<unsigned char>(*rbp8), *reinterpret_cast<void***>(rbx7) = *reinterpret_cast<void***>(&eax98), !!(*reinterpret_cast<unsigned char*>(&rdi9) & 2))) {
                *reinterpret_cast<uint32_t*>(&rdi99) = *reinterpret_cast<uint32_t*>(&rdi9);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi99) + 4) = 0;
                eax100 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rbp8) + reinterpret_cast<uint64_t>(rdi99) - 2);
                *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbx7) + reinterpret_cast<uint64_t>(rdi99) - 2) = *reinterpret_cast<int16_t*>(&eax100);
            }
        }
    }
    return;
}

int64_t signal = 0x3dcd9ba;

int64_t signal(int64_t rcx, ...) {
    goto signal;
}

struct s12 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

int32_t strncmp(unsigned char rcx, void** rdx, int64_t r8);

unsigned char _FindPESectionByName(void** rcx) {
    void** rsi2;
    void** rax3;
    struct s2* rdx4;
    int32_t eax5;
    struct s12* rcx6;
    uint64_t rax7;
    unsigned char rbx8;
    uint32_t eax9;
    int64_t rax10;
    unsigned char rdi11;
    int32_t eax12;

    rsi2 = rcx;
    rax3 = strlen(rcx);
    if (reinterpret_cast<unsigned char>(rax3) > reinterpret_cast<unsigned char>(8) || ((rdx4 = refptr___image_base__, rdx4->f0 != 0x5a4d) || ((eax5 = text(rdx4), eax5 == 0) || (rcx6 = reinterpret_cast<struct s12*>(rdx4->f60 + reinterpret_cast<uint64_t>(rdx4)), *reinterpret_cast<uint32_t*>(&rax7) = rcx6->f20, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0, rbx8 = reinterpret_cast<unsigned char>(reinterpret_cast<uint64_t>(rcx6) + rax7 + 24), eax9 = rcx6->f6, eax9 == 0)))) {
        addr_403f60_2:
        return 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rax10) = eax9 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        rdi11 = reinterpret_cast<unsigned char>(reinterpret_cast<uint64_t>(rbx8 + (rax10 + rax10 * 4) * 8) + 40);
        do {
            eax12 = strncmp(rbx8, rsi2, 8);
            if (!eax12) 
                break;
            rbx8 = reinterpret_cast<unsigned char>(rbx8 + 40);
        } while (rbx8 != rdi11);
        goto addr_403f60_2;
    }
    return rbx8;
}

struct s13 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    signed char[23] pad39;
    unsigned char f39;
};

struct s14 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s13* _FindPESectionExec(int64_t rcx) {
    struct s2* r8_2;
    int64_t rdx3;
    int32_t eax4;
    struct s14* rcx5;
    void* rax6;
    struct s13* rax7;
    uint32_t ecx8;
    int64_t rcx9;
    struct s13* rcx10;

    r8_2 = refptr___image_base__;
    rdx3 = rcx;
    if (r8_2->f0 != 0x5a4d || ((eax4 = text(r8_2), eax4 == 0) || (rcx5 = reinterpret_cast<struct s14*>(r8_2->f60 + reinterpret_cast<uint64_t>(r8_2)), *reinterpret_cast<uint32_t*>(&rax6) = rcx5->f20, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0, rax7 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(rcx5) + reinterpret_cast<uint64_t>(rax6) + 24), ecx8 = rcx5->f6, ecx8 == 0))) {
        addr_404098_2:
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx9) = ecx8 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        rcx10 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(rax7) + (rcx9 + rcx9 * 4) * 8 + 40);
        do {
            if (rax7->f39 & 32) {
                if (!rdx3) 
                    break;
                --rdx3;
            }
            ++rax7;
        } while (rax7 != rcx10);
        goto addr_404098_2;
    }
    return rax7;
}

int64_t EnterCriticalSection = 0x3dcd5a8;

/* .bss */
void** bss;

int64_t TlsGetValue = 0x3dcd76c;

int64_t LeaveCriticalSection = 0x3dcd692;

/* .text */
void text() {
    void** rbx1;
    int64_t rbp2;
    int64_t rdi3;
    int64_t rcx4;
    int64_t rax5;
    int32_t eax6;
    void** rax7;

    EnterCriticalSection(0x41cbb80);
    rbx1 = bss;
    if (rbx1) {
        rbp2 = TlsGetValue;
        rdi3 = GetLastError;
        do {
            *reinterpret_cast<void***>(&rcx4) = *reinterpret_cast<void***>(rbx1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
            rax5 = reinterpret_cast<int64_t>(rbp2(rcx4));
            eax6 = reinterpret_cast<int32_t>(rdi3(rcx4));
            if (!eax6 && rax5) {
                rax7 = *reinterpret_cast<void***>(rbx1 + 8);
                rax7(rax5);
            }
            rbx1 = *reinterpret_cast<void***>(rbx1 + 16);
        } while (rbx1);
    }
    goto LeaveCriticalSection;
}

void free(void** rcx, void** rdx, void** r8, void** r9, int64_t a5) {
    goto free;
}

struct s15 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f24;
};

/* .text */
int32_t text(struct s2* rcx) {
    struct s15* rcx2;
    int32_t eax3;

    rcx2 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rcx) + static_cast<int64_t>(rcx->f60));
    if (rcx2->f0 == 0x4550) {
        eax3 = 0;
        *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(rcx2->f24 == 0x20b);
        return eax3;
    } else {
        return 0;
    }
}

int64_t strncmp = 0x3dcd9da;

int32_t strncmp(unsigned char rcx, void** rdx, int64_t r8) {
    goto strncmp;
}

int64_t _snwprintf = 0x3dcd8ce;

void _snwprintf(void** rcx, void** rdx, void** r8, void** r9) {
    goto _snwprintf;
}

int64_t GetModuleFileNameW = 0x3dcd610;

void wcscpy(void** rcx, int64_t rdx, int64_t r8);

/* .refptr.mingw_app_type */
int32_t* refptr_mingw_app_type = reinterpret_cast<int32_t*>(0x41cb890);

int64_t MessageBoxW = 0x3dcda2c;

void raise(int64_t rcx, void** rdx, void** r8, void** r9);

void _exit(int64_t rcx, void** rdx, void** r8, void** r9);

void fwprintf();

unsigned char g412700 = 37;

/* .text */
void text(void** rcx, void** rdx, int32_t r8d, void** r9) {
    void** rax5;
    void** rdi6;
    int32_t eax7;
    void** r9_8;
    void** rdx9;
    void** r8_10;
    int32_t* rax11;
    int32_t eax12;
    int64_t v13;
    int64_t v14;
    void** rax15;
    void** r8_16;
    void** rbp17;
    void** rax18;
    void** rcx19;
    void** rax20;
    void** rsi21;
    void** rax22;
    void** rcx23;
    void** rax24;
    uint32_t ecx25;
    void** rbx26;
    void** r8_27;
    uint32_t ecx28;
    void** rax29;
    int64_t v30;

    rax5 = malloc(0x4000);
    if (rdx) {
        if (!*reinterpret_cast<void***>(rdx)) {
        }
    }
    if (rcx) {
        if (!*reinterpret_cast<void***>(rcx)) {
        }
    }
    rdi6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x250 - 8 + 8 + 64);
    eax7 = reinterpret_cast<int32_t>(GetModuleFileNameW());
    if (!eax7) {
        wcscpy(rdi6, "<", 0x104);
    }
    r9_8 = rdi6;
    *reinterpret_cast<int32_t*>(&rdx9) = 0x1fff;
    *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
    r8_10 = reinterpret_cast<void**>("A");
    _snwprintf(rax5, 0x1fff, "A", r9_8);
    rax11 = refptr_mingw_app_type;
    if (*rax11) {
        *reinterpret_cast<int32_t*>(&r9_8) = 0x12012;
        *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
        rdx9 = rax5;
        r8_10 = reinterpret_cast<void**>("M");
        eax12 = reinterpret_cast<int32_t>(MessageBoxW());
        if (eax12 != 3) {
            if (eax12 != 5) {
                abort();
            } else {
                return;
            }
        }
        raise(22, rdx9, "M", 0x12012);
        _exit(3, rdx9, "M", 0x12012);
    }
    rax15 = text(2, rdx9, r8_10, r9_8, v13, 2, rdx9, r8_10, r9_8, v14);
    r8_16 = rax5;
    fwprintf();
    abort();
    rbp17 = rax15;
    rax18 = strlen(rax15, rax15);
    rcx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax18) + reinterpret_cast<unsigned char>(rax18) + 2);
    rax20 = malloc(rcx19, rcx19);
    rsi21 = rax20;
    rax22 = strlen("%", "%");
    rcx23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax22) + reinterpret_cast<unsigned char>(rax22) + 2);
    rax24 = malloc(rcx23, rcx23);
    ecx25 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp17));
    rbx26 = rax24;
    *reinterpret_cast<int32_t*>(&r8_27) = *reinterpret_cast<int32_t*>(&r8_16);
    *reinterpret_cast<int32_t*>(&r8_27 + 4) = 0;
    if (!*reinterpret_cast<signed char*>(&ecx25)) {
        *reinterpret_cast<void***>(rsi21) = reinterpret_cast<void**>(0);
        ecx28 = g412700;
        if (*reinterpret_cast<signed char*>(&ecx28)) {
            addr_404423_20:
            *reinterpret_cast<int32_t*>(&r9_8) = 0;
            *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
        } else {
            goto addr_404480_22;
        }
    } else {
        *reinterpret_cast<int32_t*>(&r9_8) = 0;
        *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
        do {
            *reinterpret_cast<void***>(rsi21 + reinterpret_cast<unsigned char>(r9_8) * 2) = *reinterpret_cast<void***>(&ecx25);
            ++r9_8;
            ecx25 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + reinterpret_cast<unsigned char>(r9_8));
        } while (*reinterpret_cast<signed char*>(&ecx25));
        *reinterpret_cast<void***>(rsi21 + reinterpret_cast<unsigned char>(r9_8) * 2) = reinterpret_cast<void**>(0);
        ecx28 = g412700;
        if (!*reinterpret_cast<signed char*>(&ecx28)) 
            goto addr_404480_22; else 
            goto addr_404423_20;
    }
    do {
        *reinterpret_cast<void***>(rbx26 + reinterpret_cast<unsigned char>(r9_8) * 2) = *reinterpret_cast<void***>(&ecx28);
        ++r9_8;
        ecx28 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>("%") + reinterpret_cast<unsigned char>(r9_8));
    } while (*reinterpret_cast<signed char*>(&ecx28));
    rax29 = rbx26 + reinterpret_cast<unsigned char>(r9_8) * 2;
    addr_404446_28:
    *reinterpret_cast<void***>(rax29) = reinterpret_cast<void**>(0);
    text(rsi21, rbx26, *reinterpret_cast<int32_t*>(&r8_27), r9_8);
    free(rsi21, rbx26, r8_27, r9_8, v30);
    goto free;
    addr_404480_22:
    rax29 = rbx26;
    goto addr_404446_28;
}

int64_t realloc = 0x3dcd9b0;

void** realloc(void** rcx, void** rdx, void** r8, ...) {
    goto realloc;
}

struct s16 {
    void** f0;
    signed char[7] pad8;
    void** f8;
};

int64_t localeconv = 0x3dcd97c;

struct s16* localeconv() {
    goto localeconv;
}

int64_t isspace = 0x3dcd95c;

int32_t isspace() {
    goto isspace;
}

int64_t getc();

int64_t in_ch(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    int32_t eax6;
    int64_t rax7;
    int64_t rax8;
    int64_t rax9;
    void** rcx10;

    if (*reinterpret_cast<int32_t*>(rcx + 0x100c)) {
        eax6 = *reinterpret_cast<int32_t*>(rcx + 0x100c) - 1;
        *reinterpret_cast<int32_t*>(rcx + 0x100c) = eax6;
        *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx + eax6 * 4) + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        *reinterpret_cast<void***>(rdx) = *reinterpret_cast<void***>(rdx) + 1;
        return rax7;
    }
    if (*reinterpret_cast<unsigned char*>(rcx + 0x1010) & 1) {
        *reinterpret_cast<uint32_t*>(&rax8) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    } else {
        if (!(*reinterpret_cast<unsigned char*>(rcx + 0x1008) & 1)) {
            rax9 = getc();
            if (*reinterpret_cast<int32_t*>(&rax9) != -1) {
                *reinterpret_cast<void***>(rdx) = *reinterpret_cast<void***>(rdx) + 1;
                return rax9;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rax8) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rcx)));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
            rcx10 = *reinterpret_cast<void***>(rcx) + 1;
            if (!*reinterpret_cast<uint32_t*>(&rax8)) {
                *reinterpret_cast<unsigned char*>(rcx + 0x1010) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rcx + 0x1010) | 1);
                *reinterpret_cast<uint32_t*>(&rax8) = 0xffffffff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
            } else {
                *reinterpret_cast<void***>(rdx) = *reinterpret_cast<void***>(rdx) + 1;
                *reinterpret_cast<void***>(rcx) = rcx10;
            }
        }
    }
    return rax8;
}

void ungetc();

void back_ch(uint32_t ecx, void** rdx, void** r8, uint32_t r9d, int64_t a5, ...) {
    int64_t r8_6;
    int64_t rax7;

    if (r9d & 1 || ecx != 0xffffffff) {
        if (!(*reinterpret_cast<unsigned char*>(rdx + 0x1008) & 1)) {
            ungetc();
            *reinterpret_cast<void***>(r8) = *reinterpret_cast<void***>(r8) - 1;
            return;
        } else {
            *reinterpret_cast<void***>(r8) = *reinterpret_cast<void***>(r8) - 1;
            r8_6 = *reinterpret_cast<int32_t*>(rdx + 0x100c);
            rax7 = r8_6;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rdx + r8_6 * 4) + 8) = ecx;
            *reinterpret_cast<int32_t*>(rdx + 0x100c) = *reinterpret_cast<int32_t*>(&rax7) + 1;
            return;
        }
    } else {
        return;
    }
}

void release_ptrs(void** rcx, void** rdx, void** r8, void** r9);

int64_t cleanup_return(uint32_t ecx, void** rdx, void** r8, void** r9, int64_t a5) {
    uint32_t esi6;
    void** r12_7;
    void** rbp8;
    void** rdi9;
    int64_t rax10;
    void** rcx11;
    void** rbx12;
    int64_t v13;
    void** rcx14;
    int64_t v15;
    void** rcx16;
    int64_t v17;
    int64_t rax18;

    esi6 = ecx;
    r12_7 = rdx;
    rbp8 = r8;
    rdi9 = r9;
    if (ecx == 0xffffffff) {
        release_ptrs(r12_7, r9, r8, r9);
        *reinterpret_cast<uint32_t*>(&rax10) = esi6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        return rax10;
    } else {
        rcx11 = *reinterpret_cast<void***>(rdx);
        if (rcx11) {
            do {
                rbx12 = *reinterpret_cast<void***>(rcx11 + 8);
                free(rcx11, rdx, r8, r9, v13);
                rcx11 = rbx12;
            } while (rbx12);
        }
        *reinterpret_cast<void***>(r12_7) = reinterpret_cast<void**>(0);
        if (rbp8) {
            rcx14 = *reinterpret_cast<void***>(rbp8);
            free(rcx14, rdx, r8, r9, v15);
            *reinterpret_cast<void***>(rbp8) = reinterpret_cast<void**>(0);
        }
        rcx16 = *reinterpret_cast<void***>(rdi9);
        free(rcx16, rdx, r8, r9, v17);
        *reinterpret_cast<uint32_t*>(&rax18) = esi6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
        *reinterpret_cast<void***>(rdi9) = reinterpret_cast<void**>(0);
        return rax18;
    }
}

int64_t _errno = 0x3dcd894;

int32_t* _errno() {
    goto _errno;
}

/* resize_gcollect.part.0 */
void** resize_gcollect_part_0(void** rcx, void** rdx, void** r8, ...) {
    void** rax4;

    rax4 = malloc(0x110);
    *reinterpret_cast<void***>(rax4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(rax4 + 8) = rcx;
    return rax4;
}

int32_t ___mb_cur_max_func();

int32_t ___lc_codepage_func();

/* .text */
int32_t text(void** rcx, void** rdx, void** r8, void** r9);

int64_t mbrtowc(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    void** rbx6;
    void** r9_7;
    int32_t eax8;

    rbx6 = rcx;
    if (!rcx) {
        rbx6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 88 + 78);
    }
    ___mb_cur_max_func();
    ___lc_codepage_func();
    r9_7 = reinterpret_cast<void**>(0x41cbbd8);
    if (r9) {
        r9_7 = r9;
    }
    eax8 = text(rbx6, rdx, r8, r9_7);
    return static_cast<int64_t>(eax8);
}

int64_t tolower = 0x3dcd9f8;

uint32_t tolower(int64_t rcx, void** rdx, void** r8, void** r9, int64_t a5) {
    goto tolower;
}

int64_t isxdigit = 0x3dcd970;

int32_t isxdigit(int64_t rcx, ...) {
    goto isxdigit;
}

void** resize_wbuf(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    void** rbx6;
    void** rax7;
    int64_t v8;

    if (*reinterpret_cast<void***>(rdx) == rcx) {
        rbx6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx)));
        if (reinterpret_cast<unsigned char>(rbx6) < reinterpret_cast<unsigned char>(0x100)) {
            rbx6 = reinterpret_cast<void**>(0x100);
        }
        if (r8) 
            goto addr_4045c9_5;
    } else {
        addr_4045a1_6:
        return r8;
    }
    rax7 = malloc(rbx6);
    if (rax7) {
        addr_4045e3_8:
        *reinterpret_cast<void***>(rdx) = rbx6;
        return rax7;
    } else {
        r8 = r8;
        goto addr_4045a1_6;
    }
    addr_4045c9_5:
    rax7 = realloc(r8, rbx6, r8);
    if (rax7) 
        goto addr_4045e3_8;
    free(r8, rbx6, r8, r9, v8);
    *reinterpret_cast<int32_t*>(&r8) = 0;
    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
    goto addr_4045a1_6;
}

int32_t isupper(int64_t rcx, ...);

int32_t islower(int64_t rcx, ...);

/* .text */
uint64_t text(void** rcx, void*** rdx, int32_t r8d, void** r9, int64_t a5) {
    void** rbx6;
    void*** rbp7;
    uint64_t rsi8;
    int32_t* rax9;
    uint64_t rax10;
    int64_t rdi11;
    int32_t eax12;
    int32_t r15d13;
    int32_t eax14;
    uint32_t edx15;
    int64_t r12_16;
    uint32_t edx17;
    uint32_t r12d18;
    int64_t rcx19;
    int32_t eax20;
    int64_t rcx21;
    int32_t eax22;
    uint32_t eax23;
    uint32_t eax24;
    void** rbx25;
    uint64_t r14_26;
    int64_t r13_27;
    uint32_t edx28;
    uint32_t ecx29;
    int64_t rcx30;
    int32_t eax31;
    int64_t rcx32;
    int32_t eax33;
    int32_t* rax34;
    int32_t* rax35;

    rbx6 = rcx;
    rbp7 = rdx;
    rsi8 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r8d));
    if (rdx) {
        *rbp7 = rcx;
    }
    if (*reinterpret_cast<uint32_t*>(&rsi8) == 1 || *reinterpret_cast<uint32_t*>(&rsi8) > 36) {
        rax9 = _errno();
        *rax9 = 33;
        *reinterpret_cast<int32_t*>(&rax10) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        goto addr_407f89_5;
    }
    while (*reinterpret_cast<uint32_t*>(&rdi11) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6)))), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0, eax12 = isspace(), r15d13 = eax12, !!eax12) {
        ++rbx6;
    }
    eax14 = static_cast<int32_t>(rdi11 - 43);
    edx15 = *reinterpret_cast<uint32_t*>(&rdi11);
    if (!(*reinterpret_cast<unsigned char*>(&eax14) & 0xfd)) 
        goto addr_407fbe_9;
    addr_407fc6_10:
    if (!*reinterpret_cast<uint32_t*>(&rsi8)) {
        *reinterpret_cast<uint32_t*>(&rsi8) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
        if (*reinterpret_cast<signed char*>(&edx15) != 48) {
            addr_407fd7_12:
            *reinterpret_cast<int32_t*>(&r12_16) = *reinterpret_cast<signed char*>(&edx15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = 0;
            edx17 = static_cast<uint32_t>(r12_16 - 48);
            if (edx17 <= 9) {
                addr_4080f9_13:
                r12d18 = *reinterpret_cast<uint32_t*>(&rsi8);
            } else {
                *reinterpret_cast<int32_t*>(&rcx19) = *reinterpret_cast<int32_t*>(&r12_16);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
                eax20 = isupper(rcx19);
                if (!eax20) {
                    *reinterpret_cast<int32_t*>(&rcx21) = *reinterpret_cast<int32_t*>(&r12_16);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
                    eax22 = islower(rcx21);
                    *reinterpret_cast<int32_t*>(&rax10) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
                    if (!eax22) 
                        goto addr_407f89_5;
                    edx17 = static_cast<uint32_t>(r12_16 - 87);
                    goto addr_4080f9_13;
                } else {
                    edx17 = static_cast<uint32_t>(r12_16 - 55);
                    r12d18 = *reinterpret_cast<uint32_t*>(&rsi8);
                }
            }
        } else {
            eax23 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 1))) & 0xffffffdf;
            if (*reinterpret_cast<signed char*>(&eax23) != 88) {
                r12d18 = 8;
                *reinterpret_cast<uint32_t*>(&rsi8) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
                edx17 = 0;
            } else {
                addr_408092_20:
                edx15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 2));
                *reinterpret_cast<uint32_t*>(&rsi8) = 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
                rbx6 = rbx6 + 2;
                goto addr_407fd7_12;
            }
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rsi8) != 16) 
            goto addr_407fd7_12;
        if (*reinterpret_cast<signed char*>(&edx15) != 48) 
            goto addr_407fd7_12;
        r12d18 = 16;
        eax24 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 1))) & 0xffffffdf;
        if (*reinterpret_cast<signed char*>(&eax24) == 88) 
            goto addr_408092_20;
        edx17 = 0;
    }
    *reinterpret_cast<int32_t*>(&rax10) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    if (edx17 >= r12d18) {
        addr_407f89_5:
        return rax10;
    } else {
        rbx25 = rbx6 + 1;
        r14_26 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(edx17)));
        while (1) {
            *reinterpret_cast<int32_t*>(&r13_27) = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx25));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = 0;
            edx28 = static_cast<uint32_t>(r13_27 - 48);
            ecx29 = edx28;
            if (edx28 > 9 && (*reinterpret_cast<int32_t*>(&rcx30) = *reinterpret_cast<int32_t*>(&r13_27), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = 0, eax31 = isupper(rcx30), ecx29 = static_cast<uint32_t>(r13_27 - 55), !eax31)) {
                *reinterpret_cast<int32_t*>(&rcx32) = *reinterpret_cast<int32_t*>(&r13_27);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = 0;
                eax33 = islower(rcx32);
                if (!eax33) 
                    break;
                ecx29 = static_cast<uint32_t>(r13_27 - 87);
            }
            if (ecx29 >= r12d18) 
                break;
            if (0x7fffffffffffffff / reinterpret_cast<int64_t>(rsi8) + 2 >= r14_26) {
                r14_26 = r14_26 * rsi8 + static_cast<int64_t>(reinterpret_cast<int32_t>(ecx29));
            } else {
                r15d13 = 1;
            }
            ++rbx25;
        }
        if (rbp7) 
            goto addr_4080a9_36;
    }
    addr_4080ad_37:
    if (*reinterpret_cast<signed char*>(&rdi11) == 45) {
        if (r14_26 > 0x8000000000000000 || r15d13) {
            rax34 = _errno();
            *rax34 = 34;
            rax10 = 0x8000000000000000;
            goto addr_407f89_5;
        } else {
            rax10 = -r14_26;
            goto addr_407f89_5;
        }
    } else {
        rax10 = r14_26;
        if (reinterpret_cast<int64_t>(r14_26) < reinterpret_cast<int64_t>(0) || r15d13) {
            rax35 = _errno();
            *rax35 = 34;
            rax10 = 0x7fffffffffffffff;
            goto addr_407f89_5;
        }
    }
    addr_4080a9_36:
    *rbp7 = rbx25;
    goto addr_4080ad_37;
    addr_407fbe_9:
    edx15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 1));
    ++rbx6;
    goto addr_407fc6_10;
}

/* .text */
void text(void** rcx, void** rdx, void** r8, void** r9) {
    void** rcx5;
    void** rdx6;
    void** rax7;

    if (rcx && ((rcx5 = *reinterpret_cast<void***>(rcx), !!rcx5) && ((rdx6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx) - reinterpret_cast<unsigned char>(rcx5)), rdx6 != r8) && (rax7 = realloc(rcx5, rdx6, r8), !!rax7)))) {
        *reinterpret_cast<void***>(rcx) = rax7;
    }
    return;
}

struct s17 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
};

uint32_t __strtodg(void** rcx, void*** rdx, struct s17* r8, void** r9);

/* .text */
void* text(void* rcx, void** rdx, void*** r8) {
    uint32_t eax4;
    int64_t rdx5;

    __asm__("fldz ");
    __asm__("fstp tword [rsp+0x40]");
    eax4 = __strtodg(rdx, r8, "@", reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 80 + 52);
    *reinterpret_cast<uint32_t*>(&rdx5) = eax4 & 7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdx5) > 5) {
        if (*reinterpret_cast<unsigned char*>(&eax4) & 8) {
        }
        __asm__("fld tword [rsp+0x40]");
        __asm__("fstp tword [rbx]");
        return rcx;
    } else {
        goto *reinterpret_cast<int32_t*>(0x412970 + rdx5 * 4) + 0x412970;
    }
}

int64_t strtol = 0x3dcd9e4;

int32_t strtol(void** rcx, void*** rdx, int64_t r8, void** r9, int64_t a5) {
    goto strtol;
}

int64_t ___mb_cur_max_func = 0x3dcd7fc;

int32_t ___mb_cur_max_func() {
    goto ___mb_cur_max_func;
}

int64_t ___lc_codepage_func = 0x3dcd7e6;

int32_t ___lc_codepage_func() {
    goto ___lc_codepage_func;
}

int64_t MultiByteToWideChar = 0x3dcd6aa;

int64_t IsDBCSLeadByteEx = 0x3dcd67e;

/* .text */
int32_t text(void** rcx, void** rdx, void** r8, void** r9) {
    int32_t eax5;
    uint32_t edx6;
    void** ecx7;
    uint32_t v8;
    void** r8_9;
    int64_t rcx10;
    int32_t v11;
    int32_t eax12;
    int64_t rcx13;
    int32_t v14;
    int32_t eax15;
    int32_t v16;
    uint32_t eax17;
    uint32_t eax18;
    int64_t rcx19;
    int32_t v20;
    int32_t eax21;
    int32_t* rax22;

    eax5 = 0;
    if (!rdx) {
        addr_407cc3_2:
        return eax5;
    } else {
        if (!r8) {
            eax5 = -2;
            goto addr_407cc3_2;
        } else {
            edx6 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx));
            ecx7 = *reinterpret_cast<void***>(r9);
            *reinterpret_cast<void***>(r9) = reinterpret_cast<void**>(0);
            if (!*reinterpret_cast<signed char*>(&edx6)) {
                *reinterpret_cast<void***>(rcx) = reinterpret_cast<void**>(0);
                return 0;
            }
            if (v8 <= 1) 
                goto addr_407ce0_8;
            if (!*reinterpret_cast<signed char*>(&ecx7)) 
                goto addr_407c5f_10;
        }
    }
    r8_9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 88 + 76);
    addr_407ca4_12:
    *reinterpret_cast<int32_t*>(&rcx10) = v11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    eax12 = reinterpret_cast<int32_t>(MultiByteToWideChar(rcx10, 8, r8_9, 2));
    if (!eax12) 
        goto addr_407d6a_13;
    eax5 = 2;
    goto addr_407cc3_2;
    addr_407c5f_10:
    *reinterpret_cast<int32_t*>(&rcx13) = v14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
    eax15 = reinterpret_cast<int32_t>(IsDBCSLeadByteEx(rcx13));
    if (!eax15) {
        addr_407ce0_8:
        if (!v16) {
            eax17 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx));
            *reinterpret_cast<void***>(rcx) = *reinterpret_cast<void***>(&eax17);
            return 1;
        }
    } else {
        if (reinterpret_cast<unsigned char>(r8) <= reinterpret_cast<unsigned char>(1)) {
            eax18 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx));
            *reinterpret_cast<void***>(r9) = *reinterpret_cast<void***>(&eax18);
            eax5 = -2;
            goto addr_407cc3_2;
        } else {
            r8_9 = rdx;
            goto addr_407ca4_12;
        }
    }
    *reinterpret_cast<int32_t*>(&rcx19) = v20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
    eax21 = reinterpret_cast<int32_t>(MultiByteToWideChar(rcx19, 8, rdx, 1));
    if (!eax21) {
        addr_407d6a_13:
        rax22 = _errno();
        *rax22 = 42;
        eax5 = -1;
        goto addr_407cc3_2;
    } else {
        eax5 = 1;
        goto addr_407cc3_2;
    }
}

int64_t isupper = 0x3dcd966;

int32_t isupper(int64_t rcx, ...) {
    goto isupper;
}

int64_t islower = 0x3dcd952;

int32_t islower(int64_t rcx, ...) {
    goto islower;
}

/* .text */
int32_t text(signed char* rcx, uint16_t dx, int32_t r8d, int32_t r9d);

int32_t wcrtomb(signed char* rcx, uint32_t edx, void* r8, void** r9) {
    signed char* rbx5;
    uint32_t esi6;
    int32_t eax7;
    int32_t eax8;
    uint32_t edx9;
    int32_t eax10;
    int64_t rax11;

    rbx5 = rcx;
    esi6 = edx;
    if (!rcx) {
        rbx5 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 48 + 43);
    }
    eax7 = ___mb_cur_max_func();
    eax8 = ___lc_codepage_func();
    edx9 = *reinterpret_cast<uint16_t*>(&esi6);
    eax10 = text(rbx5, *reinterpret_cast<uint16_t*>(&edx9), eax8, eax7);
    rax11 = eax10;
    return *reinterpret_cast<int32_t*>(&rax11);
}

void fputc();

void __pformat_putc(signed char cl, void** rdx, ...) {
    int32_t eax3;

    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 8)) & 0x4000 || (eax3 = *reinterpret_cast<int32_t*>(rdx + 36), *reinterpret_cast<int32_t*>(rdx + 40) > eax3)) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 8)) & 0x2000) {
            fputc();
            *reinterpret_cast<int32_t*>(rdx + 36) = *reinterpret_cast<int32_t*>(rdx + 36) + 1;
            return;
        } else {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rdx + 36)))) = cl;
            eax3 = *reinterpret_cast<int32_t*>(rdx + 36);
        }
    }
    *reinterpret_cast<int32_t*>(rdx + 36) = eax3 + 1;
    return;
}

/* .text */
void** text(void** rcx, void* rdx) {
    void** r8_3;
    void* rax4;

    r8_3 = rcx;
    if (rdx) {
        if (*reinterpret_cast<void***>(rcx)) {
            do {
                ++rcx;
                rax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<unsigned char>(r8_3));
                if (reinterpret_cast<uint64_t>(rax4) >= reinterpret_cast<uint64_t>(rdx)) 
                    break;
            } while (*reinterpret_cast<void***>(rcx));
            return *reinterpret_cast<void***>(&rax4);
        }
    }
    return 0;
}

void __pformat_putchars(void* rcx, void** edx, void** r8) {
    int64_t rdi4;
    void* rsi5;
    void** rbx6;
    void** eax7;
    int1_t zf8;
    int64_t rax9;
    void* rax10;
    void* rdi11;
    int32_t ecx12;
    int64_t rax13;
    int64_t rax14;

    *reinterpret_cast<void***>(&rdi4) = *reinterpret_cast<void***>(r8 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    rsi5 = rcx;
    rbx6 = r8;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdi4)) >= reinterpret_cast<signed char>(edx) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdi4)) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(&rdi4) = edx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdi4)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 12))) {
        eax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 12)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdi4)));
        zf8 = (*reinterpret_cast<unsigned char*>(rbx6 + 9) & 4) == 0;
        *reinterpret_cast<void***>(rbx6 + 12) = eax7;
        if (zf8) {
            *reinterpret_cast<void***>(rbx6 + 12) = eax7 - 1;
            do {
                __pformat_putc(32, rbx6);
                *reinterpret_cast<void***>(&rax9) = *reinterpret_cast<void***>(rbx6 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
                *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax9 - 1));
            } while (*reinterpret_cast<void***>(&rax9));
        }
        if (!*reinterpret_cast<void***>(&rdi4)) {
            goto addr_40863f_9;
        }
    }
    *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(0xffffffff);
    if (!*reinterpret_cast<void***>(&rdi4)) {
        *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(0xfffffffe);
    } else {
        *reinterpret_cast<int32_t*>(&rax10) = static_cast<int32_t>(rdi4 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        rdi11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi5) + reinterpret_cast<int64_t>(rax10) + 1);
        goto addr_408610_13;
    }
    addr_40864c_14:
    return;
    do {
        addr_408610_13:
        rsi5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi5) + 1);
        ecx12 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi5) - 1);
        __pformat_putc(*reinterpret_cast<signed char*>(&ecx12), rbx6);
    } while (rdi11 != rsi5);
    *reinterpret_cast<void***>(&rax13) = *reinterpret_cast<void***>(rbx6 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax13 - 1));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax13)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax13) == 0))) {
        do {
            __pformat_putc(32, rbx6);
            addr_40863f_9:
            *reinterpret_cast<void***>(&rax14) = *reinterpret_cast<void***>(rbx6 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
            *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax14 - 1));
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax14)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax14) == 0)));
        goto addr_40864c_14;
    }
}

int64_t ___chkstk_ms(void** rcx, ...) {
    int64_t v2;
    int64_t rax3;
    void* rcx4;
    uint64_t rax5;
    uint64_t rax6;
    uint64_t* rcx7;

    v2 = rax3;
    rcx4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 + 24);
    if (rax5 >= 0x1000) {
        do {
            rcx4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx4) - 0x1000);
            rax6 = rax6 - 0x1000;
        } while (rax6 > 0x1000);
    }
    rcx7 = reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rcx4) - rax6);
    *rcx7 = *rcx7;
    return v2;
}

void __pformat_wputchars(uint16_t* rcx, void** edx, void** r8, void** r9, int64_t a5) {
    void* rsp6;
    void* r14_7;
    void** rsi8;
    signed char* r12_9;
    uint16_t* r13_10;
    void** ebp11;
    void** eax12;
    int1_t zf13;
    int64_t rax14;
    uint32_t edx15;
    int32_t eax16;
    void* rax17;
    signed char* rbx18;
    signed char* rdi19;
    int32_t ecx20;
    signed char v21;
    int64_t rax22;

    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 64);
    r14_7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 44);
    rsi8 = r8;
    r12_9 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp6) + 48);
    r13_10 = rcx;
    wcrtomb(r12_9, 0, r14_7, r9);
    ebp11 = *reinterpret_cast<void***>(rsi8 + 16);
    if (reinterpret_cast<signed char>(ebp11) >= reinterpret_cast<signed char>(edx) || reinterpret_cast<signed char>(ebp11) < reinterpret_cast<signed char>(0)) {
        ebp11 = edx;
    }
    if (reinterpret_cast<signed char>(ebp11) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi8 + 12))) {
        eax12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi8 + 12)) - reinterpret_cast<unsigned char>(ebp11));
        zf13 = (*reinterpret_cast<unsigned char*>(rsi8 + 9) & 4) == 0;
        *reinterpret_cast<void***>(rsi8 + 12) = eax12;
        if (zf13) {
            *reinterpret_cast<void***>(rsi8 + 12) = eax12 - 1;
            do {
                __pformat_putc(32, rsi8, 32, rsi8);
                *reinterpret_cast<void***>(&rax14) = *reinterpret_cast<void***>(rsi8 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
                *reinterpret_cast<void***>(rsi8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax14 - 1));
            } while (*reinterpret_cast<void***>(&rax14));
        }
    } else {
        *reinterpret_cast<void***>(rsi8 + 12) = reinterpret_cast<void**>(0xffffffff);
    }
    while (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp11 == 0)) && (++r13_10, edx15 = *(r13_10 - 1), eax16 = wcrtomb(r12_9, edx15, r14_7, r9), !(reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0)))) {
        *reinterpret_cast<int32_t*>(&rax17) = eax16 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
        rbx18 = r12_9;
        rdi19 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r12_9) + reinterpret_cast<int64_t>(rax17) + 1);
        do {
            ++rbx18;
            ecx20 = v21;
            __pformat_putc(*reinterpret_cast<signed char*>(&ecx20), rsi8, *reinterpret_cast<signed char*>(&ecx20), rsi8);
        } while (rbx18 != rdi19);
        --ebp11;
    }
    while (*reinterpret_cast<void***>(&rax22) = *reinterpret_cast<void***>(rsi8 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0, *reinterpret_cast<void***>(rsi8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax22 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax22)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax22) == 0))) {
        __pformat_putc(32, rsi8, 32, rsi8);
    }
    return;
}

struct s18 {
    signed char[32] pad32;
    signed char f32;
};

void __pformat_emit_radix_point(void** rcx, void** rdx, ...) {
    void* rsp3;
    void* rsp4;
    void** rsi5;
    struct s16* rax6;
    void** rdx7;
    void** r9_8;
    int64_t v9;
    int64_t rax10;
    uint32_t edx11;
    uint16_t v12;
    int64_t rax13;
    struct s18* rsp14;
    signed char* rbx15;
    int64_t* rsp16;
    int32_t eax17;
    void* rsp18;
    void* rax19;
    signed char* r12_20;
    int32_t ecx21;
    int64_t* rsp22;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8);
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 48);
    rsi5 = rcx;
    if (*reinterpret_cast<void***>(rcx + 20) == 0xfffffffd) {
        rax6 = localeconv();
        rcx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + 0xfffffffffffffffa);
        rdx7 = rax6->f0;
        r9_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + 0xfffffffffffffffc);
        rax10 = mbrtowc(rcx, rdx7, 16, r9_8, v9);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8);
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax10)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax10) == 0)) {
            edx11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rsi5 + 24));
        } else {
            edx11 = v12;
            *reinterpret_cast<void***>(rsi5 + 24) = *reinterpret_cast<void***>(&edx11);
        }
        *reinterpret_cast<void***>(rsi5 + 20) = *reinterpret_cast<void***>(&rax10);
    } else {
        edx11 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx + 24));
    }
    if (!*reinterpret_cast<void***>(&edx11)) {
        __pformat_putc(46, rsi5, 46, rsi5);
        return;
    } else {
        rax13 = ___chkstk_ms(rcx, rcx);
        rsp14 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax13);
        rbx15 = &rsp14->f32;
        rsp16 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp14) - 8);
        *rsp16 = 0x4087e2;
        eax17 = wcrtomb(rbx15, edx11, reinterpret_cast<int64_t>(rsp3) - 4, r9_8);
        rsp18 = reinterpret_cast<void*>(rsp16 + 1);
        if (reinterpret_cast<uint1_t>(eax17 < 0) | reinterpret_cast<uint1_t>(eax17 == 0)) {
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp18) - 8) = 0x40887d;
            __pformat_putc(46, rsi5, 46, rsi5);
        } else {
            *reinterpret_cast<int32_t*>(&rax19) = eax17 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
            r12_20 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx15) + reinterpret_cast<int64_t>(rax19) + 1);
            do {
                ++rbx15;
                ecx21 = *(rbx15 - 1);
                rsp22 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp18) - 8);
                *rsp22 = 0x408802;
                __pformat_putc(*reinterpret_cast<signed char*>(&ecx21), rsi5, *reinterpret_cast<signed char*>(&ecx21), rsi5);
                rsp18 = reinterpret_cast<void*>(rsp22 + 1);
            } while (rbx15 != r12_20);
        }
        return;
    }
}

struct s19 {
    uint64_t f0;
    uint16_t f8;
};

/* .text */
void** text(int64_t rcx, uint32_t edx, struct s19* r8, uint32_t* r9);

/* .text */
void** text(int32_t ecx, struct s19* rdx, void** r8d, void** r9) {
    uint64_t rax5;
    int64_t rdx6;
    int64_t r10_7;
    uint16_t r10w8;
    uint64_t rdx9;
    uint32_t r10d10;
    uint32_t edx11;
    uint32_t r10d12;
    uint64_t rdx13;
    uint32_t* v14;
    void** rax15;

    rax5 = rdx->f0;
    *reinterpret_cast<uint16_t*>(&rdx6) = rdx->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
    r10_7 = rdx6;
    r10w8 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_7) & 0x7fff);
    if (r10w8) {
        if (r10w8 == 0x7fff) {
            rdx9 = rax5 >> 32;
            if (!(*reinterpret_cast<uint32_t*>(&rdx9) & 0x7fffffff | *reinterpret_cast<uint32_t*>(&rax5))) {
                r10d10 = rdx->f8;
                edx11 = 0;
            } else {
                edx11 = 0;
                r10d12 = 0;
                goto addr_4083cf_6;
            }
        } else {
            r10d10 = rdx->f8;
            goto addr_4083b1_8;
        }
    } else {
        r10d10 = rdx->f8;
        rdx13 = rax5 >> 32;
        if (*reinterpret_cast<uint32_t*>(&rax5) | *reinterpret_cast<uint32_t*>(&rdx13)) {
            if (*reinterpret_cast<int32_t*>(&rdx13) < reinterpret_cast<int32_t>(0)) {
                addr_4083b1_8:
                edx11 = (r10d10 & 0x7fff) - 0x403e;
            } else {
                edx11 = 0xffffbfc3;
            }
        } else {
            edx11 = 0;
        }
    }
    r10d12 = r10d10 & 0x8000;
    addr_4083cf_6:
    *v14 = r10d12;
    rax15 = text("@", edx11, rdx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 88 + 68);
    return rax15;
}

void __pformat_emit_float(int32_t ecx, void** rdx, void** r8d, void** r9) {
    int32_t ebp5;
    void** rdi6;
    void** ecx7;
    int64_t rsi8;
    void** rbx9;
    void** ecx10;
    uint1_t less_or_equal11;
    void** eax12;
    void** ecx13;
    void** eax14;
    int64_t rdx15;
    uint32_t edx16;
    void** eax17;
    int64_t rax18;
    uint16_t* r12_19;
    uint32_t eax20;
    int32_t ecx21;
    int64_t rdx22;
    int64_t v23;
    void** eax24;
    int64_t rax25;
    uint32_t eax26;
    int32_t ecx27;
    int64_t rax28;
    int64_t rax29;

    ebp5 = ecx;
    rdi6 = rdx;
    ecx7 = *reinterpret_cast<void***>(r9 + 12);
    *reinterpret_cast<void***>(&rsi8) = r8d;
    rbx9 = r9;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d == 0)) {
        if (reinterpret_cast<signed char>(ecx7) <= reinterpret_cast<signed char>(0)) {
            if (reinterpret_cast<signed char>(ecx7) < reinterpret_cast<signed char>(0)) {
                *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
                goto addr_4088dc_5;
            }
        } else {
            --ecx7;
            *reinterpret_cast<void***>(r9 + 12) = ecx7;
        }
    } else {
        if (reinterpret_cast<signed char>(r8d) > reinterpret_cast<signed char>(ecx7)) {
            *reinterpret_cast<void***>(r9 + 12) = reinterpret_cast<void**>(0xffffffff);
            goto addr_40897d_9;
        } else {
            ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx7) - reinterpret_cast<unsigned char>(r8d));
            *reinterpret_cast<void***>(r9 + 12) = ecx7;
        }
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 16)) < reinterpret_cast<signed char>(ecx7)) {
        ecx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx7) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9 + 16)));
        less_or_equal11 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx9 + 16) == 0));
        *reinterpret_cast<void***>(rbx9 + 12) = ecx10;
        if (!less_or_equal11 || (eax12 = *reinterpret_cast<void***>(rbx9 + 8), !!(*reinterpret_cast<unsigned char*>(&eax12 + 1) & 8))) {
            --ecx10;
            *reinterpret_cast<void***>(rbx9 + 12) = ecx10;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) 
                goto addr_4089d2_14;
            if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
                goto addr_4089d2_14;
            if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                goto addr_4089d2_14;
        } else {
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0) || (!(*reinterpret_cast<unsigned char*>(&eax12 + 1) & 16) || !*reinterpret_cast<uint16_t*>(rbx9 + 32))) {
                addr_4089da_19:
                if (ebp5) {
                    ecx13 = ecx10 - 1;
                    *reinterpret_cast<void***>(rbx9 + 12) = ecx13;
                    if (!ecx13) 
                        goto addr_408a32_21;
                    eax14 = *reinterpret_cast<void***>(rbx9 + 8);
                    goto addr_4089fe_23;
                } else {
                    eax14 = *reinterpret_cast<void***>(rbx9 + 8);
                    if (!(reinterpret_cast<unsigned char>(eax14) & 0x1c0)) {
                        if (*reinterpret_cast<unsigned char*>(&eax14 + 1) & 6 || (*reinterpret_cast<void***>(&rdx15) = *reinterpret_cast<void***>(rbx9 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx15 - 1)), reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx15)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rdx15) == 0))) {
                            addr_4088e7_26:
                            if (*reinterpret_cast<unsigned char*>(&eax14 + 1) & 1) {
                                __pformat_putc(43, rbx9);
                                goto addr_4088f8_28;
                            } else {
                                if (*reinterpret_cast<unsigned char*>(&eax14) & 64) {
                                    __pformat_putc(32, rbx9);
                                    goto addr_4088f8_28;
                                }
                            }
                        } else {
                            goto addr_408a10_32;
                        }
                    } else {
                        ecx13 = ecx10 - 1;
                        *reinterpret_cast<void***>(rbx9 + 12) = ecx13;
                        if (!ecx13) 
                            goto addr_4088e7_26; else 
                            goto addr_4089fe_23;
                    }
                }
            }
        }
    } else {
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0))) 
            goto addr_40897d_9; else 
            goto addr_4088dc_5;
    }
    addr_408997_36:
    edx16 = __intrinsic() >> 1;
    if (reinterpret_cast<int32_t>(edx16) <= reinterpret_cast<int32_t>(1)) {
        addr_4089d2_14:
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx10 == 0)) 
            goto addr_4088dc_5; else 
            goto addr_4089da_19;
    } else {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx10 == 0)) 
            goto addr_4088dc_5;
        eax17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx10) - edx16 + 1);
        do {
            --ecx10;
            if (eax17 == ecx10) 
                break;
        } while (ecx10);
        goto addr_408c22_41;
    }
    *reinterpret_cast<void***>(rbx9 + 12) = ecx10;
    goto addr_4089d2_14;
    addr_408c22_41:
    *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0);
    goto addr_4088dc_5;
    addr_4089fe_23:
    if (*reinterpret_cast<unsigned char*>(&eax14 + 1) & 6) {
        addr_4088dc_5:
        if (ebp5) {
            addr_408a32_21:
            __pformat_putc(45, rbx9);
        } else {
            addr_4088e4_43:
            eax14 = *reinterpret_cast<void***>(rbx9 + 8);
            goto addr_4088e7_26;
        }
    } else {
        *reinterpret_cast<void***>(rbx9 + 12) = ecx13 - 1;
        goto addr_408a10_32;
    }
    addr_4088f8_28:
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx9 + 12) == 0)) && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9 + 8)) & 0x600) == 0x200) {
        *reinterpret_cast<void***>(rbx9 + 12) = *reinterpret_cast<void***>(rbx9 + 12) - 1;
        do {
            __pformat_putc(48, rbx9);
            *reinterpret_cast<void***>(&rax18) = *reinterpret_cast<void***>(rbx9 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax18 - 1));
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax18)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax18) == 0)));
    }
    r12_19 = reinterpret_cast<uint16_t*>(rbx9 + 32);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0))) {
        while (1) {
            eax20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi6));
            ecx21 = 48;
            if (*reinterpret_cast<signed char*>(&eax20)) {
                ++rdi6;
                ecx21 = *reinterpret_cast<signed char*>(&eax20);
            }
            __pformat_putc(*reinterpret_cast<signed char*>(&ecx21), rbx9, *reinterpret_cast<signed char*>(&ecx21), rbx9);
            *reinterpret_cast<void***>(&rsi8) = *reinterpret_cast<void***>(&rsi8) - 1;
            if (!*reinterpret_cast<void***>(&rsi8)) 
                break;
            if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
                continue;
            if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                continue;
            *reinterpret_cast<uint32_t*>(&rdx22) = __intrinsic() >> 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = 0;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&rsi8) == static_cast<uint32_t>(rdx22 + rdx22 * 2))) 
                continue;
            __pformat_wputchars(r12_19, 1, rbx9, r9, v23);
        }
        eax24 = *reinterpret_cast<void***>(rbx9 + 16);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax24) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax24 == 0))) 
            goto addr_408c15_57;
        if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 8)) 
            goto addr_408a62_59;
        addr_408c15_57:
        __pformat_emit_radix_point(rbx9, rbx9, rbx9, rbx9);
        goto addr_408acb_60;
    }
    __pformat_putc(48, rbx9);
    eax24 = *reinterpret_cast<void***>(rbx9 + 16);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax24) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax24 == 0)) || *reinterpret_cast<unsigned char*>(rbx9 + 9) & 8) {
        __pformat_emit_radix_point(rbx9, rbx9);
        if (!*reinterpret_cast<void***>(&rsi8)) {
            addr_408acb_60:
            while (*reinterpret_cast<void***>(&rax25) = *reinterpret_cast<void***>(rbx9 + 16), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax25 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax25)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax25) == 0))) {
                addr_408ab0_63:
                eax26 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi6));
                ecx27 = 48;
                if (*reinterpret_cast<signed char*>(&eax26)) {
                    ++rdi6;
                    ecx27 = *reinterpret_cast<signed char*>(&eax26);
                }
                __pformat_putc(*reinterpret_cast<signed char*>(&ecx27), rbx9, *reinterpret_cast<signed char*>(&ecx27), rbx9);
            }
        } else {
            eax24 = *reinterpret_cast<void***>(rbx9 + 16);
            goto addr_408a82_67;
        }
        return;
    }
    if (*reinterpret_cast<void***>(&rsi8)) {
        addr_408a82_67:
        *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi8)));
    } else {
        addr_408a62_59:
        *reinterpret_cast<void***>(rbx9 + 16) = eax24 - 1;
        goto addr_408a68_70;
    }
    do {
        __pformat_putc(48, rbx9);
        *reinterpret_cast<void***>(&rsi8) = *reinterpret_cast<void***>(&rsi8) + 1;
    } while (*reinterpret_cast<void***>(&rsi8));
    *reinterpret_cast<void***>(&rax28) = *reinterpret_cast<void***>(rbx9 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
    *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax28 - 1));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax28)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax28) == 0))) {
        goto addr_408ab0_63;
    }
    addr_408a68_70:
    return;
    do {
        addr_408a10_32:
        __pformat_putc(32, rbx9);
        *reinterpret_cast<void***>(&rax29) = *reinterpret_cast<void***>(rbx9 + 12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax29 - 1));
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax29)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax29) == 0)));
    if (!ebp5) 
        goto addr_4088e4_43; else 
        goto addr_408a32_21;
    addr_40897d_9:
    if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
        goto addr_4088dc_5;
    ecx10 = reinterpret_cast<void**>(0xffffffff);
    if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
        goto addr_4088dc_5; else 
        goto addr_408997_36;
}

/* .text */
void text(int32_t ecx, void** rdx, void** r8, void** r9, ...);

int32_t dtoa_CS_init;

void __freedtoa(void** rcx, ...) {
    void** ecx2;
    void** rdx3;
    void** rcx4;
    void** r8_5;
    void** r9_6;
    int64_t rdx7;
    int1_t zf8;
    void** rcx9;

    ecx2 = *reinterpret_cast<void***>(rcx + 0xfffffffffffffffc);
    rdx3 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx2));
    *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
    *reinterpret_cast<void***>(rcx + 4) = ecx2;
    rcx4 = rcx + 0xfffffffffffffffc;
    *reinterpret_cast<void***>(rcx + 8) = rdx3;
    if (rcx4) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx4 + 8)) > reinterpret_cast<signed char>(9)) {
            goto free;
        } else {
            text(0, rdx3, r8_5, r9_6);
            rdx7 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx4 + 8));
            zf8 = dtoa_CS_init == 2;
            rcx9 = *reinterpret_cast<void***>(0x41cc500 + rdx7 * 8);
            *reinterpret_cast<void***>(0x41cc500 + rdx7 * 8) = rcx4;
            *reinterpret_cast<void***>(rcx4) = rcx9;
            if (zf8) {
                goto LeaveCriticalSection;
            }
        }
    }
    return;
}

struct s20 {
    signed char[32] pad32;
    signed char f32;
};

struct s21 {
    signed char f0;
    signed char f1;
};

/* __pformat_int.isra.0 */
void __pformat_int_isra_0(void** rcx, void** rdx, void** r8) {
    void** r8d4;
    void** ebx5;
    void** r9d6;
    void** rsi7;
    void* r8d8;
    int64_t r10_9;
    int64_t rax10;
    struct s20* rsp11;
    struct s21* r12_12;
    struct s21* r8_13;
    struct s21* rdi14;
    uint32_t r13d15;
    void** rdx16;
    void*** rax17;
    void* rcx18;
    int32_t ecx19;
    uint64_t rax20;
    uint64_t rdx21;
    uint64_t rax22;
    int64_t rax23;
    uint64_t rax24;
    uint32_t edx25;
    uint64_t rax26;
    struct s21* rcx27;
    uint64_t rdx28;
    struct s21* rax29;
    uint64_t rax30;
    void** r10d31;
    int64_t rax32;
    int64_t* rsp33;
    int64_t rax34;
    int64_t rdx35;
    void** eax36;
    uint64_t rcx37;
    struct s21* rax38;
    struct s21* rdx39;
    struct s21* rbx40;
    int64_t rax41;
    int64_t* rsp42;
    int32_t ecx43;
    int64_t* rsp44;
    int64_t rax45;

    r8d4 = reinterpret_cast<void**>(0);
    ebx5 = *reinterpret_cast<void***>(rdx + 16);
    r9d6 = *reinterpret_cast<void***>(rdx + 8);
    rsi7 = rdx;
    if (reinterpret_cast<signed char>(ebx5) >= reinterpret_cast<signed char>(0)) {
        r8d4 = ebx5;
    }
    r8d8 = reinterpret_cast<void*>(r8d4 + 23);
    if (reinterpret_cast<unsigned char>(r9d6) & 0x1000 && *reinterpret_cast<uint16_t*>(rdx + 32)) {
        r8d8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8d8) + (__intrinsic() >> 1));
    }
    r10_9 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rsi7 + 12));
    if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r10_9)) >= reinterpret_cast<int32_t>(r8d8)) {
    }
    rax10 = ___chkstk_ms(rcx);
    rsp11 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax10);
    r12_12 = reinterpret_cast<struct s21*>(&rsp11->f32);
    if (*reinterpret_cast<unsigned char*>(&r9d6) & 0x80) {
        if (reinterpret_cast<signed char>(rcx) < reinterpret_cast<signed char>(0)) {
            rcx = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx));
        } else {
            *reinterpret_cast<unsigned char*>(&r9d6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9d6) & 0x7f);
            *reinterpret_cast<void***>(rsi7 + 8) = r9d6;
        }
    }
    r8_13 = r12_12;
    rdi14 = r12_12;
    r13d15 = reinterpret_cast<unsigned char>(r9d6) & 0x1000;
    if (rcx) {
        while (rdi14 = reinterpret_cast<struct s21*>(&r8_13->f1), rdx16 = reinterpret_cast<void**>(__intrinsic() >> 3), rax17 = reinterpret_cast<void***>(rdx16 + reinterpret_cast<unsigned char>(rdx16) * 4), rcx18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx) - (reinterpret_cast<uint64_t>(rax17) + reinterpret_cast<uint64_t>(rax17))), ecx19 = *reinterpret_cast<int32_t*>(&rcx18) + 48, r8_13->f0 = *reinterpret_cast<signed char*>(&ecx19), rcx = rdx16, !!rdx16) {
            if (r12_12 != rdi14 && (r13d15 && (*reinterpret_cast<uint16_t*>(rsi7 + 32) && (rax20 = reinterpret_cast<uint64_t>(rdi14) - reinterpret_cast<uint64_t>(r12_12), rdx21 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax20) >> 63) >> 62, rax22 = rax20 + rdx21, *reinterpret_cast<uint32_t*>(&rax23) = *reinterpret_cast<uint32_t*>(&rax22) & 3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0, rax23 - rdx21 == 3)))) {
                rdi14 = r8_13 + 1;
                r8_13->f1 = 44;
            }
            r8_13 = rdi14;
        }
    }
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx5) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx5 == 0)) && (rax24 = reinterpret_cast<uint64_t>(rdi14) - reinterpret_cast<uint64_t>(r12_12), edx25 = reinterpret_cast<unsigned char>(ebx5) - *reinterpret_cast<uint32_t*>(&rax24), !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx25) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx25 == 0)))) {
        *reinterpret_cast<uint32_t*>(&rax26) = edx25 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
        rcx27 = reinterpret_cast<struct s21*>(reinterpret_cast<uint64_t>(rdi14) + rax26 + 1);
        rdx28 = rax26;
        rax29 = rdi14;
        do {
            rax29 = reinterpret_cast<struct s21*>(&rax29->f1);
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax29) + 0xffffffffffffffff) = 48;
        } while (rax29 != rcx27);
        rdi14 = reinterpret_cast<struct s21*>(reinterpret_cast<uint64_t>(rdi14) + static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rdx28)) + 1);
    }
    if (r12_12 == rdi14 && ebx5) {
        rdi14->f0 = 48;
        rdi14 = reinterpret_cast<struct s21*>(&rdi14->f1);
    }
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r10_9)) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&r10_9) == 0)) && (rax30 = reinterpret_cast<uint64_t>(rdi14) - reinterpret_cast<uint64_t>(r12_12), r10d31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r10_9)) - *reinterpret_cast<uint32_t*>(&rax30)), *reinterpret_cast<void***>(rsi7 + 12) = r10d31, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r10d31) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r10d31 == 0)))) {
        if (reinterpret_cast<unsigned char>(r9d6) & 0x1c0) {
            *reinterpret_cast<void***>(rsi7 + 12) = r10d31 - 1;
        }
        if (reinterpret_cast<signed char>(ebx5) >= reinterpret_cast<signed char>(0) || (reinterpret_cast<unsigned char>(r9d6) & 0x600) != 0x200) {
            if (!(reinterpret_cast<unsigned char>(r9d6) & 0x400)) {
                *reinterpret_cast<void***>(&rax32) = *reinterpret_cast<void***>(rsi7 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax32) + 4) = 0;
                *reinterpret_cast<void***>(rsi7 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax32 - 1));
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax32)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax32) == 0))) {
                    do {
                        rsp33 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
                        *rsp33 = 0x408f5e;
                        __pformat_putc(32, rsi7);
                        rsp11 = reinterpret_cast<struct s20*>(rsp33 + 1);
                        *reinterpret_cast<void***>(&rax34) = *reinterpret_cast<void***>(rsi7 + 12);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = 0;
                        *reinterpret_cast<void***>(rsi7 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax34 - 1));
                    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax34)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax34) == 0)));
                    r9d6 = *reinterpret_cast<void***>(rsi7 + 8);
                }
            }
        } else {
            *reinterpret_cast<void***>(&rdx35) = *reinterpret_cast<void***>(rsi7 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = 0;
            eax36 = reinterpret_cast<void**>(static_cast<uint32_t>(rdx35 - 1));
            *reinterpret_cast<void***>(rsi7 + 12) = eax36;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx35)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rdx35) == 0))) {
                *reinterpret_cast<void***>(&rcx37) = eax36;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = 0;
                rax38 = rdi14;
                rdx39 = reinterpret_cast<struct s21*>(reinterpret_cast<uint64_t>(rdi14) + rcx37 + 1);
                do {
                    rax38 = reinterpret_cast<struct s21*>(&rax38->f1);
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax38) + 0xffffffffffffffff) = 48;
                } while (rax38 != rdx39);
                rdi14 = reinterpret_cast<struct s21*>(reinterpret_cast<uint64_t>(rdi14) + rcx37 + 1);
                *reinterpret_cast<void***>(rsi7 + 12) = reinterpret_cast<void**>(0xffffffff);
            }
        }
    }
    if (!(*reinterpret_cast<unsigned char*>(&r9d6) & 0x80)) {
        if (!(reinterpret_cast<unsigned char>(r9d6) & 0x100)) {
            rbx40 = rdi14;
            if (reinterpret_cast<unsigned char>(r9d6) & 64) {
                rbx40 = reinterpret_cast<struct s21*>(&rbx40->f1);
                rdi14->f0 = 32;
            }
        } else {
            rbx40 = reinterpret_cast<struct s21*>(&rdi14->f1);
            rdi14->f0 = 43;
        }
    } else {
        rbx40 = reinterpret_cast<struct s21*>(&rdi14->f1);
        rdi14->f0 = 45;
    }
    if (reinterpret_cast<uint64_t>(r12_12) >= reinterpret_cast<uint64_t>(rbx40)) {
        while (*reinterpret_cast<void***>(&rax41) = *reinterpret_cast<void***>(rsi7 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0, *reinterpret_cast<void***>(rsi7 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax41 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax41)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax41) == 0))) {
            addr_408ec3_44:
            rsp42 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
            *rsp42 = 0x408ed0;
            __pformat_putc(32, rsi7);
            rsp11 = reinterpret_cast<struct s20*>(rsp42 + 1);
        }
    } else {
        do {
            rbx40 = reinterpret_cast<struct s21*>(reinterpret_cast<uint64_t>(rbx40) - 1);
            ecx43 = rbx40->f0;
            rsp44 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
            *rsp44 = 0x408eb1;
            __pformat_putc(*reinterpret_cast<signed char*>(&ecx43), rsi7);
            rsp11 = reinterpret_cast<struct s20*>(rsp44 + 1);
        } while (r12_12 != rbx40);
        *reinterpret_cast<void***>(&rax45) = *reinterpret_cast<void***>(rsi7 + 12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax45) + 4) = 0;
        *reinterpret_cast<void***>(rsi7 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax45 - 1));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax45)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax45) == 0))) 
            goto addr_408ec3_44;
    }
    return;
}

struct s22 {
    signed char[32] pad32;
    signed char f32;
};

struct s23 {
    signed char f0;
    signed char f1;
};

void __pformat_emit_efloat(int32_t ecx, void** rdx, int64_t r8, void** r9) {
    void* rsp5;
    void** rsi6;
    void** r10_7;
    int32_t r9d8;
    void** rbx9;
    int32_t r8d10;
    void** r9d11;
    int32_t edx12;
    void** eax13;
    int64_t rdi14;
    void** edx15;
    void** eax16;
    void** ecx17;
    uint32_t ecx18;
    void** rcx19;
    void** r8d20;
    void** ebx21;
    void** r9d22;
    void** rsi23;
    void* r8d24;
    int64_t r10_25;
    int64_t rax26;
    struct s22* rsp27;
    struct s23* r12_28;
    struct s23* r8_29;
    struct s23* rdi30;
    uint32_t r13d31;
    void** rdx32;
    void*** rax33;
    void* rcx34;
    int32_t ecx35;
    uint64_t rax36;
    uint64_t rdx37;
    uint64_t rax38;
    int64_t rax39;
    uint64_t rax40;
    uint32_t edx41;
    uint64_t rax42;
    struct s23* rcx43;
    uint64_t rdx44;
    struct s23* rax45;
    uint64_t rax46;
    void** r10d47;
    int64_t rax48;
    int64_t* rsp49;
    int64_t rax50;
    int64_t rdx51;
    void** eax52;
    uint64_t rcx53;
    struct s23* rax54;
    struct s23* rdx55;
    struct s23* rbx56;
    int64_t rax57;
    int64_t* rsp58;
    int32_t ecx59;
    int64_t* rsp60;
    int64_t rax61;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 32);
    rsi6 = r9;
    r10_7 = rdx;
    r9d8 = static_cast<int32_t>(r8 - 1);
    rbx9 = reinterpret_cast<void**>(static_cast<int64_t>(r9d8));
    r8d10 = (__intrinsic() >> 2) - (r9d8 >> 31);
    r9d11 = reinterpret_cast<void**>(1);
    if (r8d10) {
        do {
            ++r9d11;
            edx12 = (__intrinsic() >> 2) - (r8d10 >> 31);
            r8d10 = edx12;
        } while (edx12);
    }
    eax13 = *reinterpret_cast<void***>(rsi6 + 44);
    if (reinterpret_cast<int1_t>(eax13 == 0xffffffff)) {
        *reinterpret_cast<void***>(rsi6 + 44) = reinterpret_cast<void**>(2);
        eax13 = reinterpret_cast<void**>(2);
    }
    *reinterpret_cast<void***>(&rdi14) = r9d11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
    if (reinterpret_cast<signed char>(eax13) >= reinterpret_cast<signed char>(r9d11)) {
        *reinterpret_cast<void***>(&rdi14) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
    }
    edx15 = reinterpret_cast<void**>(static_cast<uint32_t>(rdi14 + 2));
    eax16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 12)) - reinterpret_cast<unsigned char>(edx15));
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi6 + 12)) <= reinterpret_cast<signed char>(edx15)) {
        eax16 = reinterpret_cast<void**>(0xffffffff);
    }
    *reinterpret_cast<void***>(rsi6 + 12) = eax16;
    __pformat_emit_float(ecx, r10_7, 1, rsi6);
    ecx17 = *reinterpret_cast<void***>(rsi6 + 8);
    *reinterpret_cast<void***>(rsi6 + 16) = *reinterpret_cast<void***>(rsi6 + 44);
    ecx18 = reinterpret_cast<unsigned char>(ecx17) & 32 | 69;
    *reinterpret_cast<void***>(rsi6 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx17) | 0x1c0);
    __pformat_putc(*reinterpret_cast<signed char*>(&ecx18), rsi6, *reinterpret_cast<signed char*>(&ecx18), rsi6);
    rcx19 = rbx9;
    *reinterpret_cast<void***>(rsi6 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 12)) + static_cast<uint32_t>(rdi14 + 1));
    r8d20 = reinterpret_cast<void**>(0);
    ebx21 = *reinterpret_cast<void***>(rsi6 + 16);
    r9d22 = *reinterpret_cast<void***>(rsi6 + 8);
    rsi23 = rsi6;
    if (reinterpret_cast<signed char>(ebx21) >= reinterpret_cast<signed char>(0)) {
        r8d20 = ebx21;
    }
    r8d24 = reinterpret_cast<void*>(r8d20 + 23);
    if (reinterpret_cast<unsigned char>(r9d22) & 0x1000 && *reinterpret_cast<uint16_t*>(rsi6 + 32)) {
        r8d24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8d24) + (__intrinsic() >> 1));
    }
    r10_25 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rsi23 + 12));
    if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r10_25)) >= reinterpret_cast<int32_t>(r8d24)) {
    }
    rax26 = ___chkstk_ms(rcx19);
    rsp27 = reinterpret_cast<struct s22*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 + 32 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax26);
    r12_28 = reinterpret_cast<struct s23*>(&rsp27->f32);
    if (*reinterpret_cast<unsigned char*>(&r9d22) & 0x80) {
        if (reinterpret_cast<signed char>(rcx19) < reinterpret_cast<signed char>(0)) {
            rcx19 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx19));
        } else {
            *reinterpret_cast<unsigned char*>(&r9d22) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9d22) & 0x7f);
            *reinterpret_cast<void***>(rsi23 + 8) = r9d22;
        }
    }
    r8_29 = r12_28;
    rdi30 = r12_28;
    r13d31 = reinterpret_cast<unsigned char>(r9d22) & 0x1000;
    if (rcx19) {
        while (rdi30 = reinterpret_cast<struct s23*>(&r8_29->f1), rdx32 = reinterpret_cast<void**>(__intrinsic() >> 3), rax33 = reinterpret_cast<void***>(rdx32 + reinterpret_cast<unsigned char>(rdx32) * 4), rcx34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx19) - (reinterpret_cast<uint64_t>(rax33) + reinterpret_cast<uint64_t>(rax33))), ecx35 = *reinterpret_cast<int32_t*>(&rcx34) + 48, r8_29->f0 = *reinterpret_cast<signed char*>(&ecx35), rcx19 = rdx32, !!rdx32) {
            if (r12_28 != rdi30 && (r13d31 && (*reinterpret_cast<uint16_t*>(rsi23 + 32) && (rax36 = reinterpret_cast<uint64_t>(rdi30) - reinterpret_cast<uint64_t>(r12_28), rdx37 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax36) >> 63) >> 62, rax38 = rax36 + rdx37, *reinterpret_cast<uint32_t*>(&rax39) = *reinterpret_cast<uint32_t*>(&rax38) & 3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0, rax39 - rdx37 == 3)))) {
                rdi30 = r8_29 + 1;
                r8_29->f1 = 44;
            }
            r8_29 = rdi30;
        }
    }
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx21 == 0)) && (rax40 = reinterpret_cast<uint64_t>(rdi30) - reinterpret_cast<uint64_t>(r12_28), edx41 = reinterpret_cast<unsigned char>(ebx21) - *reinterpret_cast<uint32_t*>(&rax40), !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx41) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx41 == 0)))) {
        *reinterpret_cast<uint32_t*>(&rax42) = edx41 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax42) + 4) = 0;
        rcx43 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(rdi30) + rax42 + 1);
        rdx44 = rax42;
        rax45 = rdi30;
        do {
            rax45 = reinterpret_cast<struct s23*>(&rax45->f1);
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax45) + 0xffffffffffffffff) = 48;
        } while (rax45 != rcx43);
        rdi30 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(rdi30) + static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rdx44)) + 1);
    }
    if (r12_28 == rdi30 && ebx21) {
        rdi30->f0 = 48;
        rdi30 = reinterpret_cast<struct s23*>(&rdi30->f1);
    }
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r10_25)) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&r10_25) == 0)) && (rax46 = reinterpret_cast<uint64_t>(rdi30) - reinterpret_cast<uint64_t>(r12_28), r10d47 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r10_25)) - *reinterpret_cast<uint32_t*>(&rax46)), *reinterpret_cast<void***>(rsi23 + 12) = r10d47, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r10d47) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r10d47 == 0)))) {
        if (reinterpret_cast<unsigned char>(r9d22) & 0x1c0) {
            *reinterpret_cast<void***>(rsi23 + 12) = r10d47 - 1;
        }
        if (reinterpret_cast<signed char>(ebx21) >= reinterpret_cast<signed char>(0) || (reinterpret_cast<unsigned char>(r9d22) & 0x600) != 0x200) {
            if (!(reinterpret_cast<unsigned char>(r9d22) & 0x400)) {
                *reinterpret_cast<void***>(&rax48) = *reinterpret_cast<void***>(rsi23 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax48) + 4) = 0;
                *reinterpret_cast<void***>(rsi23 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax48 - 1));
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax48)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax48) == 0))) {
                    do {
                        rsp49 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp27) - 8);
                        *rsp49 = 0x408f5e;
                        __pformat_putc(32, rsi23);
                        rsp27 = reinterpret_cast<struct s22*>(rsp49 + 1);
                        *reinterpret_cast<void***>(&rax50) = *reinterpret_cast<void***>(rsi23 + 12);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax50) + 4) = 0;
                        *reinterpret_cast<void***>(rsi23 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax50 - 1));
                    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax50)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax50) == 0)));
                    r9d22 = *reinterpret_cast<void***>(rsi23 + 8);
                }
            }
        } else {
            *reinterpret_cast<void***>(&rdx51) = *reinterpret_cast<void***>(rsi23 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = 0;
            eax52 = reinterpret_cast<void**>(static_cast<uint32_t>(rdx51 - 1));
            *reinterpret_cast<void***>(rsi23 + 12) = eax52;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx51)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rdx51) == 0))) {
                *reinterpret_cast<void***>(&rcx53) = eax52;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = 0;
                rax54 = rdi30;
                rdx55 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(rdi30) + rcx53 + 1);
                do {
                    rax54 = reinterpret_cast<struct s23*>(&rax54->f1);
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax54) + 0xffffffffffffffff) = 48;
                } while (rax54 != rdx55);
                rdi30 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(rdi30) + rcx53 + 1);
                *reinterpret_cast<void***>(rsi23 + 12) = reinterpret_cast<void**>(0xffffffff);
            }
        }
    }
    if (!(*reinterpret_cast<unsigned char*>(&r9d22) & 0x80)) {
        if (!(reinterpret_cast<unsigned char>(r9d22) & 0x100)) {
            rbx56 = rdi30;
            if (reinterpret_cast<unsigned char>(r9d22) & 64) {
                rbx56 = reinterpret_cast<struct s23*>(&rbx56->f1);
                rdi30->f0 = 32;
            }
        } else {
            rbx56 = reinterpret_cast<struct s23*>(&rdi30->f1);
            rdi30->f0 = 43;
        }
    } else {
        rbx56 = reinterpret_cast<struct s23*>(&rdi30->f1);
        rdi30->f0 = 45;
    }
    if (reinterpret_cast<uint64_t>(r12_28) >= reinterpret_cast<uint64_t>(rbx56)) {
        while (*reinterpret_cast<void***>(&rax57) = *reinterpret_cast<void***>(rsi23 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax57) + 4) = 0, *reinterpret_cast<void***>(rsi23 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax57 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax57)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax57) == 0))) {
            addr_408ec3_54:
            rsp58 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp27) - 8);
            *rsp58 = 0x408ed0;
            __pformat_putc(32, rsi23);
            rsp27 = reinterpret_cast<struct s22*>(rsp58 + 1);
        }
    } else {
        do {
            rbx56 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(rbx56) - 1);
            ecx59 = rbx56->f0;
            rsp60 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp27) - 8);
            *rsp60 = 0x408eb1;
            __pformat_putc(*reinterpret_cast<signed char*>(&ecx59), rsi23);
            rsp27 = reinterpret_cast<struct s22*>(rsp60 + 1);
        } while (r12_28 != rbx56);
        *reinterpret_cast<void***>(&rax61) = *reinterpret_cast<void***>(rsi23 + 12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax61) + 4) = 0;
        *reinterpret_cast<void***>(rsi23 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax61 - 1));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax61)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax61) == 0))) 
            goto addr_408ec3_54;
    }
    return;
}

void __pformat_puts(void** rcx, void** rdx) {
    void* rdx3;
    void** rbx4;
    void** rax5;
    int64_t rdi6;
    void** rsi7;
    void** rbx8;
    void** eax9;
    int1_t zf10;
    int64_t rax11;
    void* rax12;
    void** rdi13;
    int32_t ecx14;
    int64_t rax15;
    int64_t rax16;

    rdx3 = reinterpret_cast<void*>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 16))));
    rbx4 = rcx;
    if (!rcx) {
        rbx4 = reinterpret_cast<void**>("(null)");
    }
    if (*reinterpret_cast<int32_t*>(&rdx3) < 0) {
        rax5 = strlen(rbx4);
    } else {
        rax5 = text(rbx4, rdx3);
    }
    *reinterpret_cast<void***>(&rdi6) = *reinterpret_cast<void***>(rdx + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
    rsi7 = rbx4;
    rbx8 = rdx;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdi6)) >= reinterpret_cast<signed char>(rax5) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdi6)) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(&rdi6) = rax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdi6)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx8 + 12))) {
        eax9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx8 + 12)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdi6)));
        zf10 = (*reinterpret_cast<unsigned char*>(rbx8 + 9) & 4) == 0;
        *reinterpret_cast<void***>(rbx8 + 12) = eax9;
        if (zf10) {
            *reinterpret_cast<void***>(rbx8 + 12) = eax9 - 1;
            do {
                __pformat_putc(32, rbx8);
                *reinterpret_cast<void***>(&rax11) = *reinterpret_cast<void***>(rbx8 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                *reinterpret_cast<void***>(rbx8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax11 - 1));
            } while (*reinterpret_cast<void***>(&rax11));
        }
        if (!*reinterpret_cast<void***>(&rdi6)) {
            goto addr_40863f_15;
        }
    }
    *reinterpret_cast<void***>(rbx8 + 12) = reinterpret_cast<void**>(0xffffffff);
    if (!*reinterpret_cast<void***>(&rdi6)) {
        *reinterpret_cast<void***>(rbx8 + 12) = reinterpret_cast<void**>(0xfffffffe);
    } else {
        *reinterpret_cast<int32_t*>(&rax12) = static_cast<int32_t>(rdi6 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        rdi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi7) + reinterpret_cast<uint64_t>(rax12) + 1);
        goto addr_408610_19;
    }
    addr_40864c_20:
    return;
    do {
        addr_408610_19:
        ++rsi7;
        ecx14 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi7 + 0xffffffffffffffff));
        __pformat_putc(*reinterpret_cast<signed char*>(&ecx14), rbx8);
    } while (rdi13 != rsi7);
    *reinterpret_cast<void***>(&rax15) = *reinterpret_cast<void***>(rbx8 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    *reinterpret_cast<void***>(rbx8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax15 - 1));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax15)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax15) == 0))) {
        do {
            __pformat_putc(32, rbx8);
            addr_40863f_15:
            *reinterpret_cast<void***>(&rax16) = *reinterpret_cast<void***>(rbx8 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
            *reinterpret_cast<void***>(rbx8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax16 - 1));
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax16) == 0)));
        goto addr_40864c_20;
    }
}

void __pformat_emit_inf_or_nan(uint32_t ecx, void** rdx, void** r8, void** r9, ...);

void __pformat_float(void* rcx, void** rdx) {
    void* rsp3;
    void** r8d4;
    void** rbx5;
    void** r9_6;
    void** rax7;
    void** rsi8;
    void** v9;
    uint32_t v10;
    int32_t v11;
    int64_t rax12;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 0x68);
    r8d4 = *reinterpret_cast<void***>(rdx + 16);
    __asm__("fld tword [rcx]");
    rbx5 = rdx;
    if (reinterpret_cast<signed char>(r8d4) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(rdx + 16) = reinterpret_cast<void**>(6);
        r8d4 = reinterpret_cast<void**>(6);
    }
    __asm__("fstp tword [rsp+0x50]");
    r9_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + 76);
    rax7 = text(3, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, r9_6);
    rsi8 = rax7;
    if (v9 == 0xffff8000) {
        __pformat_emit_inf_or_nan(v10, rax7, rbx5, r9_6, v10, rax7, rbx5, r9_6);
        __freedtoa(rsi8, rsi8);
        return;
    } else {
        __pformat_emit_float(v11, rax7, v9, rbx5);
        while (*reinterpret_cast<void***>(&rax12) = *reinterpret_cast<void***>(rbx5 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0, *reinterpret_cast<void***>(rbx5 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax12 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax12) == 0))) {
            __pformat_putc(32, rbx5, 32, rbx5);
        }
        __freedtoa(rsi8);
        return;
    }
}

/* .text */
void** text(uint16_t* rcx, int64_t rdx) {
    int64_t rax3;

    *reinterpret_cast<void***>(&rax3) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (rdx) {
        if (*rcx) {
            do {
                ++rax3;
                if (rdx == rax3) 
                    break;
            } while (rcx[rax3]);
        }
    }
    return *reinterpret_cast<void***>(&rax3);
}

struct s24 {
    signed char[32] pad32;
    signed char f32;
};

struct s25 {
    signed char f0;
    signed char f1;
};

/* __pformat_xint.isra.1 */
void __pformat_xint_isra_1(uint32_t ecx, void** rdx, void** r8) {
    void* eax4;
    void** r11d5;
    void** r12d6;
    int1_t zf7;
    uint32_t r10d8;
    void** r9_9;
    void** ebx10;
    void** rsi11;
    void** rcx12;
    void* ebx13;
    int64_t r8_14;
    int64_t rax15;
    int64_t rdx16;
    struct s24* rsp17;
    struct s25* rdi18;
    uint32_t edx19;
    struct s25* rbx20;
    uint32_t r13d21;
    int64_t rax22;
    uint32_t r14d23;
    uint32_t eax24;
    uint64_t rax25;
    uint32_t edx26;
    int64_t rax27;
    struct s25* rcx28;
    int64_t rdx29;
    struct s25* rax30;
    uint64_t rax31;
    void** r8d32;
    void** eax33;
    int64_t r13_34;
    int64_t r12_35;
    int64_t* rsp36;
    int32_t eax37;
    int64_t* rsp38;
    int32_t eax39;
    int32_t r8d40;
    int64_t rdx41;
    struct s25* rcx42;
    struct s25* rdx43;
    struct s25* rdx44;
    int32_t ecx45;
    int64_t* rsp46;

    eax4 = reinterpret_cast<void*>(24);
    r11d5 = *reinterpret_cast<void***>(r8 + 16);
    r12d6 = *reinterpret_cast<void***>(r8 + 8);
    zf7 = ecx == 0x6f;
    r10d8 = ecx;
    r9_9 = rdx;
    if (!zf7) {
        eax4 = reinterpret_cast<void*>(18);
    }
    ebx10 = reinterpret_cast<void**>(0);
    rsi11 = r8;
    *reinterpret_cast<uint32_t*>(&rcx12) = static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf7)) + 3;
    *reinterpret_cast<int32_t*>(&rcx12 + 4) = 0;
    if (reinterpret_cast<signed char>(r11d5) >= reinterpret_cast<signed char>(0)) {
        ebx10 = r11d5;
    }
    ebx13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx10) + reinterpret_cast<uint32_t>(eax4));
    if (reinterpret_cast<unsigned char>(r12d6) & 0x1000 && *reinterpret_cast<uint16_t*>(r8 + 32)) {
        ebx13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx13) + (__intrinsic() >> 1));
    }
    r8_14 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rsi11 + 12));
    if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r8_14)) >= reinterpret_cast<int32_t>(ebx13)) {
    }
    rax15 = ___chkstk_ms(rcx12);
    *reinterpret_cast<int32_t*>(&rdx16) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
    rsp17 = reinterpret_cast<struct s24*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax15);
    rdi18 = reinterpret_cast<struct s25*>(&rsp17->f32);
    *reinterpret_cast<unsigned char*>(&rdx16) = reinterpret_cast<uint1_t>(r10d8 != 0x6f);
    edx19 = static_cast<uint32_t>(rdx16 * 8 + 7);
    rbx20 = rdi18;
    if (!r9_9) {
        addr_409582_10:
        *reinterpret_cast<void***>(rsi11 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12d6) & 0xfffff7ff);
    } else {
        r13d21 = r10d8 & 32;
        do {
            rbx20 = reinterpret_cast<struct s25*>(&rbx20->f1);
            *reinterpret_cast<uint32_t*>(&rax22) = edx19 & *reinterpret_cast<uint32_t*>(&r9_9);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
            r14d23 = static_cast<uint32_t>(rax22 + 48);
            eax24 = *reinterpret_cast<uint32_t*>(&rax22) + 55 | r13d21;
            if (*reinterpret_cast<unsigned char*>(&r14d23) < 58) {
                eax24 = r14d23;
            }
            r9_9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r9_9) >> *reinterpret_cast<signed char*>(&rcx12));
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx20) - 1) = *reinterpret_cast<signed char*>(&eax24);
        } while (r9_9);
        if (rdi18 == rbx20) 
            goto addr_409582_10;
    }
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r11d5) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r11d5 == 0) || (rax25 = reinterpret_cast<uint64_t>(rbx20) - reinterpret_cast<uint64_t>(rdi18), edx26 = reinterpret_cast<unsigned char>(r11d5) - *reinterpret_cast<uint32_t*>(&rax25), reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx26) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx26 == 0))) {
        if (r10d8 == 0x6f && *reinterpret_cast<unsigned char*>(rsi11 + 9) & 8) {
            rbx20->f0 = 48;
            rbx20 = reinterpret_cast<struct s25*>(&rbx20->f1);
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rax27) = edx26 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = 0;
        rcx28 = reinterpret_cast<struct s25*>(reinterpret_cast<uint64_t>(rbx20) + rax27 + 1);
        rdx29 = rax27;
        rax30 = rbx20;
        do {
            rax30 = reinterpret_cast<struct s25*>(&rax30->f1);
            *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax30) - 1) = 48;
        } while (rax30 != rcx28);
        rbx20 = reinterpret_cast<struct s25*>(reinterpret_cast<uint64_t>(rbx20) + static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rdx29)) + 1);
    }
    if (r11d5 && rdi18 == rbx20) {
        rbx20->f0 = 48;
        rbx20 = reinterpret_cast<struct s25*>(&rbx20->f1);
    }
    rax31 = reinterpret_cast<uint64_t>(rbx20) - reinterpret_cast<uint64_t>(rdi18);
    if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r8_14)) > reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rax31))) {
        r8d32 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r8_14)) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax31)));
        eax33 = *reinterpret_cast<void***>(rsi11 + 8);
        *reinterpret_cast<void***>(&r13_34) = r8d32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_34) + 4) = 0;
        *reinterpret_cast<void***>(rsi11 + 12) = r8d32;
        if (r10d8 == 0x6f) {
            if (reinterpret_cast<signed char>(r11d5) >= reinterpret_cast<signed char>(0) || (reinterpret_cast<unsigned char>(eax33) & 0x600) != 0x200) {
                *reinterpret_cast<int32_t*>(&r12_35) = static_cast<int32_t>(r13_34 - 1);
                if (!(*reinterpret_cast<unsigned char*>(&eax33 + 1) & 4)) {
                    do {
                        addr_4095b0_28:
                        *reinterpret_cast<int32_t*>(&r12_35) = *reinterpret_cast<int32_t*>(&r12_35) - 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_35) + 4) = 0;
                        rsp36 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp17) - 8);
                        *rsp36 = 0x4095c1;
                        __pformat_putc(32, rsi11);
                        rsp17 = reinterpret_cast<struct s24*>(rsp36 + 1);
                        eax37 = static_cast<int32_t>(r12_35 + 1);
                    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax37 < 0) | reinterpret_cast<uint1_t>(eax37 == 0)));
                } else {
                    if (reinterpret_cast<uint64_t>(rdi18) >= reinterpret_cast<uint64_t>(rbx20)) {
                        do {
                            addr_4094a0_30:
                            *reinterpret_cast<int32_t*>(&r12_35) = *reinterpret_cast<int32_t*>(&r12_35) - 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_35) + 4) = 0;
                            rsp38 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp17) - 8);
                            *rsp38 = 0x4094b1;
                            __pformat_putc(32, rsi11);
                            rsp17 = reinterpret_cast<struct s24*>(rsp38 + 1);
                            eax39 = static_cast<int32_t>(r12_35 + 1);
                        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax39 < 0) | reinterpret_cast<uint1_t>(eax39 == 0)));
                        goto addr_4094ba_31;
                    } else {
                        goto addr_409484_33;
                    }
                }
            } else {
                addr_409630_34:
                r8d40 = static_cast<int32_t>(r13_34 - 1);
                *reinterpret_cast<int32_t*>(&rdx41) = r8d40;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = 0;
                rcx42 = reinterpret_cast<struct s25*>(reinterpret_cast<uint64_t>(rbx20) + rdx41 + 1);
                rdx43 = rbx20;
                goto addr_409640_35;
            }
        } else {
            if (!(*reinterpret_cast<unsigned char*>(&eax33 + 1) & 8)) {
                if (reinterpret_cast<signed char>(r11d5) < reinterpret_cast<signed char>(0)) 
                    goto addr_409610_38; else 
                    goto addr_409597_39;
            }
            *reinterpret_cast<void***>(&r13_34) = *reinterpret_cast<void***>(&r13_34) - 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_34) + 4) = 0;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r13_34)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r13_34) == 0) || reinterpret_cast<signed char>(r11d5) >= reinterpret_cast<signed char>(0)) {
                addr_40951e_41:
                rdx44 = rbx20;
                goto addr_409521_42;
            } else {
                addr_409610_38:
                if ((reinterpret_cast<unsigned char>(eax33) & 0x600) == 0x200) 
                    goto addr_409630_34; else 
                    goto addr_409620_43;
            }
        }
    } else {
        *reinterpret_cast<void***>(rsi11 + 12) = reinterpret_cast<void**>(0xffffffff);
        if (r10d8 != 0x6f) {
            eax33 = *reinterpret_cast<void***>(rsi11 + 8);
            if (*reinterpret_cast<unsigned char*>(&eax33 + 1) & 8) {
                rdx44 = rbx20;
                goto addr_4095fb_47;
            }
        } else {
            *reinterpret_cast<int32_t*>(&r12_35) = -2;
            *reinterpret_cast<void***>(&r13_34) = reinterpret_cast<void**>(0xffffffff);
            if (reinterpret_cast<uint64_t>(rdi18) >= reinterpret_cast<uint64_t>(rbx20)) 
                goto addr_4094ba_31; else 
                goto addr_409484_33;
        }
    }
    if (reinterpret_cast<uint64_t>(rdi18) >= reinterpret_cast<uint64_t>(rbx20)) 
        goto addr_4094ba_31;
    *reinterpret_cast<int32_t*>(&r12_35) = -2;
    *reinterpret_cast<void***>(&r13_34) = reinterpret_cast<void**>(0xffffffff);
    do {
        addr_409484_33:
        rbx20 = reinterpret_cast<struct s25*>(reinterpret_cast<uint64_t>(rbx20) - 1);
        ecx45 = rbx20->f0;
        rsp46 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp17) - 8);
        *rsp46 = 0x409493;
        __pformat_putc(*reinterpret_cast<signed char*>(&ecx45), rsi11);
        rsp17 = reinterpret_cast<struct s24*>(rsp46 + 1);
    } while (reinterpret_cast<uint64_t>(rdi18) < reinterpret_cast<uint64_t>(rbx20));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r13_34)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r13_34) == 0)) {
        addr_4094ba_31:
        return;
    } else {
        goto addr_4094a0_30;
    }
    do {
        addr_409640_35:
        rdx43 = reinterpret_cast<struct s25*>(&rdx43->f1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdx43) - 1) = 48;
    } while (rcx42 != rdx43);
    rdx44 = reinterpret_cast<struct s25*>(reinterpret_cast<uint64_t>(rbx20) + static_cast<int64_t>(r8d40) + 1);
    if (r10d8 == 0x6f || !(*reinterpret_cast<unsigned char*>(&eax33 + 1) & 8)) {
        rbx20 = rdx44;
    } else {
        addr_4095fb_47:
        *reinterpret_cast<void***>(&r13_34) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_34) + 4) = 0;
        goto addr_409521_42;
    }
    *reinterpret_cast<void***>(&r13_34) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_34) + 4) = 0;
    goto addr_409531_56;
    addr_409521_42:
    rdx44->f0 = *reinterpret_cast<signed char*>(&r10d8);
    rbx20 = rdx44 + 1;
    rdx44->f1 = 48;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r13_34)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r13_34) == 0))) {
        addr_409597_39:
        *reinterpret_cast<int32_t*>(&r12_35) = static_cast<int32_t>(r13_34 - 1);
        if (!(*reinterpret_cast<unsigned char*>(&eax33 + 1) & 4)) 
            goto addr_4095b0_28;
    } else {
        addr_409531_56:
        if (reinterpret_cast<uint64_t>(rdi18) >= reinterpret_cast<uint64_t>(rbx20)) 
            goto addr_4094ba_31; else 
            goto addr_409536_57;
    }
    if (reinterpret_cast<uint64_t>(rdi18) >= reinterpret_cast<uint64_t>(rbx20)) {
        goto addr_4094a0_30;
    }
    addr_409536_57:
    *reinterpret_cast<int32_t*>(&r12_35) = static_cast<int32_t>(r13_34 - 1);
    goto addr_409484_33;
    addr_409620_43:
    if (!(*reinterpret_cast<unsigned char*>(&eax33 + 1) & 8)) 
        goto addr_409597_39;
    goto addr_40951e_41;
}

struct s26 {
    void** f0;
    signed char[7] pad8;
    int32_t f8;
};

void __pformat_xldouble(struct s26* rcx, void** rdx) {
    int64_t v3;
    int64_t rdi4;
    void* rsp5;
    void** r9_6;
    int64_t r10_7;
    void** rbx8;
    uint64_t rax9;
    int64_t rcx10;
    int64_t rdi11;
    int32_t r8d12;
    uint32_t eax13;
    uint32_t ecx14;
    void** r8d15;
    void** rax16;
    void** r8_17;
    signed char* rbp18;
    signed char* rsi19;
    uint32_t r10d20;
    uint32_t ecx21;
    uint64_t rax22;
    int32_t edx23;
    uint32_t ecx24;
    void** rdx25;
    int32_t r11d26;
    int64_t rdx27;
    uint32_t ecx28;
    void** r10d29;
    void* r12d30;
    int64_t rdx31;
    uint64_t rax32;
    int64_t rdx33;
    int32_t ecx34;
    int32_t edx35;
    void** r10d36;
    int64_t rax37;
    void** rdx38;
    uint32_t ecx39;
    void* rsp40;
    int64_t rax41;
    uint16_t* r13_42;
    int32_t ecx43;
    uint32_t eax44;
    int64_t v45;
    int64_t rax46;
    uint32_t ecx47;
    signed char* rax48;
    uint32_t ecx49;

    v3 = rdi4;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x68);
    r9_6 = rcx->f0;
    *reinterpret_cast<int32_t*>(&r10_7) = rcx->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_7) + 4) = 0;
    rbx8 = rdx;
    rax9 = reinterpret_cast<unsigned char>(r9_6) >> 32;
    *reinterpret_cast<uint32_t*>(&rcx10) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r10_7)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    rdi11 = r10_7;
    r8d12 = static_cast<int32_t>(rcx10 + rcx10);
    eax13 = *reinterpret_cast<uint32_t*>(&rax9) & 0x7fffffff | reinterpret_cast<unsigned char>(r9_6);
    if (reinterpret_cast<int32_t>(0xfffe - ((-eax13 | eax13) >> 31 | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r8d12)))) >> 16) {
        __pformat_emit_inf_or_nan(0, "NaN", rbx8, r9_6, 0, "NaN", rbx8, r9_6);
    } else {
        if (*reinterpret_cast<int16_t*>(&r10_7) < 0) {
            *reinterpret_cast<void***>(rbx8 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx8 + 8)) | 0x80);
            *reinterpret_cast<uint16_t*>(&rdi11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi11) & 0x7fff);
            if (eax13) {
                goto addr_4096ef_6;
            }
        } else {
            *reinterpret_cast<uint16_t*>(&rdi11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi11) & 0x7fff);
            if (eax13) 
                goto addr_4096ef_6;
        }
        if (*reinterpret_cast<uint16_t*>(&rdi11) == 0x7fff) {
            ecx14 = *reinterpret_cast<uint32_t*>(&rcx10) & 0x8000;
            __pformat_emit_inf_or_nan(ecx14, "Inf", rbx8, r9_6, ecx14, "Inf", rbx8, r9_6);
        } else {
            addr_4096ef_6:
            if (*reinterpret_cast<uint16_t*>(&rdi11)) {
                r8d15 = *reinterpret_cast<void***>(rbx8 + 16);
                *reinterpret_cast<uint16_t*>(&rdi11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdi11) - 0x3fff);
                rax16 = r9_6;
                if (reinterpret_cast<unsigned char>(r8d15) > reinterpret_cast<unsigned char>(14)) {
                    r8_17 = *reinterpret_cast<void***>(rbx8 + 8);
                    *reinterpret_cast<int32_t*>(&r8_17 + 4) = 0;
                    if (rax16) {
                        addr_4098f9_12:
                        rbp18 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp5) + 64);
                        rsi19 = rbp18;
                        r10d20 = reinterpret_cast<unsigned char>(r8_17) & 0x800;
                        r9_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_17) & 32);
                        *reinterpret_cast<int32_t*>(&r9_6 + 4) = 0;
                        goto addr_409934_13;
                    } else {
                        goto addr_409716_15;
                    }
                } else {
                    if (reinterpret_cast<signed char>(rax16) < reinterpret_cast<signed char>(0)) {
                        addr_4098c5_17:
                        ecx21 = 14 - reinterpret_cast<unsigned char>(r8d15) << 2;
                        rax22 = (reinterpret_cast<unsigned char>(rax16) >> 1) + (4 << *reinterpret_cast<unsigned char*>(&ecx21));
                        if (reinterpret_cast<int64_t>(rax22) < reinterpret_cast<int64_t>(0)) {
                            *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(&rdi11) + 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
                            goto addr_4098e7_19;
                        } else {
                            rax22 = rax22 + rax22;
                            goto addr_4098e7_19;
                        }
                    } else {
                        goto addr_4098c0_22;
                    }
                }
            } else {
                rax16 = r9_6;
                if (r9_6) {
                    *reinterpret_cast<int32_t*>(&rdi11) = 0xffffc002;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
                    if (reinterpret_cast<signed char>(r9_6) >= reinterpret_cast<signed char>(0)) {
                        edx23 = 0xffffc001;
                        do {
                            *reinterpret_cast<int32_t*>(&rdi11) = edx23;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
                            --edx23;
                            rax16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax16) + reinterpret_cast<unsigned char>(rax16));
                        } while (reinterpret_cast<signed char>(rax16) >= reinterpret_cast<signed char>(0));
                    }
                    r8d15 = *reinterpret_cast<void***>(rbx8 + 16);
                    if (reinterpret_cast<unsigned char>(r8d15) > reinterpret_cast<unsigned char>(14)) 
                        goto addr_4098f5_28; else 
                        goto addr_409a28_29;
                } else {
                    r8d15 = *reinterpret_cast<void***>(rbx8 + 16);
                    if (reinterpret_cast<unsigned char>(r8d15) <= reinterpret_cast<unsigned char>(14)) {
                        do {
                            addr_4098c0_22:
                            rax16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax16) + reinterpret_cast<unsigned char>(rax16));
                        } while (reinterpret_cast<signed char>(rax16) >= reinterpret_cast<signed char>(0));
                        goto addr_4098c5_17;
                    } else {
                        r8_17 = *reinterpret_cast<void***>(rbx8 + 8);
                        *reinterpret_cast<int32_t*>(&r8_17 + 4) = 0;
                        goto addr_409716_15;
                    }
                }
            }
        }
    }
    return;
    while (1) {
        addr_409934_13:
        ecx24 = *reinterpret_cast<uint32_t*>(&rax16) & 15;
        *reinterpret_cast<uint32_t*>(&rdx25) = ecx24;
        *reinterpret_cast<int32_t*>(&rdx25 + 4) = 0;
        if (rdx25 == rax16) {
            if (reinterpret_cast<uint64_t>(rsi19) > reinterpret_cast<uint64_t>(rbp18) || (r10d20 || !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx8 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx8 + 16) == 0)))) {
                ++rsi19;
            }
            r11d26 = static_cast<int32_t>(rdi11 - 1);
            if (rax16 != 1) {
                do {
                    rdx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx25) >> 1);
                    *reinterpret_cast<int32_t*>(&rdi11) = r11d26;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
                    r11d26 = static_cast<int32_t>(rdi11 - 1);
                } while (!reinterpret_cast<int1_t>(rdx25 == 1));
            }
            *reinterpret_cast<uint32_t*>(&rax16) = 0;
            *reinterpret_cast<int32_t*>(&rax16 + 4) = 0;
        } else {
            rax16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax16) >> 4);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx8 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx8 + 16) == 0))) {
                *reinterpret_cast<void***>(rbx8 + 16) = *reinterpret_cast<void***>(rbx8 + 16) - 1;
            }
        }
        if (!ecx24) {
            *reinterpret_cast<uint32_t*>(&rdx27) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0;
            if (reinterpret_cast<uint64_t>(rsi19) > reinterpret_cast<uint64_t>(rbp18) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx8 + 16)) >= reinterpret_cast<signed char>(0)) {
                addr_409922_43:
                ecx28 = static_cast<uint32_t>(rdx27 + 48);
            } else {
                addr_40992b_44:
                if (!rax16) 
                    break; else 
                    continue;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rdx27) = ecx24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0;
            if (ecx24 <= 9) 
                goto addr_409922_43;
            ecx28 = ecx24 + 55 | reinterpret_cast<unsigned char>(r9_6);
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v3) + 3) = *reinterpret_cast<signed char*>(&ecx28);
        ++rsi19;
        goto addr_40992b_44;
    }
    if (rsi19 != rbp18) {
        addr_409736_49:
        r10d29 = *reinterpret_cast<void***>(rbx8 + 12);
        r12d30 = reinterpret_cast<void*>(2);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r10d29) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r10d29 == 0))) {
            *reinterpret_cast<void***>(&rdx31) = *reinterpret_cast<void***>(rbx8 + 16);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
            rax32 = reinterpret_cast<uint64_t>(rsi19) - reinterpret_cast<uint64_t>(rbp18);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx31)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rdx31) == 0))) {
                *reinterpret_cast<int32_t*>(&rax32) = static_cast<int32_t>(rdx31 + rax32);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax32) + 4) = 0;
            }
            *reinterpret_cast<int32_t*>(&rdx33) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&rdx33) = reinterpret_cast<uint1_t>(!!(reinterpret_cast<unsigned char>(r8_17) & 0x1c0));
            r9_6 = reinterpret_cast<void**>(static_cast<uint32_t>(rax32 + rdx33 + 5));
            *reinterpret_cast<int32_t*>(&r9_6 + 4) = 0;
            ecx34 = (__intrinsic() >> 2) - (static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rdi11)) >> 31);
            if (ecx34) {
                do {
                    ++r9_6;
                    *reinterpret_cast<int32_t*>(&r9_6 + 4) = 0;
                    r12d30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r12d30) + 1);
                    edx35 = (__intrinsic() >> 2) - (ecx34 >> 31);
                    ecx34 = edx35;
                } while (edx35);
                r12d30 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r12d30)));
            }
            if (reinterpret_cast<signed char>(r10d29) <= reinterpret_cast<signed char>(r9_6)) {
                *reinterpret_cast<void***>(rbx8 + 12) = reinterpret_cast<void**>(0xffffffff);
            } else {
                r10d36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r10d29) - reinterpret_cast<unsigned char>(r9_6));
                if (!(reinterpret_cast<unsigned char>(r8_17) & 0x600)) {
                    *reinterpret_cast<void***>(rbx8 + 12) = r10d36 - 1;
                    do {
                        __pformat_putc(32, rbx8, 32, rbx8);
                        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
                        *reinterpret_cast<void***>(&rax37) = *reinterpret_cast<void***>(rbx8 + 12);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax37) + 4) = 0;
                        *reinterpret_cast<void***>(rbx8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax37 - 1));
                    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax37)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax37) == 0)));
                    r8_17 = *reinterpret_cast<void***>(rbx8 + 8);
                    *reinterpret_cast<int32_t*>(&r8_17 + 4) = 0;
                } else {
                    *reinterpret_cast<void***>(rbx8 + 12) = r10d36;
                }
            }
        }
    } else {
        goto addr_40971b_64;
    }
    if (*reinterpret_cast<unsigned char*>(&r8_17) & 0x80) {
        __pformat_putc(45, rbx8, 45, rbx8);
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    } else {
        if (reinterpret_cast<unsigned char>(r8_17) & 0x100) {
            __pformat_putc(43, rbx8, 43, rbx8);
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        } else {
            r8_17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_17) & 64);
            *reinterpret_cast<int32_t*>(&r8_17 + 4) = 0;
            if (r8_17) {
                __pformat_putc(32, rbx8, 32, rbx8);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
            }
        }
    }
    __pformat_putc(48, rbx8, 48, rbx8);
    rdx38 = rbx8;
    ecx39 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx8 + 8)) & 32 | 88;
    __pformat_putc(*reinterpret_cast<signed char*>(&ecx39), rdx38, *reinterpret_cast<signed char*>(&ecx39), rdx38);
    rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx8 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx8 + 12) == 0)) && *reinterpret_cast<unsigned char*>(rbx8 + 9) & 2) {
        *reinterpret_cast<void***>(rbx8 + 12) = *reinterpret_cast<void***>(rbx8 + 12) - 1;
        do {
            __pformat_putc(48, rbx8, 48, rbx8);
            rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
            *reinterpret_cast<void***>(&rax41) = *reinterpret_cast<void***>(rbx8 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
            rdx38 = reinterpret_cast<void**>(static_cast<uint32_t>(rax41 - 1));
            *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
            *reinterpret_cast<void***>(rbx8 + 12) = rdx38;
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax41)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax41) == 0)));
    }
    r13_42 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rsp40) + 46);
    if (reinterpret_cast<uint64_t>(rsi19) > reinterpret_cast<uint64_t>(rbp18)) {
        do {
            --rsi19;
            ecx43 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v3) + 3);
            if (ecx43 == 46) {
                __pformat_emit_radix_point(rbx8, rdx38, rbx8, rdx38);
            } else {
                if (ecx43 == 44) {
                    eax44 = *reinterpret_cast<uint16_t*>(rbx8 + 32);
                    if (*reinterpret_cast<int16_t*>(&eax44)) {
                        r8_17 = rbx8;
                        rdx38 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                        __pformat_wputchars(r13_42, 1, r8_17, r9_6, v45);
                    }
                } else {
                    rdx38 = rbx8;
                    __pformat_putc(*reinterpret_cast<signed char*>(&ecx43), rdx38, *reinterpret_cast<signed char*>(&ecx43), rdx38);
                }
            }
        } while (rsi19 != rbp18);
    }
    while (*reinterpret_cast<void***>(&rax46) = *reinterpret_cast<void***>(rbx8 + 16), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0, *reinterpret_cast<void***>(rbx8 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax46 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax46)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax46) == 0))) {
        __pformat_putc(48, rbx8, 48, rbx8);
    }
    ecx47 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx8 + 8)) & 32 | 80;
    __pformat_putc(*reinterpret_cast<signed char*>(&ecx47), rbx8, *reinterpret_cast<signed char*>(&ecx47), rbx8);
    *reinterpret_cast<void***>(rbx8 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx8 + 12)) + reinterpret_cast<uint32_t>(r12d30));
    *reinterpret_cast<void***>(rbx8 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx8 + 8)) | 0x1c0);
    __pformat_int_isra_0(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rdi11)), rbx8, r8_17);
    return;
    addr_40971b_64:
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx8 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx8 + 16) == 0)) {
        rax48 = rbp18;
        if (!(reinterpret_cast<unsigned char>(r8_17) & 0x800)) {
            addr_40972f_87:
            rsi19 = rax48 + 1;
            goto addr_409736_49;
        } else {
            goto addr_409726_89;
        }
    } else {
        addr_409726_89:
        rax48 = rbp18 + 1;
        goto addr_40972f_87;
    }
    addr_409716_15:
    rbp18 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp5) + 64);
    goto addr_40971b_64;
    addr_4098e7_19:
    ecx49 = 15 - reinterpret_cast<unsigned char>(r8d15) << 2;
    rax16 = reinterpret_cast<void**>(rax22 >> *reinterpret_cast<signed char*>(&ecx49));
    addr_4098f5_28:
    r8_17 = *reinterpret_cast<void***>(rbx8 + 8);
    *reinterpret_cast<int32_t*>(&r8_17 + 4) = 0;
    goto addr_4098f9_12;
    addr_409a28_29:
    goto addr_4098c5_17;
}

void __pformat_efloat(void* rcx, void** rdx) {
    void* rsp3;
    void** r8d4;
    void** r9_5;
    void** rax6;
    int64_t r8_7;
    int32_t v8;
    uint32_t v9;
    int32_t v10;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 0x68);
    __asm__("fld tword [rcx]");
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 16)) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(rdx + 16) = reinterpret_cast<void**>(6);
        r8d4 = reinterpret_cast<void**>(7);
    } else {
        r8d4 = *reinterpret_cast<void***>(rdx + 16) + 1;
    }
    __asm__("fstp tword [rsp+0x50]");
    r9_5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + 76);
    rax6 = text(2, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, r9_5);
    *reinterpret_cast<int32_t*>(&r8_7) = v8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r8_7) == 0xffff8000) {
        __pformat_emit_inf_or_nan(v9, rax6, rdx, r9_5, v9, rax6, rdx, r9_5);
        __freedtoa(rax6, rax6);
        return;
    } else {
        __pformat_emit_efloat(v10, rax6, r8_7, rdx);
        __freedtoa(rax6, rax6);
        return;
    }
}

void __pformat_gfloat(void* rcx, void** rdx) {
    void* rsp3;
    void** r8d4;
    void** rbx5;
    void** r9_6;
    void** rax7;
    int64_t r8_8;
    void** v9;
    void** rsi10;
    uint32_t v11;
    uint32_t eax12;
    void** rax13;
    int32_t v14;
    void** rax15;
    void** eax16;
    int32_t v17;
    int64_t rax18;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 0x78);
    r8d4 = *reinterpret_cast<void***>(rdx + 16);
    __asm__("fld tword [rcx]");
    rbx5 = rdx;
    if (reinterpret_cast<signed char>(r8d4) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(rdx + 16) = reinterpret_cast<void**>(6);
        r8d4 = reinterpret_cast<void**>(6);
    } else {
        if (!r8d4) {
            *reinterpret_cast<void***>(rdx + 16) = reinterpret_cast<void**>(1);
            r8d4 = reinterpret_cast<void**>(1);
        }
    }
    __asm__("fstp tword [rsp+0x60]");
    r9_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + 92);
    rax7 = text(2, reinterpret_cast<int64_t>(rsp3) + 64, r8d4, r9_6);
    *reinterpret_cast<void***>(&r8_8) = v9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
    rsi10 = rax7;
    if (*reinterpret_cast<void***>(&r8_8) == 0xffff8000) {
        __pformat_emit_inf_or_nan(v11, rax7, rbx5, r9_6);
        __freedtoa(rsi10, rsi10);
        return;
    } else {
        eax12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 8)) & 0x800;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r8_8)) < reinterpret_cast<signed char>(0xfffffffd) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r8_8)) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 16))) {
            if (eax12) {
                *reinterpret_cast<void***>(rbx5 + 16) = *reinterpret_cast<void***>(rbx5 + 16) - 1;
            } else {
                rax13 = strlen(rsi10, rsi10);
                *reinterpret_cast<void***>(&r8_8) = *reinterpret_cast<void***>(&r8_8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
                *reinterpret_cast<void***>(rbx5 + 16) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rax13)) - 1);
            }
            __pformat_emit_efloat(v14, rsi10, r8_8, rbx5);
            __freedtoa(rsi10, rsi10);
            return;
        } else {
            if (eax12) {
                *reinterpret_cast<void***>(rbx5 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 16)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r8_8)));
            } else {
                rax15 = strlen(rsi10, rsi10);
                *reinterpret_cast<void***>(&r8_8) = *reinterpret_cast<void***>(&r8_8);
                eax16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rax15)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r8_8)));
                *reinterpret_cast<void***>(rbx5 + 16) = eax16;
                if (reinterpret_cast<signed char>(eax16) < reinterpret_cast<signed char>(0) && !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx5 + 12) == 0))) {
                    *reinterpret_cast<void***>(rbx5 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax16) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 12)));
                }
            }
            __pformat_emit_float(v17, rsi10, *reinterpret_cast<void***>(&r8_8), rbx5);
            while (*reinterpret_cast<void***>(&rax18) = *reinterpret_cast<void***>(rbx5 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0, *reinterpret_cast<void***>(rbx5 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax18 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax18)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax18) == 0))) {
                __pformat_putc(32, rbx5, 32, rbx5);
            }
            __freedtoa(rsi10);
            return;
        }
    }
}

/* .data */
void** data = reinterpret_cast<void**>(0);

void** __Balloc_D2A(void** ecx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    void** ecx6;
    int64_t rbx7;
    void** rax8;
    int1_t zf9;
    int64_t rcx10;
    int1_t zf11;
    void** ecx12;
    uint64_t rdx13;
    uint64_t rdx14;

    text(0, rdx, r8, r9);
    if (reinterpret_cast<signed char>(ecx) > reinterpret_cast<signed char>(9)) {
        addr_40bf50_2:
        ecx6 = ecx;
        *reinterpret_cast<void***>(&rbx7) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx6));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        rax8 = malloc(reinterpret_cast<uint64_t>(static_cast<int32_t>(rbx7 - 1) * 4 + 39) & 0x7fffffff8);
        if (!rax8) {
            addr_40bf94_3:
            return rax8;
        } else {
            addr_40bf7d_4:
            zf9 = dtoa_CS_init == 2;
            *reinterpret_cast<void***>(rax8 + 8) = ecx;
            *reinterpret_cast<void***>(rax8 + 12) = *reinterpret_cast<void***>(&rbx7);
            if (zf9) {
                addr_40bf37_5:
                LeaveCriticalSection(0x41cc560);
                rax8 = rax8;
                goto addr_40bf8c_6;
            } else {
                addr_40bf8c_6:
                *reinterpret_cast<void***>(rax8 + 16) = reinterpret_cast<void**>(0);
                goto addr_40bf94_3;
            }
        }
    } else {
        rcx10 = reinterpret_cast<int32_t>(ecx);
        rax8 = *reinterpret_cast<void***>(0x41cc500 + rcx10 * 8);
        if (rax8) {
            zf11 = dtoa_CS_init == 2;
            *reinterpret_cast<void***>(0x41cc500 + rcx10 * 8) = *reinterpret_cast<void***>(rax8);
            if (!zf11) 
                goto addr_40bf8c_6; else 
                goto addr_40bf37_5;
        }
        rax8 = data;
        ecx12 = ecx;
        *reinterpret_cast<void***>(&rbx7) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx12));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        rdx13 = reinterpret_cast<uint64_t>(static_cast<int32_t>(rbx7 - 1) * 4 + 39) >> 3;
        *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(&rdx13);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
        if ((reinterpret_cast<int64_t>(rax8 - 0x41cbc00) >> 3) + rdx14 > 0x120) 
            goto addr_40bf50_2;
    }
    data = rax8 + rdx14 * 8;
    goto addr_40bf7d_4;
}

void** __nrv_alloc_D2A(unsigned char* rcx, void** rdx, void** r8, void** r9, int64_t a5) {
    unsigned char* rsi6;
    void** rdi7;
    void** ebx8;
    int64_t rax9;
    int64_t v10;
    void** rax11;
    void* r8_12;
    uint32_t r9d13;
    void** rax14;
    void** rcx15;
    uint32_t r9d16;

    rsi6 = rcx;
    rdi7 = rdx;
    if (*reinterpret_cast<int32_t*>(&r8) <= 27) {
        ebx8 = reinterpret_cast<void**>(0);
    } else {
        *reinterpret_cast<int32_t*>(&rax9) = 4;
        ebx8 = reinterpret_cast<void**>(0);
        do {
            *reinterpret_cast<int32_t*>(&rax9) = *reinterpret_cast<int32_t*>(&rax9) + *reinterpret_cast<int32_t*>(&rax9);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
            ++ebx8;
        } while (*reinterpret_cast<int32_t*>(&r8) > static_cast<int32_t>(rax9 + 23));
    }
    rax11 = __Balloc_D2A(ebx8, rdx, r8, r9, v10);
    r8_12 = reinterpret_cast<void*>(rsi6 + 1);
    *reinterpret_cast<void***>(rax11) = ebx8;
    r9d13 = *rsi6;
    rax14 = rax11 + 4;
    *reinterpret_cast<void***>(rax11 + 4) = *reinterpret_cast<void***>(&r9d13);
    rcx15 = rax14;
    if (*reinterpret_cast<void***>(&r9d13)) {
        do {
            r8_12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r8_12) + 1);
            r9d16 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(r8_12) - 1);
            ++rcx15;
            *reinterpret_cast<void***>(rcx15) = *reinterpret_cast<void***>(&r9d16);
        } while (*reinterpret_cast<void***>(&r9d16));
    }
    if (rdi7) {
        *reinterpret_cast<void***>(rdi7) = rcx15;
    }
    return rax14;
}

void** __trailz_D2A(void** rcx, ...) {
    void*** rdx2;
    void*** r8_3;
    void** ecx4;
    void** eax5;

    rdx2 = reinterpret_cast<void***>(rcx + 24);
    r8_3 = rdx2 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20)) * 4;
    if (reinterpret_cast<uint64_t>(rdx2) >= reinterpret_cast<uint64_t>(r8_3)) {
        return 0;
    }
    ecx4 = *reinterpret_cast<void***>(rcx + 24);
    eax5 = reinterpret_cast<void**>(0);
    if (!ecx4) {
        do {
            rdx2 = rdx2 + 4;
            eax5 = eax5 + 32;
            if (reinterpret_cast<uint64_t>(r8_3) <= reinterpret_cast<uint64_t>(rdx2)) 
                break;
            ecx4 = *rdx2;
        } while (!ecx4);
        goto addr_40bdc3_6;
    } else {
        goto addr_40bdc3_6;
    }
    return eax5;
    addr_40bdc3_6:
    __asm__("bsf ecx, ecx");
    return reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<unsigned char>(ecx4);
}

void __Bfree_D2A(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    int64_t rdx6;
    int1_t zf7;
    void** rcx8;

    if (rcx) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx + 8)) > reinterpret_cast<signed char>(9)) {
            goto free;
        } else {
            text(0, rdx, r8, r9);
            rdx6 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 8));
            zf7 = dtoa_CS_init == 2;
            rcx8 = *reinterpret_cast<void***>(0x41cc500 + rdx6 * 8);
            *reinterpret_cast<void***>(0x41cc500 + rdx6 * 8) = rcx;
            *reinterpret_cast<void***>(rcx) = rcx8;
            if (zf7) {
                goto LeaveCriticalSection;
            }
        }
    }
    return;
}

/* .text */
void** text(void** ecx) {
    void** ebx2;
    int64_t rax3;
    void** rdx4;
    void** r8_5;
    void** r9_6;
    int64_t v7;
    void** rax8;

    ebx2 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(ecx) > reinterpret_cast<signed char>(27)) {
        *reinterpret_cast<int32_t*>(&rax3) = 4;
        do {
            *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(&rax3) + *reinterpret_cast<int32_t*>(&rax3);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
            ++ebx2;
            rdx4 = reinterpret_cast<void**>(static_cast<uint32_t>(rax3 + 23));
            *reinterpret_cast<int32_t*>(&rdx4 + 4) = 0;
        } while (reinterpret_cast<signed char>(rdx4) < reinterpret_cast<signed char>(ecx));
    }
    rax8 = __Balloc_D2A(ebx2, rdx4, r8_5, r9_6, v7);
    *reinterpret_cast<void***>(rax8) = ebx2;
    return rax8 + 4;
}

void** __i2b_D2A(void** ecx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    int64_t v6;
    void** rax7;

    rax7 = __Balloc_D2A(1, rdx, r8, r9, v6);
    if (rax7) {
        *reinterpret_cast<void***>(rax7 + 24) = ecx;
        *reinterpret_cast<void***>(rax7 + 20) = reinterpret_cast<void**>(1);
    }
    return rax7;
}

void** __multadd_D2A(void** rcx, void** edx, void** r8);

/* .bss */
void** bss;

void** __mult_D2A(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...);

void** __pow5mult_D2A(void** rcx, void** edx, ...) {
    void** rdx2;
    void** rsi3;
    void** ebx4;
    uint32_t eax5;
    void** rax6;
    int32_t ebx7;
    void** rbp8;
    void** rdi9;
    void** r9_10;
    void** r9_11;
    int64_t v12;
    void** rax13;
    int1_t zf14;
    void** r9_15;
    int64_t v16;
    void** rax17;
    void** rcx18;
    void** r9_19;
    int64_t v20;
    void** rsi21;
    void** r9_22;
    void** r9_23;
    int64_t v24;
    void** rax25;
    int1_t zf26;

    rdx2 = edx;
    rsi3 = rcx;
    ebx4 = rdx2;
    eax5 = reinterpret_cast<unsigned char>(rdx2) & 3;
    if (!eax5 || (rdx2 = *reinterpret_cast<void***>(0x412bc0 + reinterpret_cast<int32_t>(eax5 - 1) * 4), *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0, rax6 = __multadd_D2A(rcx, rdx2, 0), rsi3 = rax6, !!rax6)) {
        ebx7 = reinterpret_cast<signed char>(ebx4) >> 2;
        rbp8 = rsi3;
        if (!ebx7) {
            addr_40c2f6_3:
            return rbp8;
        } else {
            rdi9 = bss;
            if (!rdi9) {
                text(1, rdx2, 0, r9_10, 1);
                rdi9 = bss;
                if (!rdi9) {
                    rax13 = __Balloc_D2A(1, rdx2, 0, r9_11, v12, 1);
                    rdi9 = rax13;
                    if (!rax13) {
                        bss = reinterpret_cast<void**>(0);
                        *reinterpret_cast<int32_t*>(&rbp8) = 0;
                        *reinterpret_cast<int32_t*>(&rbp8 + 4) = 0;
                        goto addr_40c2f6_3;
                    } else {
                        bss = rdi9;
                        *reinterpret_cast<void***>(rdi9 + 20) = reinterpret_cast<void**>(0x27100000001);
                        *reinterpret_cast<void***>(rdi9) = reinterpret_cast<void**>(0);
                        goto addr_40c398_9;
                    }
                } else {
                    addr_40c398_9:
                    zf14 = dtoa_CS_init == 2;
                    if (zf14) {
                        LeaveCriticalSection(0x41cc588, rdx2);
                        goto addr_40c2b4_11;
                    }
                }
            } else {
                addr_40c2b4_11:
                rbp8 = rsi3;
            }
        }
        while (1) {
            if (!(*reinterpret_cast<unsigned char*>(&ebx7) & 1)) {
                ebx7 = ebx7 >> 1;
                if (!ebx7) 
                    goto addr_40c2f6_3;
            } else {
                rdx2 = rdi9;
                rax17 = __mult_D2A(rbp8, rdx2, 0, r9_15, v16);
                if (!rax17) 
                    break;
                rcx18 = rbp8;
                rbp8 = rax17;
                __Bfree_D2A(rcx18, rdx2, 0, r9_19, v20, rcx18);
                ebx7 = ebx7 >> 1;
                if (!ebx7) 
                    goto addr_40c2f6_3;
            }
            rsi21 = *reinterpret_cast<void***>(rdi9);
            if (!rsi21) {
                text(1, rdx2, 0, r9_22, 1);
                rsi21 = *reinterpret_cast<void***>(rdi9);
                if (!rsi21) {
                    rdx2 = rdi9;
                    rax25 = __mult_D2A(rdi9, rdx2, 0, r9_23, v24);
                    rsi21 = rax25;
                    *reinterpret_cast<void***>(rdi9) = rax25;
                    if (!rax25) 
                        break;
                    *reinterpret_cast<void***>(rax25) = reinterpret_cast<void**>(0);
                }
                zf26 = dtoa_CS_init == 2;
                if (zf26) {
                    LeaveCriticalSection(0x41cc588, rdx2);
                }
            }
            rdi9 = rsi21;
        }
    }
    return 0;
}

struct s27 {
    signed char[2] pad2;
    void** f2;
};

void** __lshift_D2A(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    void** rbp6;
    uint32_t r14d7;
    void** ecx8;
    int64_t rsi9;
    void** eax10;
    int64_t r13_11;
    void** ebx12;
    int64_t v13;
    void** rax14;
    void** r12_15;
    void** rdi16;
    void** rax17;
    void*** rsi18;
    uint32_t r14d19;
    void*** rax20;
    void** rdi21;
    void*** rsi22;
    int64_t v23;
    uint32_t r10d24;
    uint32_t ecx25;
    uint32_t ecx26;

    rbp6 = rcx;
    r14d7 = *reinterpret_cast<uint32_t*>(&rdx);
    ecx8 = *reinterpret_cast<void***>(rcx + 8);
    *reinterpret_cast<void**>(&rsi9) = reinterpret_cast<void*>(*reinterpret_cast<int32_t*>(&rdx) >> 5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = 0;
    eax10 = *reinterpret_cast<void***>(rbp6 + 12);
    *reinterpret_cast<struct s27**>(&r13_11) = reinterpret_cast<struct s27*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp6 + 20)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsi9)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = 0;
    ebx12 = reinterpret_cast<void**>(static_cast<uint32_t>(r13_11 + 1));
    if (reinterpret_cast<signed char>(ebx12) > reinterpret_cast<signed char>(eax10)) {
        do {
            eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<unsigned char>(eax10));
            ++ecx8;
        } while (reinterpret_cast<signed char>(ebx12) > reinterpret_cast<signed char>(eax10));
    }
    rax14 = __Balloc_D2A(ecx8, rdx, r8, r9, v13);
    r12_15 = rax14;
    if (!rax14) {
        addr_40c4de_5:
        return r12_15;
    } else {
        rdi16 = rax14 + 24;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsi9)) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rsi9) == 0))) {
            *reinterpret_cast<uint32_t*>(&rdx) = static_cast<uint32_t>(rsi9 - 1);
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            r8 = rdi16;
            rax17 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdi16 + reinterpret_cast<unsigned char>(rdx) * 4) + 4);
            do {
                *reinterpret_cast<void***>(r8) = reinterpret_cast<void**>(0);
                r8 = r8 + 4;
            } while (r8 != rax17);
            rdi16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdi16 + reinterpret_cast<unsigned char>(rdx) * 4) + 4);
        }
        rsi18 = reinterpret_cast<void***>(rbp6 + 24);
        r14d19 = r14d7 & 31;
        rax20 = rsi18 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbp6 + 20)) * 4;
        if (r14d19) 
            goto addr_40c487_11;
    }
    do {
        *reinterpret_cast<void***>(rdi16) = *rsi18;
        rdi21 = rdi16 + 4;
        rsi22 = rsi18 + 4;
        if (reinterpret_cast<uint64_t>(rax20) <= reinterpret_cast<uint64_t>(rsi22)) 
            break;
        *reinterpret_cast<void***>(rdi21) = *rsi22;
        rdi16 = rdi21 + 4;
        rsi18 = rsi22 + 4;
    } while (reinterpret_cast<uint64_t>(rax20) > reinterpret_cast<uint64_t>(rsi18));
    goto addr_40c4fc_20;
    addr_40c4ce_21:
    *reinterpret_cast<void***>(r12_15 + 20) = ebx12 - 1;
    __Bfree_D2A(rbp6, rdx, r8, r9, v23);
    goto addr_40c4de_5;
    addr_40c4fc_20:
    goto addr_40c4ce_21;
    addr_40c487_11:
    r8 = reinterpret_cast<void**>(0);
    r10d24 = 32 - r14d19;
    while (r9 = rdi16 + 4, ecx25 = r14d19, rsi18 = rsi18 + 4, *reinterpret_cast<uint32_t*>(&rdx) = reinterpret_cast<unsigned char>(*rsi18) << *reinterpret_cast<unsigned char*>(&ecx25), *reinterpret_cast<int32_t*>(&rdx + 4) = 0, *reinterpret_cast<void***>(r9 + 0xfffffffffffffffc) = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(&rdx) | reinterpret_cast<unsigned char>(r8)), ecx26 = r10d24, r8 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(rsi18 + 0xfffffffffffffffc) >> *reinterpret_cast<signed char*>(&ecx26)), *reinterpret_cast<int32_t*>(&r8 + 4) = 0, reinterpret_cast<uint64_t>(rax20) > reinterpret_cast<uint64_t>(rsi18)) {
        rdi16 = r9;
    }
    *reinterpret_cast<void***>(rdi16 + 4) = r8;
    if (!r8) 
        goto addr_40c4ce_21;
    ebx12 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s27**>(&r13_11))->f2);
    goto addr_40c4ce_21;
}

void** __multadd_D2A(void** rcx, void** edx, void** r8) {
    void** esi4;
    void** rdi5;
    uint64_t rbx6;
    void** rdx7;
    void** r9_8;
    int64_t rcx9;
    int64_t rax10;
    uint64_t rax11;
    void** rbp12;
    int64_t rax13;
    int64_t v14;
    void** rax15;
    void** rdx16;
    void** r8_17;
    void** rcx18;
    int64_t v19;

    esi4 = *reinterpret_cast<void***>(rcx + 20);
    rdi5 = rcx;
    rbx6 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&r8)));
    rdx7 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(edx)));
    r9_8 = rcx + 24;
    *reinterpret_cast<void***>(&rcx9) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    do {
        *reinterpret_cast<void***>(&rax10) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_8) + reinterpret_cast<uint64_t>(rcx9 * 4));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        rax11 = rax10 * reinterpret_cast<unsigned char>(rdx7) + rbx6;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_8) + reinterpret_cast<uint64_t>(rcx9 * 4)) = *reinterpret_cast<void***>(&rax11);
        ++rcx9;
        rbx6 = rax11 >> 32;
    } while (reinterpret_cast<signed char>(esi4) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rcx9)));
    rbp12 = rdi5;
    if (!rbx6) 
        goto addr_40c0cb_4;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi5 + 12)) <= reinterpret_cast<signed char>(esi4)) {
        *reinterpret_cast<void***>(&rax13) = *reinterpret_cast<void***>(rdi5 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
        rax15 = __Balloc_D2A(static_cast<uint32_t>(rax13 + 1), rdx7, r8, r9_8, v14);
        rbp12 = rax15;
        if (!rax15) {
            addr_40c0cb_4:
            return rbp12;
        } else {
            rdx16 = rdi5 + 16;
            r8_17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdi5 + 20)) * 4 + 8);
            memcpy(rax15 + 16, rdx16, r8_17);
            rcx18 = rdi5;
            rdi5 = rbp12;
            __Bfree_D2A(rcx18, rdx16, r8_17, r9_8, v19, rcx18);
        }
    }
    rbp12 = rdi5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi5 + reinterpret_cast<int32_t>(esi4) * 4) + 24) = *reinterpret_cast<int32_t*>(&rbx6);
    *reinterpret_cast<void***>(rdi5 + 20) = esi4 + 1;
    goto addr_40c0cb_4;
}

uint32_t __cmp_D2A(void** rcx, void** rdx, ...) {
    int64_t r8_3;
    uint32_t eax4;
    void* r9_5;
    void*** rcx6;
    void*** r8_7;
    void*** rdx8;

    r8_3 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 20));
    eax4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 20)) - *reinterpret_cast<uint32_t*>(&r8_3);
    if (eax4) {
        addr_40c53d_2:
        return eax4;
    } else {
        r9_5 = reinterpret_cast<void*>(r8_3 * 4);
        rcx6 = reinterpret_cast<void***>(rcx + 24);
        r8_7 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rcx6) + reinterpret_cast<uint64_t>(r9_5));
        rdx8 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(r9_5) + 24);
        do {
            rdx8 = rdx8 - 4;
            r8_7 = r8_7 - 4;
            if (*r8_7 != *rdx8) 
                break;
        } while (reinterpret_cast<uint64_t>(rcx6) < reinterpret_cast<uint64_t>(r8_7));
        goto addr_40c53d_2;
    }
    eax4 = eax4 - (eax4 + reinterpret_cast<uint1_t>(eax4 < eax4 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*r8_7) < reinterpret_cast<unsigned char>(*rdx8)))) | 1;
    goto addr_40c53d_2;
}

int64_t __quorem_D2A(void** rcx, void** rdx, ...) {
    int64_t rax3;
    void** r12_4;
    void** r15_5;
    void*** rbx6;
    void** esi7;
    void*** r13_8;
    void* rbp9;
    void*** rdi10;
    void*** rbp11;
    int64_t rax12;
    uint32_t eax13;
    int64_t r14_14;
    uint32_t v15;
    uint32_t eax16;
    void*** rcx17;
    int64_t rdx18;
    int64_t rax19;
    int64_t r8_20;
    uint64_t rax21;
    uint64_t rdx22;
    void*** rdx23;
    int64_t rdx24;
    void*** r11_25;
    void*** r10_26;
    uint64_t rax27;
    int64_t r9_28;
    int64_t rcx29;
    int64_t r8_30;
    uint64_t rcx31;
    int64_t rcx32;
    uint64_t r8_33;
    uint64_t r9_34;
    void*** rax35;
    void*** rdx36;
    void*** rax37;
    void*** rdx38;

    *reinterpret_cast<uint32_t*>(&rax3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    r12_4 = rcx;
    r15_5 = rdx;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx + 20)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 20))) {
        addr_40a6eb_2:
        return rax3;
    } else {
        rbx6 = reinterpret_cast<void***>(rdx + 24);
        esi7 = *reinterpret_cast<void***>(rdx + 20) - 1;
        r13_8 = reinterpret_cast<void***>(rcx + 24);
        rbp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(esi7))) << 2);
        rdi10 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbx6) + reinterpret_cast<uint64_t>(rbp9));
        rbp11 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbp9) + reinterpret_cast<uint64_t>(r13_8));
        *reinterpret_cast<void***>(&rax12) = *rdi10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        eax13 = reinterpret_cast<unsigned char>(*rbp11) / static_cast<uint32_t>(rax12 + 1);
        *reinterpret_cast<uint32_t*>(&r14_14) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_14) + 4) = 0;
        v15 = eax13;
        if (!eax13) {
            addr_40a649_4:
            eax16 = __cmp_D2A(r12_4, r15_5);
            if (reinterpret_cast<int32_t>(eax16) < reinterpret_cast<int32_t>(0)) {
                addr_40a6e7_5:
                *reinterpret_cast<uint32_t*>(&rax3) = v15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
                goto addr_40a6eb_2;
            } else {
                rcx17 = r13_8;
                *reinterpret_cast<uint32_t*>(&rdx18) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
                v15 = static_cast<uint32_t>(r14_14 + 1);
                do {
                    rbx6 = rbx6 + 4;
                    *reinterpret_cast<void***>(&rax19) = *rcx17;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
                    rcx17 = rcx17 + 4;
                    *reinterpret_cast<uint16_t*>(&r8_20) = *reinterpret_cast<uint16_t*>(rbx6 + 0xfffffffffffffffc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = 0;
                    rax21 = reinterpret_cast<uint64_t>(rax19 - r8_20 - rdx18);
                    *reinterpret_cast<uint16_t*>(rcx17 + 0xfffffffffffffffc) = *reinterpret_cast<uint16_t*>(&rax21);
                    rdx22 = rax21 >> 32;
                    *reinterpret_cast<uint32_t*>(&rdx18) = *reinterpret_cast<uint32_t*>(&rdx22) & 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
                } while (reinterpret_cast<uint64_t>(rdi10) >= reinterpret_cast<uint64_t>(rbx6));
                rdx23 = r13_8 + reinterpret_cast<int32_t>(esi7) * 4;
                if (*rdx23) 
                    goto addr_40a6e7_5;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rdx24) = eax13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = 0;
            r11_25 = rbx6;
            r10_26 = r13_8;
            *reinterpret_cast<int32_t*>(&rax27) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&r9_28) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = 0;
            do {
                r11_25 = r11_25 + 4;
                *reinterpret_cast<uint16_t*>(&rcx29) = *reinterpret_cast<uint16_t*>(r11_25 + 0xfffffffffffffffc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0;
                r10_26 = r10_26 + 4;
                *reinterpret_cast<uint16_t*>(&r8_30) = *reinterpret_cast<uint16_t*>(r10_26 + 0xfffffffffffffffc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = 0;
                rcx31 = rcx29 * rdx24 + rax27;
                *reinterpret_cast<int32_t*>(&rcx32) = *reinterpret_cast<int32_t*>(&rcx31);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = 0;
                rax27 = rcx31 >> 32;
                r8_33 = reinterpret_cast<uint64_t>(r8_30 - rcx32 - r9_28);
                *reinterpret_cast<uint16_t*>(r10_26 + 0xfffffffffffffffc) = *reinterpret_cast<uint16_t*>(&r8_33);
                r9_34 = r8_33 >> 32;
                *reinterpret_cast<uint32_t*>(&r9_28) = *reinterpret_cast<uint32_t*>(&r9_34) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = 0;
            } while (reinterpret_cast<uint64_t>(rdi10) >= reinterpret_cast<uint64_t>(r11_25));
            if (*rbp11) 
                goto addr_40a649_4; else 
                goto addr_40a606_12;
        }
    }
    rax35 = rdx23 + 0xfffffffffffffffc;
    if (reinterpret_cast<uint64_t>(r13_8) < reinterpret_cast<uint64_t>(rax35) && !rdx23[0xfffffffffffffffc]) {
        rdx36 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rdx23) + -(reinterpret_cast<uint64_t>(rdx23) - reinterpret_cast<uint64_t>(r13_8) - 5 & 0xfffffffffffffffc) + 0xfffffffffffffff8);
        do {
            rax35 = rax35 - 4;
            --esi7;
            if (rax35 == rdx36) 
                break;
        } while (!*rax35);
    }
    *reinterpret_cast<void***>(r12_4 + 20) = esi7;
    goto addr_40a6e7_5;
    addr_40a606_12:
    rax37 = rbp11 + 0xfffffffffffffffc;
    if (reinterpret_cast<uint64_t>(r13_8) < reinterpret_cast<uint64_t>(rax37) && !rbp11[0xfffffffffffffffc]) {
        rdx38 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbp11) + -(reinterpret_cast<uint64_t>(rbp11) - reinterpret_cast<uint64_t>(r13_8) - 5 & 0xfffffffffffffffc) + 0xfffffffffffffff8);
        do {
            rax37 = rax37 - 4;
            --esi7;
            if (rax37 == rdx38) 
                break;
        } while (!*rax37);
    }
    *reinterpret_cast<void***>(r12_4 + 20) = esi7;
    goto addr_40a649_4;
}

int64_t InitializeCriticalSection = 0x3dcd662;

void dtoa_lock_cleanup();

int64_t Sleep = 0x3dcd750;

/* .text */
void text(int32_t ecx, void** rdx, void** r8, void** r9, ...) {
    int32_t eax5;
    int32_t tmp32_6;
    int64_t rbx7;
    int32_t eax8;
    int64_t rbx9;

    eax5 = dtoa_CS_init;
    if (eax5 == 2) 
        goto addr_40be2c_2;
    if (!eax5) {
        tmp32_6 = dtoa_CS_init;
        dtoa_CS_init = 1;
        if (!tmp32_6) {
            rbx7 = InitializeCriticalSection;
            rbx7(0x41cc560);
            rbx7(0x41cc588);
            atexit(dtoa_lock_cleanup, rdx, r8, r9);
            dtoa_CS_init = 2;
            goto addr_40be2c_2;
        }
        if (tmp32_6 == 2) {
            dtoa_CS_init = 2;
            goto addr_40be2c_2;
        }
        eax8 = dtoa_CS_init;
        if (eax8 != 1) 
            goto addr_40be6f_9;
    } else {
        if (eax5 != 1) 
            goto addr_40be1b_11;
    }
    rbx9 = Sleep;
    do {
        rbx9(1);
        eax8 = dtoa_CS_init;
    } while (eax8 == 1);
    addr_40be16_14:
    if (eax8 == 2) {
        addr_40be2c_2:
        goto EnterCriticalSection;
    } else {
        addr_40be1b_11:
        return;
    }
    addr_40be6f_9:
    goto addr_40be16_14;
}

void** __mult_D2A(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    int64_t rdi6;
    int64_t r13_7;
    void** rbp8;
    void** r14_9;
    int32_t eax10;
    void** ebx11;
    void* ecx12;
    void** ecx13;
    int64_t v14;
    void** rax15;
    void*** rsi16;
    void*** r12_17;
    void*** rcx18;
    void*** rdx19;
    void*** rbp20;
    void*** r13_21;
    void*** rdi22;
    int64_t rcx23;
    void*** r10_24;
    void*** r9_25;
    uint64_t r11_26;
    int64_t r8_27;
    int64_t r14_28;
    void*** r14_29;
    uint64_t r8_30;
    uint16_t* rdx31;

    rdi6 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20));
    r13_7 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 20));
    rbp8 = rcx;
    r14_9 = rdx;
    if (*reinterpret_cast<int32_t*>(&rdi6) < *reinterpret_cast<int32_t*>(&r13_7)) {
        eax10 = *reinterpret_cast<int32_t*>(&rdi6);
        rbp8 = rdx;
        rdi6 = *reinterpret_cast<int32_t*>(&r13_7);
        r14_9 = rcx;
        r13_7 = eax10;
    }
    ebx11 = reinterpret_cast<void**>(static_cast<uint32_t>(rdi6 + r13_7));
    ecx12 = reinterpret_cast<void*>(0);
    *reinterpret_cast<unsigned char*>(&ecx12) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp8 + 12)) < reinterpret_cast<signed char>(ebx11));
    ecx13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx12) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp8 + 8)));
    rax15 = __Balloc_D2A(ecx13, rdx, r8, r9, v14);
    if (rax15) {
        rsi16 = reinterpret_cast<void***>(rax15 + 24);
        r12_17 = rsi16 + reinterpret_cast<int32_t>(ebx11) * 4;
        if (reinterpret_cast<uint64_t>(rsi16) < reinterpret_cast<uint64_t>(r12_17)) {
            rcx18 = rsi16;
            do {
                *rcx18 = reinterpret_cast<void**>(0);
                rcx18 = rcx18 + 4;
            } while (reinterpret_cast<uint64_t>(r12_17) > reinterpret_cast<uint64_t>(rcx18));
        }
        rdx19 = reinterpret_cast<void***>(r14_9 + 24);
        rbp20 = reinterpret_cast<void***>(rbp8 + 24);
        r13_21 = rdx19 + r13_7 * 4;
        rdi22 = rbp20 + rdi6 * 4;
        if (reinterpret_cast<uint64_t>(rdx19) < reinterpret_cast<uint64_t>(r13_21)) {
            while (1) {
                rdx19 = rdx19 + 4;
                *reinterpret_cast<uint16_t*>(&rcx23) = *reinterpret_cast<uint16_t*>(rdx19 + 0xfffffffffffffffc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = 0;
                if (!*reinterpret_cast<uint16_t*>(&rcx23)) {
                    rsi16 = rsi16 + 4;
                    if (reinterpret_cast<uint64_t>(r13_21) <= reinterpret_cast<uint64_t>(rdx19)) 
                        break;
                } else {
                    r10_24 = rsi16;
                    r9_25 = rbp20;
                    *reinterpret_cast<void***>(&r11_26) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = 0;
                    while (r9_25 = r9_25 + 4, *reinterpret_cast<uint16_t*>(&r8_27) = *reinterpret_cast<uint16_t*>(r9_25 + 0xfffffffffffffffc), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_27) + 4) = 0, *reinterpret_cast<void***>(&r14_28) = *r10_24, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_28) + 4) = 0, r14_29 = r10_24 + 4, r8_30 = r8_27 * rcx23 + r14_28 + r11_26, *reinterpret_cast<uint16_t*>(r14_29 + 0xfffffffffffffffc) = *reinterpret_cast<uint16_t*>(&r8_30), r11_26 = r8_30 >> 32, reinterpret_cast<uint64_t>(rdi22) > reinterpret_cast<uint64_t>(r9_25)) {
                        r10_24 = r14_29;
                    }
                    rsi16 = rsi16 + 4;
                    r10_24[4] = *reinterpret_cast<void***>(&r11_26);
                    if (reinterpret_cast<uint64_t>(r13_21) <= reinterpret_cast<uint64_t>(rdx19)) 
                        break;
                }
            }
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx11 == 0))) {
            rdx31 = reinterpret_cast<uint16_t*>(r12_17 + 0xfffffffffffffffc);
            if (!*reinterpret_cast<uint16_t*>(r12_17 + 0xfffffffffffffffc)) {
                do {
                    --ebx11;
                    if (!ebx11) 
                        break;
                    rdx31 = rdx31 - 2;
                } while (!*rdx31);
            }
        }
        *reinterpret_cast<void***>(rax15 + 20) = ebx11;
    }
    return rax15;
}

struct s28 {
    signed char[1] pad1;
    void** f1;
};

void** __d2b_D2A() {
    void** rdx1;
    void** r8_2;
    void** r9_3;
    int64_t v4;
    void** rax5;
    int64_t r10_6;
    int64_t rbx7;
    uint64_t rcx8;
    uint64_t rbx9;
    int64_t rcx10;
    void** r9d11;
    int64_t rdx12;
    int32_t ebx13;
    void** r8d14;
    int64_t r11_15;
    int32_t* rdx16;
    uint32_t* r8_17;
    int64_t rdx18;
    int32_t r11d19;
    void** ebx20;
    int32_t ecx21;
    int32_t r11d22;
    uint32_t r8d23;
    int32_t ecx24;
    int32_t r11d25;
    struct s28* r8d26;

    __asm__("movd rbx, xmm0");
    rax5 = __Balloc_D2A(1, rdx1, r8_2, r9_3, v4);
    if (!rax5) {
        addr_40c86f_2:
        return rax5;
    } else {
        r10_6 = rbx7;
        rcx8 = rbx9 >> 32;
        *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rcx8) >> 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        r9d11 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(&rcx8) & 0xfffff);
        *reinterpret_cast<uint32_t*>(&rdx12) = *reinterpret_cast<uint32_t*>(&rcx10) & 0x7ff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx12)) {
            r9d11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r9d11) | 0x100000);
        }
        if (ebx13) 
            goto addr_40c816_6;
    }
    __asm__("bsf ecx, r9d");
    *reinterpret_cast<void***>(rax5 + 20) = reinterpret_cast<void**>(1);
    r8d14 = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(&r11_15) = static_cast<int32_t>(rcx10 + 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_15) + 4) = 0;
    *reinterpret_cast<void***>(rax5 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r9d11) >> *reinterpret_cast<signed char*>(&rcx10));
    if (*reinterpret_cast<uint32_t*>(&rdx12)) {
        addr_40c85b_8:
        *rdx16 = static_cast<int32_t>(rdx12 + r11_15 - 0x433);
        *r8_17 = reinterpret_cast<uint32_t>(53 - *reinterpret_cast<int32_t*>(&r11_15));
        goto addr_40c86f_2;
    } else {
        addr_40c8a0_9:
        rdx18 = reinterpret_cast<int32_t>(r8d14);
        __asm__("bsr edx, [rax+rdx*4+0x14]");
        *rdx16 = *reinterpret_cast<int32_t*>(&r11_15) - 0x432;
        *r8_17 = (reinterpret_cast<unsigned char>(r8d14) << 5) - (*reinterpret_cast<uint32_t*>(&rdx18) ^ 31);
        return rax5;
    }
    addr_40c816_6:
    __asm__("bsf r11d, ebx");
    if (!r11d19) {
        *reinterpret_cast<void***>(rax5 + 24) = ebx20;
    } else {
        ecx21 = 32 - r11d22;
        r8d23 = reinterpret_cast<unsigned char>(r9d11) << *reinterpret_cast<unsigned char*>(&ecx21);
        ecx24 = r11d25;
        r9d11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r9d11) >> *reinterpret_cast<signed char*>(&ecx24));
        *reinterpret_cast<void***>(rax5 + 24) = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(&r10_6) >> *reinterpret_cast<signed char*>(&ecx24) | r8d23);
    }
    r8d26 = reinterpret_cast<struct s28*>(0);
    *reinterpret_cast<void***>(rax5 + 28) = r9d11;
    *reinterpret_cast<unsigned char*>(&r8d26) = reinterpret_cast<uint1_t>(!!r9d11);
    r8d14 = reinterpret_cast<void**>(&r8d26->f1);
    *reinterpret_cast<void***>(rax5 + 20) = r8d14;
    if (!*reinterpret_cast<uint32_t*>(&rdx12)) 
        goto addr_40c8a0_9; else 
        goto addr_40c85b_8;
}

uint16_t __any_on_D2A(void** rcx, void** edx, ...) {
    int64_t rax3;
    void*** r9_4;
    int32_t r10d5;
    void*** r8_6;
    uint32_t edx7;
    uint32_t ecx8;
    uint16_t eax9;
    uint16_t* rdx10;
    uint16_t* rcx11;

    rax3 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20));
    r9_4 = reinterpret_cast<void***>(rcx + 24);
    r10d5 = reinterpret_cast<signed char>(edx) >> 5;
    if (*reinterpret_cast<int32_t*>(&rax3) >= r10d5) {
        r8_6 = r9_4 + r10d5 * 4;
        if (*reinterpret_cast<int32_t*>(&rax3) > r10d5 && ((edx7 = reinterpret_cast<unsigned char>(edx) & 31, !!edx7) && (ecx8 = edx7, *r8_6 != reinterpret_cast<unsigned char>(*r8_6) >> *reinterpret_cast<unsigned char*>(&ecx8) << *reinterpret_cast<unsigned char*>(&ecx8)))) {
            return 1;
        }
    } else {
        r8_6 = r9_4 + rax3 * 4;
    }
    if (reinterpret_cast<uint64_t>(r9_4) >= reinterpret_cast<uint64_t>(r8_6)) {
        return 0;
    }
    eax9 = *reinterpret_cast<uint16_t*>(r8_6 + 0xfffffffffffffffc);
    rdx10 = reinterpret_cast<uint16_t*>(r8_6 + 0xfffffffffffffffc);
    if (eax9) {
        addr_40fcf0_8:
        return 1;
    } else {
        rcx11 = reinterpret_cast<uint16_t*>((~(reinterpret_cast<uint64_t>(rdx10) - reinterpret_cast<uint64_t>(r9_4) + 3) & 0xfffffffffffffffc) + reinterpret_cast<uint64_t>(r8_6));
        do {
            if (rcx11 == rdx10) 
                break;
            rdx10 = rdx10 - 2;
        } while (!*rdx10);
        goto addr_40fcf0_8;
    }
    return eax9;
}

/* .text */
void text(void** rcx, void** edx, ...) {
    void*** rdi3;
    void** r9_4;
    int64_t rcx5;
    int32_t eax6;
    uint32_t edx7;
    void*** rbp8;
    void*** r11_9;
    void*** rbx10;
    void*** rsi11;
    int64_t rdi12;
    void*** r8_13;
    uint32_t ecx14;
    uint32_t r12d15;
    void** r10d16;
    void*** rsi17;
    uint32_t ecx18;
    uint32_t ecx19;

    rdi3 = reinterpret_cast<void***>(rcx + 24);
    r9_4 = rcx;
    rcx5 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20));
    eax6 = reinterpret_cast<signed char>(edx) >> 5;
    if (*reinterpret_cast<int32_t*>(&rcx5) <= eax6) 
        goto addr_40bd30_2;
    edx7 = reinterpret_cast<unsigned char>(edx) & 31;
    rbp8 = rdi3;
    r11_9 = rdi3 + rcx5 * 4;
    rbx10 = rdi3 + eax6 * 4;
    if (!edx7) {
        rsi11 = rbx10;
        if (reinterpret_cast<uint64_t>(r11_9) <= reinterpret_cast<uint64_t>(rbx10)) {
            addr_40bd30_2:
            *reinterpret_cast<void***>(r9_4 + 20) = reinterpret_cast<void**>(0);
        } else {
            do {
                *rdi3 = *rsi11;
                rdi3 = rdi3 + 4;
                rsi11 = rsi11 + 4;
            } while (reinterpret_cast<uint64_t>(r11_9) > reinterpret_cast<uint64_t>(rsi11));
            *reinterpret_cast<void***>(&rdi12) = reinterpret_cast<void**>(static_cast<uint32_t>((~reinterpret_cast<uint64_t>(rbx10) + reinterpret_cast<uint64_t>(r11_9) >> 2) + 1));
            goto addr_40bd74_11;
        }
    } else {
        r8_13 = rbx10 + 4;
        ecx14 = edx7;
        r12d15 = 32 - edx7;
        r10d16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*rbx10) >> *reinterpret_cast<signed char*>(&ecx14));
        if (reinterpret_cast<uint64_t>(r11_9) > reinterpret_cast<uint64_t>(r8_13)) {
            rsi17 = rdi3;
            do {
                ecx18 = r12d15;
                rsi17 = rsi17 + 4;
                r8_13 = r8_13 + 4;
                ecx19 = edx7;
                *reinterpret_cast<uint16_t*>(rsi17 + 0xfffffffffffffffc) = reinterpret_cast<uint16_t>(reinterpret_cast<unsigned char>(*r8_13) << *reinterpret_cast<unsigned char*>(&ecx18) | reinterpret_cast<unsigned char>(r10d16));
                r10d16 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(r8_13 - 4) >> *reinterpret_cast<signed char*>(&ecx19));
            } while (reinterpret_cast<uint64_t>(r11_9) > reinterpret_cast<uint64_t>(r8_13));
            rdi3 = rdi3 + (reinterpret_cast<uint64_t>(r11_9) - reinterpret_cast<uint64_t>(rbx10) - 5 >> 2) * 4 + 4;
        }
        *rdi3 = r10d16;
        if (r10d16) {
            rdi3 = rdi3 + 4;
        }
        rdi12 = reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(rdi3) - reinterpret_cast<uint64_t>(rbp8)) >> 2;
        goto addr_40bd74_11;
    }
    *reinterpret_cast<void***>(r9_4 + 24) = reinterpret_cast<void**>(0);
    return;
    addr_40bd74_11:
    *reinterpret_cast<void***>(r9_4 + 20) = *reinterpret_cast<void***>(&rdi12);
    if (*reinterpret_cast<void***>(&rdi12)) {
        return;
    }
}

/* .text */
void** text(void** rcx, ...) {
    void** r9_2;
    void*** rax3;
    void** rbx4;
    void** r8_5;
    void*** rcx6;
    void** rdx7;
    int64_t rax8;
    int64_t v9;
    void** rax10;
    void** rdx11;
    void** r8_12;
    void** rcx13;
    int64_t v14;

    r9_2 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20))));
    rax3 = reinterpret_cast<void***>(rcx + 24);
    rbx4 = rcx;
    r8_5 = r9_2;
    rcx6 = rax3 + reinterpret_cast<unsigned char>(r9_2) * 4;
    do {
        rdx7 = *rax3;
        *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0;
        if (rdx7 != 0xffffffff) 
            break;
        rax3 = rax3 + 4;
        *reinterpret_cast<uint16_t*>(rax3 + 0xfffffffffffffffc) = reinterpret_cast<uint16_t>(0);
    } while (reinterpret_cast<uint64_t>(rcx6) > reinterpret_cast<uint64_t>(rax3));
    goto addr_40c960_4;
    *rax3 = rdx7 + 1;
    return rbx4;
    addr_40c960_4:
    if (reinterpret_cast<signed char>(r8_5) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx4 + 12))) {
        *reinterpret_cast<void***>(&rax8) = *reinterpret_cast<void***>(rbx4 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        rax10 = __Balloc_D2A(static_cast<uint32_t>(rax8 + 1), rdx7, r8_5, r9_2, v9);
        rdx11 = rbx4 + 16;
        r8_12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx4 + 20)) * 4 + 8);
        memcpy(rax10 + 16, rdx11, r8_12);
        rcx13 = rbx4;
        rbx4 = rax10;
        __Bfree_D2A(rcx13, rdx11, r8_12, r9_2, v14, rcx13);
        r9_2 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rax10 + 20))));
        r8_5 = r9_2;
    }
    *reinterpret_cast<void***>(rbx4 + 20) = r8_5 + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx4 + reinterpret_cast<unsigned char>(r9_2) * 4) + 24) = 1;
    return rbx4;
}

struct s29 {
    signed char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
};

int32_t __match_D2A(struct s29** rcx, int64_t rdx) {
    struct s29* r8_3;
    int32_t r9d4;
    int64_t rax5;

    r8_3 = *rcx;
    do {
        ++rdx;
        r9d4 = *reinterpret_cast<signed char*>(rdx - 1);
        r8_3 = reinterpret_cast<struct s29*>(&r8_3->f1);
        if (!r9d4) 
            break;
        *reinterpret_cast<int32_t*>(&rax5) = r8_3->f0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        if (static_cast<uint32_t>(rax5 - 65) < 26) {
            *reinterpret_cast<int32_t*>(&rax5) = static_cast<int32_t>(rax5 + 32);
        }
    } while (*reinterpret_cast<int32_t*>(&rax5) == r9d4);
    goto addr_40fc00_6;
    *rcx = r8_3;
    return 1;
    addr_40fc00_6:
    return 0;
}

struct s30 {
    uint32_t f0;
    uint32_t f4;
};

struct s31 {
    signed char[48] pad48;
    signed char f48;
};

/* .refptr.__hexdig_D2A */
struct s31* refptr___hexdig_D2A = reinterpret_cast<struct s31*>(0x41cc600);

/* .text */
void text();

/* .text */
uint32_t text(struct s29** rcx, struct s17* rdx, struct s30* r8) {
    struct s31* r14_4;
    int1_t zf5;
    struct s29** v6;
    uint32_t eax7;
    int64_t rdx8;
    uint32_t v9;
    uint32_t* r13_10;
    struct s29* r10_11;
    struct s30* rbx12;
    uint32_t eax13;
    uint32_t edx14;
    uint32_t eax15;
    uint32_t edx16;
    int32_t r9d17;
    int32_t r11d18;
    int32_t edi19;
    uint32_t* v20;
    struct s30* rbp21;
    struct s30* rsi22;
    struct s29* rax23;
    uint32_t* r13_24;
    uint32_t eax25;
    struct s30* r9_26;
    int32_t r11d27;
    int32_t edi28;
    uint32_t edx29;
    int32_t ecx30;
    int32_t ecx31;
    uint32_t eax32;
    void* rcx33;
    uint32_t ecx34;
    uint32_t edx35;
    uint32_t edx36;
    uint32_t edx37;
    uint32_t edx38;
    struct s29* v39;
    struct s30* r9_40;
    int32_t r13d41;
    int32_t r15d42;
    uint32_t r12d43;
    int32_t ecx44;
    int32_t ecx45;
    uint32_t eax46;
    uint32_t ecx47;
    struct s30* rdi48;
    struct s29* rax49;
    int32_t edx50;

    r14_4 = refptr___hexdig_D2A;
    zf5 = r14_4->f48 == 0;
    v6 = rcx;
    if (zf5) {
        text();
        r8 = r8;
        rdx = rdx;
    }
    eax7 = reinterpret_cast<unsigned char>(rdx->f0) & 31;
    rdx8 = reinterpret_cast<signed char>(rdx->f0) >> 5;
    v9 = eax7;
    r13_10 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(r8) + rdx8 * 4);
    if (eax7) {
        ++r13_10;
    }
    r10_11 = *v6;
    rbx12 = reinterpret_cast<struct s30*>(r13_10 - 1);
    *(r13_10 - 1) = 0;
    while (eax13 = r10_11->f1, edx14 = eax13, eax13 - 1 <= 31) {
        r10_11 = reinterpret_cast<struct s29*>(&r10_11->f1);
    }
    if (*reinterpret_cast<signed char*>(&edx14) != 48 || ((eax15 = static_cast<uint32_t>(r10_11->f2) & 0xffffffdf, *reinterpret_cast<signed char*>(&eax15) != 88) || (edx16 = r10_11->f3, *reinterpret_cast<unsigned char*>(&edx16) <= 32))) {
        edx16 = r10_11->f1;
    } else {
        r10_11 = reinterpret_cast<struct s29*>(&r10_11->f2);
    }
    r9d17 = 0;
    r11d18 = 0;
    edi19 = 0;
    v20 = r13_10;
    rbp21 = rbx12;
    rsi22 = rbx12;
    rax23 = reinterpret_cast<struct s29*>(&r10_11->f1);
    if (!edx16) {
        addr_40f7b9_12:
        r13_24 = v20;
        eax25 = 4;
        if (edi19) {
            addr_40f8a5_13:
            if (reinterpret_cast<uint64_t>(rsi22) < reinterpret_cast<uint64_t>(rbp21) && r9d17 <= 7) {
                r9_26 = rsi22;
                r11d27 = 8 - r9d17 << 2;
                edi28 = 32 - r11d27;
                edx29 = rsi22->f0;
                do {
                    ecx30 = edi28;
                    r9_26 = reinterpret_cast<struct s30*>(&r9_26->f4);
                    ecx31 = r11d27;
                    eax32 = r9_26->f4 << *reinterpret_cast<unsigned char*>(&ecx30) | edx29;
                    edx29 = r9_26->f4 >> *reinterpret_cast<signed char*>(&ecx31);
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(r9_26) - 4) = eax32;
                    r9_26->f0 = edx29;
                } while (reinterpret_cast<uint64_t>(rbp21) > reinterpret_cast<uint64_t>(r9_26));
            }
        } else {
            addr_40f7cb_16:
            return eax25;
        }
    } else {
        while (1) {
            *reinterpret_cast<uint32_t*>(&rcx33) = edx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = 0;
            ecx34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(r14_4) + reinterpret_cast<int64_t>(rcx33));
            if (*reinterpret_cast<signed char*>(&ecx34)) {
                ++r9d17;
                ++edi19;
                if (r9d17 > 8) {
                    if (reinterpret_cast<uint64_t>(rsi22) <= reinterpret_cast<uint64_t>(r8)) {
                        addr_40f7a6_20:
                        edx16 = rax23->f1;
                        r10_11 = rax23;
                        rax23 = reinterpret_cast<struct s29*>(&r10_11->f1);
                        if (edx16) 
                            continue; else 
                            goto addr_40f7b9_12;
                    } else {
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rsi22) - 4) = 0;
                        edx35 = 0;
                        rsi22 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi22) - 4);
                        r9d17 = 1;
                    }
                } else {
                    edx35 = rsi22->f0 << 4;
                }
                rsi22->f0 = ecx34 & 15 | edx35;
                goto addr_40f7a6_20;
            }
            if (edx16 > 32) 
                goto addr_40f880_25;
            if (edi19 > r11d18) 
                goto addr_40f741_27;
            addr_40f834_28:
            edx36 = r10_11->f2;
            if (*reinterpret_cast<unsigned char*>(&edx36) <= 32) {
                do {
                    rax23 = reinterpret_cast<struct s29*>(&rax23->f1);
                    edx36 = rax23->f1;
                } while (*reinterpret_cast<unsigned char*>(&edx36) <= 32);
            }
            if (*reinterpret_cast<unsigned char*>(&edx36) == 48 && ((edx37 = static_cast<uint32_t>(rax23->f2) & 0xffffffdf, *reinterpret_cast<signed char*>(&edx37) == 88) && rax23->f3 > 32)) {
                rax23 = reinterpret_cast<struct s29*>(&rax23->f2);
                goto addr_40f7a6_20;
            }
            addr_40f741_27:
            if (reinterpret_cast<uint64_t>(rsi22) < reinterpret_cast<uint64_t>(rbp21) && r9d17 <= 7) {
                edx38 = rsi22->f0;
                v39 = rax23;
                r9_40 = rsi22;
                r13d41 = 8 - r9d17 << 2;
                r15d42 = 32 - r13d41;
                do {
                    r12d43 = r9_40->f4;
                    ecx44 = r15d42;
                    r9_40 = reinterpret_cast<struct s30*>(&r9_40->f4);
                    ecx45 = r13d41;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(r9_40) - 4) = edx38 | r12d43 << *reinterpret_cast<unsigned char*>(&ecx44);
                    edx38 = r12d43 >> *reinterpret_cast<signed char*>(&ecx45);
                    r9_40->f0 = edx38;
                } while (reinterpret_cast<uint64_t>(rbp21) > reinterpret_cast<uint64_t>(r9_40));
                rax23 = v39;
            }
            r9d17 = 8;
            if (reinterpret_cast<uint64_t>(rsi22) <= reinterpret_cast<uint64_t>(r8)) 
                goto addr_40f7a6_20;
            rbp21 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi22) - 4);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rsi22) - 4) = 0;
            r11d18 = edi19;
            r9d17 = 0;
            rsi22 = rbp21;
            goto addr_40f834_28;
        }
    }
    if (reinterpret_cast<uint64_t>(rsi22) <= reinterpret_cast<uint64_t>(r8)) {
        eax46 = *(r13_24 - 1);
        if (v9) {
            ecx47 = 32 - v9;
            eax46 = eax46 & 0xffffffff >> *reinterpret_cast<signed char*>(&ecx47);
            *(r13_24 - 1) = eax46;
        }
    } else {
        rdi48 = r8;
        do {
            rdi48->f0 = rsi22->f0;
            rdi48 = reinterpret_cast<struct s30*>(&rdi48->f4);
            rsi22 = reinterpret_cast<struct s30*>(&rsi22->f4);
        } while (reinterpret_cast<uint64_t>(rbx12) >= reinterpret_cast<uint64_t>(rsi22));
        do {
            rdi48 = reinterpret_cast<struct s30*>(&rdi48->f4);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rdi48) - 4) = 0;
        } while (reinterpret_cast<uint64_t>(rbx12) >= reinterpret_cast<uint64_t>(rdi48));
        eax46 = *(r13_24 - 1);
    }
    if (!eax46) {
        do {
            if (r8 == rbx12) 
                break;
            rbx12 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rbx12) - 4);
        } while (!rbx12->f0);
        goto addr_40f9a0_52;
    } else {
        goto addr_40f9a0_52;
    }
    rbx12->f0 = 1;
    eax25 = 5;
    goto addr_40f7cb_16;
    addr_40f9a0_52:
    eax25 = 5;
    goto addr_40f7cb_16;
    addr_40f880_25:
    r13_24 = v20;
    if (edx16 == 41 && edi19) {
        *v6 = reinterpret_cast<struct s29*>(&r10_11->f2);
        goto addr_40f8a5_13;
    }
    rax49 = reinterpret_cast<struct s29*>(&r10_11->f2);
    if (edx16 == 41) {
        addr_40fa04_57:
        *v6 = rax49;
    } else {
        edx50 = reinterpret_cast<signed char>(r10_11->f2);
        if (edx50) {
            do {
                rax49 = reinterpret_cast<struct s29*>(&rax49->f1);
                if (edx50 == 41) 
                    goto addr_40fa04_57;
                edx50 = rax49->f0;
            } while (edx50);
        }
    }
    eax25 = 4;
    goto addr_40f7cb_16;
}

void __copybits_D2A(void** rcx, void** edx, void** r8, ...) {
    void*** rsi4;
    void*** rax5;
    void** rdx6;
    void** rdi7;

    rsi4 = reinterpret_cast<void***>(r8 + 24);
    rax5 = rsi4 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r8 + 20)) * 4;
    rdx6 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rcx + (reinterpret_cast<signed char>(edx - 1) >> 5) * 4) + 4);
    if (reinterpret_cast<uint64_t>(rsi4) >= reinterpret_cast<uint64_t>(rax5)) {
        while (reinterpret_cast<unsigned char>(rdx6) > reinterpret_cast<unsigned char>(rcx)) {
            addr_40fc50_3:
            rcx = rcx + 4;
            *reinterpret_cast<void***>(rcx + 0xfffffffffffffffc) = reinterpret_cast<void**>(0);
        }
    } else {
        rdi7 = rcx;
        do {
            *reinterpret_cast<void***>(rdi7) = *rsi4;
            rdi7 = rdi7 + 4;
            rsi4 = rsi4 + 4;
        } while (reinterpret_cast<uint64_t>(rax5) > reinterpret_cast<uint64_t>(rsi4));
        rcx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rcx + (reinterpret_cast<uint64_t>(rax5) - reinterpret_cast<unsigned char>(r8) - 25 >> 2) * 4) + 4);
        if (reinterpret_cast<unsigned char>(rdx6) > reinterpret_cast<unsigned char>(rcx)) 
            goto addr_40fc4f_10;
    }
    return;
    addr_40fc4f_10:
    goto addr_40fc50_3;
}

void** rvOK(void* rcx, struct s17* rdx, void** r8, void** r9) {
    int32_t* rdi5;
    int32_t* rsi6;
    void** r12_7;
    void** r8_8;
    void** rax9;
    void** r13d10;
    void** rbx11;
    void** rdx12;
    void* v13;
    void** eax14;
    void* v15;
    int32_t v16;
    void** r14d17;
    int64_t v18;
    uint16_t edi19;
    uint32_t r15d20;
    void** rdx21;
    int64_t v22;
    void** rax23;
    void** v24;
    int32_t* v25;
    int32_t* rax26;
    void** v27;
    int32_t* v28;
    void** esi29;
    uint16_t eax30;
    uint32_t v31;
    int32_t v32;
    int32_t v33;
    uint16_t eax34;
    void** edx35;
    void** rcx36;
    int32_t v37;
    void** eax38;
    uint16_t eax39;
    int32_t v40;
    uint16_t eax41;
    void** rax42;
    int64_t rcx43;
    uint32_t eax44;
    uint32_t* v45;
    void** ecx46;
    uint32_t esi47;
    int32_t* v48;
    void** rax49;
    uint16_t eax50;
    int64_t rdx51;

    *rdi5 = *rsi6;
    r12_7 = r9;
    r8_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 + 56);
    rax9 = __d2b_D2A();
    r13d10 = rdx->f0;
    rbx11 = rax9;
    rdx12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v13) - reinterpret_cast<unsigned char>(r13d10));
    *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
    eax14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v15) + reinterpret_cast<unsigned char>(rdx12));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdx12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdx12 == 0)) {
        *reinterpret_cast<int32_t*>(&r8_8) = v16;
        *reinterpret_cast<int32_t*>(&r8_8 + 4) = 0;
        r14d17 = reinterpret_cast<void**>(0);
        if (!*reinterpret_cast<int32_t*>(&r8_8)) {
            addr_40cac8_6:
            __Bfree_D2A(rbx11, rdx12, r8_8, r9, v18, rbx11);
            return r14d17;
        } else {
            edi19 = reinterpret_cast<uint16_t>(0);
            r15d20 = 0;
            if (rdx12) {
                *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(-reinterpret_cast<unsigned char>(rdx12));
                *reinterpret_cast<int32_t*>(&rdx21 + 4) = 0;
                rax23 = __lshift_D2A(rbx11, rdx21, r8_8, r9, v22);
                rbx11 = rax23;
            } else {
                addr_40cb01_9:
                rdx12 = rdx->f4;
                *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
                if (reinterpret_cast<signed char>(rdx12) <= reinterpret_cast<signed char>(eax14)) {
                    if (reinterpret_cast<signed char>(rdx->f8) < reinterpret_cast<signed char>(eax14)) {
                        r15d20 = 0;
                        v24 = rdx->f8 + 1;
                        *v25 = 0xa3;
                        rax26 = _errno();
                        *rax26 = 34;
                        eax14 = v24;
                        *reinterpret_cast<void***>(rbx11 + 20) = reinterpret_cast<void**>(0);
                        goto addr_40cbaa_12;
                    }
                } else {
                    v27 = rdx12;
                    r9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx12) - reinterpret_cast<unsigned char>(eax14));
                    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                    if (reinterpret_cast<signed char>(r13d10) < reinterpret_cast<signed char>(r9) || (r14d17 = rdx->f16, !!r14d17)) {
                        *reinterpret_cast<void***>(rbx11 + 20) = reinterpret_cast<void**>(0);
                        r15d20 = 0;
                        *v28 = 80;
                        eax14 = rdx12;
                        goto addr_40cbaa_12;
                    } else {
                        esi29 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(r9 + 0xffffffffffffffff)));
                        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi29) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi29 == 0)) && !edi19) {
                            rdx12 = esi29;
                            *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
                            eax30 = __any_on_D2A(rbx11, rdx12, rbx11, rdx12);
                            r9 = r9;
                            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                            edi19 = eax30;
                        }
                        if (!(edi19 | v31)) 
                            goto addr_40cac8_6; else 
                            goto addr_40cb3f_18;
                    }
                }
            }
        }
    } else {
        if (r13d10 == 53) {
            r14d17 = reinterpret_cast<void**>(0);
            if (!v32) 
                goto addr_40cac8_6;
            if (rdx->f12 == 1) 
                goto addr_40cc33_22; else 
                goto addr_40cac8_6;
        } else {
            if (v33 == 1) {
                eax34 = __any_on_D2A(rbx11, rdx12, rbx11, rdx12);
                edx35 = rdx12;
                rcx36 = rbx11;
                edi19 = eax34;
                if (eax34) {
                    text(rcx36, edx35, rcx36, edx35);
                    r15d20 = 16;
                } else {
                    addr_40cd2e_26:
                    text(rcx36, edx35, rcx36, edx35);
                    r15d20 = 0;
                }
            } else {
                if (v37 != 2) {
                    eax38 = rdx12 - 1;
                    if (eax38) {
                        if (!static_cast<int1_t>(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rbx11 + (reinterpret_cast<signed char>(eax38) >> 5) * 4) + 24) >> reinterpret_cast<unsigned char>(eax38))) {
                            eax39 = __any_on_D2A(rbx11, rdx12, rbx11, rdx12);
                            edi19 = eax39;
                            if (!eax39) {
                                edx35 = rdx12;
                                rcx36 = rbx11;
                                goto addr_40cd2e_26;
                            } else {
                                r15d20 = 16;
                                text(rbx11, rdx12, rbx11, rdx12);
                                eax14 = eax14;
                                goto addr_40cb01_9;
                            }
                        }
                    } else {
                        r14d17 = reinterpret_cast<void**>(0);
                        if (!v40) 
                            goto addr_40cac8_6;
                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx11 + 24)) & 2) 
                            goto addr_40ca35_35; else 
                            goto addr_40cc33_22;
                    }
                } else {
                    addr_40ca35_35:
                    eax41 = __any_on_D2A(rbx11, rdx12, rbx11, rdx12);
                    edi19 = eax41;
                    text(rbx11, rdx12, rbx11, rdx12);
                    rax42 = text(rbx11, rbx11);
                    rbx11 = rax42;
                    *reinterpret_cast<void***>(&rcx43) = *reinterpret_cast<void***>(rbx11 + 20);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx43) + 4) = 0;
                    eax44 = reinterpret_cast<unsigned char>(r13d10) & 31;
                    if (eax44) {
                        eax44 = 32 - eax44;
                        goto addr_40ca6b_37;
                    }
                }
            }
        }
    }
    eax14 = eax14;
    goto addr_40cb01_9;
    addr_40cbaa_12:
    *reinterpret_cast<void***>(r8) = eax14;
    r8_8 = rbx11;
    rdx12 = r13d10;
    *reinterpret_cast<int32_t*>(&rdx12 + 4) = 0;
    __copybits_D2A(r12_7, rdx12, r8_8);
    r14d17 = reinterpret_cast<void**>(1);
    *v45 = *v45 | r15d20;
    goto addr_40cac8_6;
    addr_40cb3f_18:
    ecx46 = esi29;
    esi47 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rbx11 + (reinterpret_cast<signed char>(esi29) >> 5) * 4) + 24) & 1 << *reinterpret_cast<unsigned char*>(&ecx46);
    text(rbx11, r9, rbx11, r9);
    *v48 = 2;
    if (esi47) {
        r15d20 = 96;
        rax49 = text(rbx11, rbx11);
        rbx11 = rax49;
        eax14 = v27;
        goto addr_40cbaa_12;
    } else {
        eax14 = v27;
        if (edi19) {
            r15d20 = 80;
        }
        goto addr_40cbaa_12;
    }
    addr_40cc33_22:
    eax50 = __any_on_D2A(rbx11, rdx12, rbx11, rdx12);
    edx35 = rdx12;
    rcx36 = rbx11;
    edi19 = eax50;
    if (!eax50) {
        text(rcx36, edx35, rcx36, edx35);
        r15d20 = 0;
        eax14 = eax14;
        goto addr_40cb01_9;
    }
    addr_40ca6b_37:
    rdx51 = rcx43 - 1;
    __asm__("bsr edx, [rbx+rdx*4+0x18]");
    if (eax44 == (*reinterpret_cast<uint32_t*>(&rdx51) ^ 31)) {
        eax14 = eax14;
        r15d20 = 32;
        goto addr_40cb01_9;
    } else {
        if (!edi19) {
            edi19 = reinterpret_cast<uint16_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx11 + 24)) & 1);
        }
        r15d20 = 32;
        text(rbx11, 1, rbx11, 1);
        ++eax14;
        goto addr_40cb01_9;
    }
}

/* .text */
void** text(void** rcx, void** rdx, void** r8, void** r9) {
    void** rdi5;
    void** rsi6;
    void** ecx7;
    uint32_t r12d8;
    int64_t v9;
    void** rax10;
    void** rdx11;
    void*** r11_12;
    void*** rcx13;
    void** rbx14;
    void** r9_15;
    int64_t rax16;
    void*** rdi17;
    int64_t rbp18;
    void** eax19;
    uint16_t r10d20;
    void** r8_21;
    uint32_t eax22;
    void*** r11_23;
    void** r8d24;
    uint32_t eax25;
    int64_t rax26;
    int64_t v27;
    void** rax28;
    void** rdx29;
    void** r8_30;
    void** rcx31;
    int64_t v32;

    rdi5 = rcx;
    rsi6 = rdx;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx + 20)) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 20))) {
        rsi6 = rcx;
        rdi5 = rdx;
    }
    ecx7 = *reinterpret_cast<void***>(rsi6 + 8);
    r12d8 = 0;
    rax10 = __Balloc_D2A(ecx7, rdx, r8, r9, v9);
    rdx11 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rsi6 + 20))));
    r11_12 = reinterpret_cast<void***>(rdi5 + 24);
    rcx13 = reinterpret_cast<void***>(rax10 + 24);
    rbx14 = rax10;
    r9_15 = rsi6 + 24;
    *reinterpret_cast<void***>(rax10 + 20) = rdx11;
    rax16 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdi5 + 20));
    rdi17 = rcx13 + rax16 * 4;
    rbp18 = rax16;
    do {
        eax19 = *reinterpret_cast<void***>(r9_15);
        rcx13 = rcx13 + 4;
        r9_15 = r9_15 + 4;
        r11_12 = r11_12 + 4;
        r10d20 = *reinterpret_cast<uint16_t*>(r11_12 + 0xfffffffffffffffc);
        *reinterpret_cast<uint32_t*>(&r8_21) = *reinterpret_cast<uint16_t*>(&eax19) + r10d20 + r12d8;
        *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
        *reinterpret_cast<uint16_t*>(rcx13 + 0xfffffffffffffffc) = *reinterpret_cast<uint16_t*>(&r8_21);
        eax22 = (reinterpret_cast<unsigned char>(eax19) >> 16) + (r10d20 >> 16) + (*reinterpret_cast<uint32_t*>(&r8_21) >> 16);
        *reinterpret_cast<uint16_t*>(rcx13 + 0xfffffffffffffffe) = *reinterpret_cast<uint16_t*>(&eax22);
        r12d8 = eax22 >> 16;
    } while (reinterpret_cast<uint64_t>(rdi17) > reinterpret_cast<uint64_t>(rcx13));
    r11_23 = rdi17 + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi6 + 20)) - *reinterpret_cast<uint32_t*>(&rbp18)) * 4;
    if (reinterpret_cast<uint64_t>(rcx13) < reinterpret_cast<uint64_t>(r11_23)) {
        do {
            r8d24 = *reinterpret_cast<void***>(r9_15);
            rcx13 = rcx13 + 4;
            r9_15 = r9_15 + 4;
            eax25 = *reinterpret_cast<uint16_t*>(&r8d24) + r12d8;
            *reinterpret_cast<uint16_t*>(rcx13 + 0xfffffffffffffffc) = *reinterpret_cast<uint16_t*>(&eax25);
            *reinterpret_cast<uint32_t*>(&r8_21) = (reinterpret_cast<unsigned char>(r8d24) >> 16) + (eax25 >> 16);
            *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
            *reinterpret_cast<uint16_t*>(rcx13 + 0xfffffffffffffffe) = *reinterpret_cast<uint16_t*>(&r8_21);
            r12d8 = *reinterpret_cast<uint32_t*>(&r8_21) >> 16;
        } while (reinterpret_cast<uint64_t>(r11_23) > reinterpret_cast<uint64_t>(rcx13));
    }
    if (r12d8) {
        if (rdx11 == *reinterpret_cast<void***>(rbx14 + 12)) {
            *reinterpret_cast<void***>(&rax26) = *reinterpret_cast<void***>(rbx14 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
            rax28 = __Balloc_D2A(static_cast<uint32_t>(rax26 + 1), rdx11, r8_21, r9_15, v27);
            rdx29 = rbx14 + 16;
            r8_30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx14 + 20)) * 4 + 8);
            memcpy(rax28 + 16, rdx29, r8_30);
            rcx31 = rbx14;
            rbx14 = rax28;
            __Bfree_D2A(rcx31, rdx29, r8_30, r9_15, v32, rcx31);
            rdx11 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rax28 + 20))));
        }
        *reinterpret_cast<void***>(rbx14 + 20) = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rdx11 + 1)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx14 + reinterpret_cast<unsigned char>(rdx11) * 4) + 24) = 1;
    }
    return rbx14;
}

uint64_t __b2d_D2A(void** rcx, uint32_t* rdx, void** r8d);

uint32_t __ratio_D2A(void** rcx, void** rdx, void** r8d, void** r9) {
    void* rsp5;
    uint32_t eax6;
    uint32_t v7;
    uint32_t v8;
    int64_t rax9;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 56);
    __b2d_D2A(rcx, reinterpret_cast<int64_t>(rsp5) + 40, r8d);
    __asm__("movd rbx, xmm0");
    __asm__("movd rsi, xmm0");
    __b2d_D2A(rdx, reinterpret_cast<int64_t>(rsp5) - 8 + 8 + 44, r8d);
    __asm__("movd rdx, xmm0");
    __asm__("movd rcx, xmm0");
    eax6 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 20)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 20)) << 5) + v7 - v8;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax6) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax6 == 0)) {
        __asm__("movd rdx, xmm0");
        *reinterpret_cast<uint32_t*>(&rax9) = eax6 << 20;
    } else {
        *reinterpret_cast<uint32_t*>(&rax9) = eax6 << 20;
    }
    __asm__("movd xmm0, rbx");
    __asm__("movd xmm1, rdx");
    __asm__("divsd xmm0, xmm1");
    return *reinterpret_cast<uint32_t*>(&rax9);
}

void** __set_ones_D2A(void** rcx, void** rdx, void** r8, void** r9, ...) {
    void** rax5;
    void** ebx6;
    int64_t v7;
    int64_t v8;
    void*** r8_9;
    void** ecx10;
    uint32_t edx11;
    void*** rcx12;
    void** ecx13;
    uint32_t ecx14;

    rax5 = rcx;
    ebx6 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<uint64_t>(rdx + 31)) >> 5);
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx + 8)) < reinterpret_cast<signed char>(ebx6)) {
        __Bfree_D2A(rcx, rdx, r8, r9, v7);
        rax5 = __Balloc_D2A(ebx6, rdx, r8, r9, v8);
        *reinterpret_cast<uint32_t*>(&rdx) = *reinterpret_cast<uint32_t*>(&rdx);
    }
    r8_9 = reinterpret_cast<void***>(rax5 + 24);
    ecx10 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(&rdx) >> 5);
    edx11 = *reinterpret_cast<uint32_t*>(&rdx) & 31;
    if (!edx11) {
        *reinterpret_cast<void***>(rax5 + 20) = ecx10;
        rcx12 = r8_9 + reinterpret_cast<int32_t>(ecx10) * 4;
        if (reinterpret_cast<uint64_t>(rcx12) <= reinterpret_cast<uint64_t>(r8_9)) {
            return rax5;
        }
    } else {
        ecx13 = ecx10 + 1;
        *reinterpret_cast<void***>(rax5 + 20) = ecx13;
        rcx12 = r8_9 + reinterpret_cast<int32_t>(ecx13) * 4;
        if (reinterpret_cast<uint64_t>(rcx12) <= reinterpret_cast<uint64_t>(r8_9)) 
            goto addr_40cdc8_7;
    }
    do {
        r8_9 = r8_9 + 4;
        *reinterpret_cast<uint16_t*>(r8_9 + 0xfffffffffffffffc) = reinterpret_cast<uint16_t>(0xffffffff);
    } while (reinterpret_cast<uint64_t>(rcx12) > reinterpret_cast<uint64_t>(r8_9));
    if (!edx11) {
        addr_40cdd3_10:
        return rax5;
    } else {
        addr_40cdc8_7:
        ecx14 = 32 - edx11;
        *reinterpret_cast<uint16_t*>(r8_9 + 0xfffffffffffffffc) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(r8_9 + 0xfffffffffffffffc) >> *reinterpret_cast<signed char*>(&ecx14));
        goto addr_40cdd3_10;
    }
}

int64_t WideCharToMultiByte = 0x3dcd7b8;

/* .text */
int32_t text(signed char* rcx, uint16_t dx, int32_t r8d, int32_t r9d) {
    int64_t rcx5;
    int32_t eax6;
    int32_t* rax7;

    if (r8d) {
        *reinterpret_cast<int32_t*>(&rcx5) = r8d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = reinterpret_cast<int32_t>(WideCharToMultiByte(rcx5));
        if (!eax6 || !1) {
            addr_40eb4a_3:
            rax7 = _errno();
            *rax7 = 42;
            return -1;
        } else {
            addr_40eaff_4:
            return eax6;
        }
    } else {
        if (dx > 0xff) 
            goto addr_40eb4a_3;
        *rcx = *reinterpret_cast<signed char*>(&dx);
        eax6 = 1;
        goto addr_40eaff_4;
    }
}

/* .bss */
int64_t bss;

int64_t __setusermatherr = 0x3dcd85e;

void __mingw_setusermatherr(int64_t rcx) {
    bss = rcx;
    goto __setusermatherr;
}

int64_t __getmainargs = 0x3dcd812;

void __getmainargs(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    goto __getmainargs;
}

struct s32 {
    signed char[32] pad32;
    void** f32;
};

struct s33 {
    signed char[40] pad40;
    int64_t f40;
};

struct s34 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int64_t f16;
};

void _pei386_runtime_relocator(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    void* rbp6;
    int32_t ebx7;
    int64_t rax8;
    struct s8* r12_9;
    struct s8* rsi10;
    struct s32* rsp11;
    uint64_t rax12;
    int32_t edx13;
    struct s8* r14_14;
    struct s2* r13_15;
    void*** rdi16;
    struct s8* r12_17;
    void* rcx18;
    int64_t* rsp19;
    void** rdx20;
    int64_t* rsp21;
    struct s33* rsp22;
    void** eax23;
    int64_t* rsp24;
    int64_t rax25;
    int64_t* rsp26;
    int64_t* rsp27;
    struct s33* rsp28;
    int64_t* rsp29;
    int64_t rax30;
    int64_t* rsp31;
    int64_t* rsp32;
    int64_t* rsp33;
    struct s2* r13_34;
    struct s8* rsi35;
    void*** r14_36;
    void* rcx37;
    void* rax38;
    void** rcx39;
    int64_t r8_40;
    int64_t rdx41;
    int64_t r8_42;
    int64_t* rsp43;
    int64_t* rsp44;
    int64_t r8_45;
    int64_t* rsp46;
    int64_t* rsp47;
    int32_t eax48;
    void* rsi49;
    int64_t r12_50;
    struct s4* rax51;
    struct s34* rax52;
    int64_t rdx53;
    int64_t rcx54;
    int64_t* rsp55;
    int1_t less56;
    int64_t* rsp57;
    int64_t* rsp58;
    int64_t* rsp59;
    int64_t rax60;
    int64_t* rsp61;
    int64_t* rsp62;
    int64_t* rsp63;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 56);
    rbp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 0x80);
    ebx7 = bss;
    if (ebx7) 
        goto addr_4034c2_2;
    bss = 1;
    __mingw_GetSectionCount(rcx, rdx, r8);
    rax8 = ___chkstk_ms(rcx);
    r12_9 = refptr___RUNTIME_PSEUDO_RELOC_LIST_END__;
    maxSections = 0;
    rsi10 = refptr___RUNTIME_PSEUDO_RELOC_LIST__;
    rsp11 = reinterpret_cast<struct s32*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 - rax8);
    the_secs = reinterpret_cast<struct s4*>(&rsp11->f32);
    rax12 = reinterpret_cast<uint64_t>(r12_9) - reinterpret_cast<uint64_t>(rsi10);
    if (reinterpret_cast<int64_t>(rax12) <= reinterpret_cast<int64_t>(7)) 
        goto addr_4034c2_2;
    edx13 = rsi10->f0;
    if (reinterpret_cast<int64_t>(rax12) > reinterpret_cast<int64_t>(11)) {
        if (edx13) 
            goto addr_403540_6;
        if (rsi10->f4) 
            goto addr_403540_6;
        if (rsi10->f8) 
            goto addr_403613_9;
        edx13 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi10) + 12);
        rsi10 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi10) + 12);
    }
    if (edx13 || rsi10->f4) {
        addr_403540_6:
        if (reinterpret_cast<uint64_t>(rsi10) >= reinterpret_cast<uint64_t>(r12_9)) {
            addr_4034c2_2:
            return;
        } else {
            r14_14 = reinterpret_cast<struct s8*>(&rsi10->f8);
            r13_15 = refptr___image_base__;
            rdi16 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp6) - 88);
            r12_17 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi10) + (reinterpret_cast<uint64_t>(r12_9) + 7 - reinterpret_cast<uint64_t>(r14_14) >> 3) * 8 + 8);
            while (*reinterpret_cast<int32_t*>(&rcx18) = rsi10->f4, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0, rsi10 = r14_14, rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8), *rsp19 = 0x403592, text(reinterpret_cast<int64_t>(rcx18) + reinterpret_cast<uint64_t>(r13_15), rdi16, 4, r9), rsp11 = reinterpret_cast<struct s32*>(rsp19 + 1), r14_14 != r12_17) {
                r14_14 = reinterpret_cast<struct s8*>(&r14_14->f8);
            }
        }
    } else {
        addr_403613_9:
        *reinterpret_cast<unsigned char*>(&rdx20) = rsi10->f8;
        *reinterpret_cast<int32_t*>(&rdx20 + 4) = 0;
        if (*reinterpret_cast<unsigned char*>(&rdx20) != 1) {
            addr_40374e_15:
            rsp21 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
            *rsp21 = 0x40375a;
            text_unlikely("  Unknown pseudo relocation protocol version %d.\n", rdx20, r8, r9);
            rsp22 = reinterpret_cast<struct s33*>(rsp21 + 1 - 5);
            eax23 = g4125e0;
            if (reinterpret_cast<unsigned char>(eax23) > reinterpret_cast<unsigned char>(0xc0000091)) {
                if (eax23 == 0xc0000094) {
                    rsp24 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp22) - 8);
                    *rsp24 = 0x40389c;
                    rax25 = signal(8);
                    rsp22 = reinterpret_cast<struct s33*>(rsp24 + 1);
                    if (rax25 != 1) {
                        addr_403801_18:
                        if (rax25) {
                            rsp26 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp22) - 8);
                            *rsp26 = 0x40380d;
                            rax25(8);
                            goto (rsp26 + 1)[5];
                        }
                    } else {
                        rsp27 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp22) - 8);
                        *rsp27 = 0x4038b5;
                        signal(8, 8);
                        rsp28 = reinterpret_cast<struct s33*>(rsp27 + 1);
                        goto addr_4037c3_21;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(eax23) > reinterpret_cast<unsigned char>(0xc0000094)) {
                        if (eax23 == 0xc0000095) {
                            addr_403884_24:
                            goto rsp22->f40;
                        } else {
                            if (!reinterpret_cast<int1_t>(eax23 == 0xc0000096)) {
                                addr_40385e_26:
                                goto rsp22->f40;
                            } else {
                                addr_403822_27:
                                rsp29 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp22) - 8);
                                *rsp29 = 0x40382e;
                                rax30 = signal(4);
                                rsp28 = reinterpret_cast<struct s33*>(rsp29 + 1);
                                if (rax30 == 1) {
                                    rsp31 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp28) - 8);
                                    *rsp31 = 0x4038cf;
                                    signal(4, 4);
                                    rsp28 = reinterpret_cast<struct s33*>(rsp31 + 1);
                                    goto addr_4037c3_21;
                                } else {
                                    if (rax30) {
                                        rsp32 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp28) - 8);
                                        *rsp32 = 0x403848;
                                        rax30(4);
                                        goto (rsp32 + 1)[5];
                                    }
                                }
                            }
                        }
                    } else {
                        if (eax23 == 0xc0000092) 
                            goto addr_403884_24;
                        if (!reinterpret_cast<int1_t>(eax23 == 0xc0000093)) 
                            goto addr_40385e_26; else 
                            goto addr_4037ef_33;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(eax23) >= reinterpret_cast<unsigned char>(0xc000008d)) {
                    addr_4037ef_33:
                    rsp33 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp22) - 8);
                    *rsp33 = 0x4037fb;
                    rax25 = signal(8);
                    rsp22 = reinterpret_cast<struct s33*>(rsp33 + 1);
                    if (rax25 == 1) 
                        goto addr_403870_35; else 
                        goto addr_403801_18;
                } else {
                    if (eax23 == 0xc0000008) 
                        goto addr_403884_24;
                    if (reinterpret_cast<unsigned char>(eax23) > reinterpret_cast<unsigned char>(0xc0000008)) 
                        goto addr_403850_38; else 
                        goto addr_403785_39;
                }
            }
        } else {
            r13_34 = refptr___image_base__;
            rsi35 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi10) + 12);
            r14_36 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp6) - 88);
            if (reinterpret_cast<uint64_t>(rsi35) >= reinterpret_cast<uint64_t>(r12_9)) {
                goto addr_4034c2_2;
            }
            do {
                *reinterpret_cast<int32_t*>(&rcx37) = rsi35->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rax38) = rsi35->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rdx20) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(rsi35->f8));
                *reinterpret_cast<int32_t*>(&rdx20 + 4) = 0;
                rcx39 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rcx37) + reinterpret_cast<uint64_t>(r13_34));
                r9 = *reinterpret_cast<void***>(reinterpret_cast<int64_t>(rax38) + reinterpret_cast<uint64_t>(r13_34));
                if (*reinterpret_cast<unsigned char*>(&rdx20) != 16) {
                    if (*reinterpret_cast<unsigned char*>(&rdx20) <= reinterpret_cast<unsigned char>(16)) {
                        if (*reinterpret_cast<unsigned char*>(&rdx20) != 8) 
                            goto addr_40373a_45;
                        *reinterpret_cast<uint32_t*>(&r8_40) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx39));
                        if (*reinterpret_cast<signed char*>(&r8_40) >= 0) 
                            goto addr_403720_47;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(&rdx20) == 32) {
                            *reinterpret_cast<void***>(&rdx41) = *reinterpret_cast<void***>(rcx39);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = 0;
                            r8_42 = rdx41;
                            if (*reinterpret_cast<int32_t*>(&r8_42) >= 0) {
                            }
                            *reinterpret_cast<int32_t*>(&r8) = 4;
                            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                            rsp43 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
                            *rsp43 = 0x4036fa;
                            text(rcx39, r14_36, 4, r9);
                            rsp11 = reinterpret_cast<struct s32*>(rsp43 + 1);
                            continue;
                        } else {
                            if (*reinterpret_cast<unsigned char*>(&rdx20) != 64) 
                                goto addr_40373a_45;
                            *reinterpret_cast<int32_t*>(&r8) = 8;
                            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                            rsp44 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
                            *rsp44 = 0x403678;
                            text(rcx39, r14_36, 8, r9);
                            rsp11 = reinterpret_cast<struct s32*>(rsp44 + 1);
                            continue;
                        }
                    }
                } else {
                    *reinterpret_cast<uint32_t*>(&r8_45) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx39));
                    if (*reinterpret_cast<int16_t*>(&r8_45) < 0) {
                    }
                    *reinterpret_cast<int32_t*>(&r8) = 2;
                    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                    rsp46 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
                    *rsp46 = 0x4036cd;
                    text(rcx39, r14_36, 2, r9);
                    rsp11 = reinterpret_cast<struct s32*>(rsp46 + 1);
                    continue;
                }
                addr_403720_47:
                *reinterpret_cast<int32_t*>(&r8) = 1;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
                *rsp47 = 0x403735;
                text(rcx39, r14_36, 1, r9);
                rsp11 = reinterpret_cast<struct s32*>(rsp47 + 1);
                rsi35 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi35) + 12);
            } while (reinterpret_cast<uint64_t>(rsi35) < reinterpret_cast<uint64_t>(r12_9));
        }
    }
    eax48 = maxSections;
    *reinterpret_cast<int32_t*>(&rsi49) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi49) + 4) = 0;
    r12_50 = VirtualProtect;
    if (!(reinterpret_cast<uint1_t>(eax48 < 0) | reinterpret_cast<uint1_t>(eax48 == 0))) {
        do {
            rax51 = the_secs;
            rax52 = reinterpret_cast<struct s34*>(reinterpret_cast<uint64_t>(rax51) + reinterpret_cast<uint64_t>(rsi49));
            if (rax52->f0) {
                rdx53 = rax52->f16;
                rcx54 = rax52->f8;
                rsp55 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
                *rsp55 = 0x4035d0;
                r12_50(rcx54, rdx53);
                rsp11 = reinterpret_cast<struct s32*>(rsp55 + 1);
            }
            ++ebx7;
            rsi49 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi49) + 40);
            less56 = ebx7 < maxSections;
        } while (less56);
        goto addr_4034c2_2;
    }
    addr_4037c3_21:
    goto rsp28->f40;
    addr_403870_35:
    rsp57 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp22) - 8);
    *rsp57 = 0x40387f;
    signal(8, 8);
    rsp58 = rsp57 + 1 - 1;
    *rsp58 = 0x403884;
    text(8, 1, 8, 1);
    rsp22 = reinterpret_cast<struct s33*>(rsp58 + 1);
    goto addr_403884_24;
    addr_403850_38:
    if (eax23 == 0xc000001d) 
        goto addr_403822_27;
    if (eax23 == 0xc000008c) 
        goto addr_403884_24; else 
        goto addr_40385e_26;
    addr_403785_39:
    if (eax23 == 0x80000002) 
        goto addr_403884_24;
    if (!reinterpret_cast<int1_t>(eax23 == 0xc0000005)) 
        goto addr_40385e_26;
    rsp59 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp22) - 8);
    *rsp59 = 0x4037a7;
    rax60 = signal(11);
    rsp28 = reinterpret_cast<struct s33*>(rsp59 + 1);
    if (rax60 != 1) 
        goto addr_4037b1_68;
    rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp28) - 8);
    *rsp61 = 0x4038ef;
    signal(11, 11);
    rsp28 = reinterpret_cast<struct s33*>(rsp61 + 1);
    goto addr_4037c3_21;
    addr_4037b1_68:
    if (!rax60) {
        goto addr_4037c3_21;
    } else {
        rsp62 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp28) - 8);
        *rsp62 = 0x4037c1;
        rax60(11);
        rsp28 = reinterpret_cast<struct s33*>(rsp62 + 1);
        goto addr_4037c3_21;
    }
    addr_40373a_45:
    rsp63 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp11) - 8);
    *rsp63 = 0x40374e;
    text_unlikely("  Unknown pseudo relocation bit size %d.\n", rdx20, r8, r9);
    rsp11 = reinterpret_cast<struct s32*>(rsp63 + 1);
    goto addr_40374e_15;
}

/* was_here.95013 */
int32_t was_here_95013;

struct s35 {
    unsigned char f0;
    signed char[3] pad4;
    int32_t f4;
};

int64_t RtlAddFunctionTable = 0x3dcd6da;

int64_t __mingw_init_ehandler(void** rcx) {
    struct s2* rax2;
    struct s2* rbp3;
    int64_t rax4;
    unsigned char rax5;
    unsigned char* rbx6;
    int64_t rcx7;
    int64_t rsi8;
    unsigned char* rdi9;
    int64_t rcx10;
    struct s35* rdi11;
    uint64_t r12_12;
    struct s35* rdi13;
    struct s13* rax14;
    int32_t ecx15;
    int32_t ecx16;
    struct s35* rax17;
    void* rax18;
    int64_t rdx19;

    rax2 = _GetPEImageBase(rcx);
    rbp3 = rax2;
    *reinterpret_cast<int32_t*>(&rax4) = was_here_95013;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax4) || !rbp3) {
        addr_403941_2:
        return rax4;
    } else {
        was_here_95013 = 1;
        rax5 = _FindPESectionByName(".pdata");
        if (rax5) 
            goto addr_40393c_4;
        rbx6 = reinterpret_cast<unsigned char*>(0x41cb9e0);
        *reinterpret_cast<int32_t*>(&rcx7) = 48;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
        rdi9 = reinterpret_cast<unsigned char*>(0x41cb9e0);
        while (rcx7) {
            --rcx7;
            *rdi9 = rax5;
            rdi9 = rdi9 + 8;
            rsi8 = rsi8 + 8;
        }
        *reinterpret_cast<int32_t*>(&rcx10) = 32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        rdi11 = reinterpret_cast<struct s35*>(0x41cb8e0);
        while (rcx10) {
            --rcx10;
            rdi11->f0 = rax5;
            ++rdi11;
            rsi8 = rsi8 + 8;
        }
        r12_12 = 0x403760 - reinterpret_cast<uint64_t>(rbp3);
        rdi13 = reinterpret_cast<struct s35*>(0x41cb8e0);
        do {
            rax14 = _FindPESectionExec(rsi8);
            if (!rax14) 
                break;
            rdi13->f0 = 9;
            ++rsi8;
            rbx6 = rbx6 + 12;
            rdi13->f4 = *reinterpret_cast<int32_t*>(&r12_12);
            ecx15 = rax14->f12;
            *reinterpret_cast<int32_t*>(rbx6 - 12) = ecx15;
            ecx16 = ecx15 + rax14->f8;
            rax17 = rdi13;
            ++rdi13;
            rax18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax17) - reinterpret_cast<uint64_t>(rbp3));
            *reinterpret_cast<int32_t*>(rbx6 - 4) = *reinterpret_cast<int32_t*>(&rax18);
            *reinterpret_cast<int32_t*>(rbx6 - 8) = ecx16;
        } while (rsi8 != 32);
        goto addr_4039e5_14;
    }
    *reinterpret_cast<int32_t*>(&rdx19) = *reinterpret_cast<int32_t*>(&rsi8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    if (!rsi8) {
        addr_40393c_4:
        *reinterpret_cast<int32_t*>(&rax4) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        goto addr_403941_2;
    }
    addr_4039d0_17:
    RtlAddFunctionTable(0x41cb9e0, rdx19, rbp3);
    goto addr_40393c_4;
    addr_4039e5_14:
    *reinterpret_cast<int32_t*>(&rdx19) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    goto addr_4039d0_17;
}

/* .bss */
int64_t bss;

int64_t _set_invalid_parameter_handler(int64_t rcx) {
    int64_t tmp64_2;

    tmp64_2 = bss;
    bss = rcx;
    return tmp64_2;
}

/* .text */
void text(int64_t rcx, void** rdx, ...) {
    __asm__("fninit ");
    return;
}

/* .refptr.__imp__acmdln */
unsigned char*** refptr___imp__acmdln = reinterpret_cast<unsigned char***>(0x41cd418);

/* .text */
unsigned char** text(int64_t rcx) {
    unsigned char*** rax2;

    rax2 = refptr___imp__acmdln;
    return *rax2;
}

/* .bss */
int32_t bss;

/* .refptr.__CTOR_LIST__ */
void*** refptr___CTOR_LIST__ = reinterpret_cast<void***>(0x410240);

/* .text */
void text();

int64_t __main(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t rax5;
    void*** rcx6;
    void** rdx7;
    int64_t rax8;
    void* rdx9;
    uint64_t rax10;
    void*** rbx11;
    void*** rsi12;
    int64_t rax13;
    int64_t rax14;

    *reinterpret_cast<int32_t*>(&rax5) = bss;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax5)) {
        return rax5;
    }
    bss = 1;
    rcx6 = refptr___CTOR_LIST__;
    rdx7 = *rcx6;
    *reinterpret_cast<int32_t*>(&rax8) = *reinterpret_cast<int32_t*>(&rdx7);
    if (*reinterpret_cast<int32_t*>(&rdx7) != -1) 
        goto addr_402e07_5;
    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&r8) = static_cast<int32_t>(rax8 + 1), *reinterpret_cast<int32_t*>(&r8 + 4) = 0, rdx7 = r8, !!rcx6[reinterpret_cast<unsigned char>(r8) * 8]) {
        *reinterpret_cast<int32_t*>(&rax8) = *reinterpret_cast<int32_t*>(&rdx7);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    }
    addr_402e07_5:
    if (*reinterpret_cast<int32_t*>(&rax8)) {
        *reinterpret_cast<int32_t*>(&rdx9) = *reinterpret_cast<int32_t*>(&rax8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rax10) = *reinterpret_cast<int32_t*>(&rax8) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        rbx11 = rcx6 + reinterpret_cast<int64_t>(rdx9) * 8;
        rdx7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdx9) - rax10);
        rsi12 = rcx6 + reinterpret_cast<unsigned char>(rdx7) * 8 - 8;
        do {
            *rbx11();
            rbx11 = rbx11 - 8;
        } while (rbx11 != rsi12);
    }
    rax13 = _onexit(text, rdx7, r8, r9);
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(-static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax13 == 0))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
    return rax14;
}

void** fopen(int64_t rcx, int64_t rdx, void** r8);

int32_t tot;

void fclose(void** rcx, void** rdx, void** r8);

void** fin;

/* calc_xt(int const*, int const*) */
int32_t _Z7calc_xtPKiS0_(int32_t* rcx, void* rdx, void** r8, void** r9);

int64_t main(void** rcx, void** rdx, void** r8, void** r9) {
    void* rbp5;
    void** rax6;
    void** v7;
    void** r8_8;
    int32_t eax9;
    void** rdx10;
    int32_t v11;
    int32_t eax12;
    int32_t v13;
    int32_t v14;
    int64_t rdx15;
    int64_t rax16;
    int32_t v17;
    int32_t eax18;
    void** rax19;
    void** rax20;
    void** r8_21;
    int32_t v22;
    void** rax23;
    int32_t v24;
    void** rax25;
    int32_t v26;
    void** rax27;
    void** rax28;
    int32_t eax29;
    void** rdx30;
    int64_t rax31;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x200 + 0x80);
    __main(rcx, rdx, r8, r9);
    rax6 = fopen("..\\automation_xt2.txt", "r", r8);
    v7 = rax6;
    r8_8 = reinterpret_cast<void**>(0x41cb2a0);
    _Z6fscanfP6_iobufPKcz(v7, "%d", 0x41cb2a0, r9);
    eax9 = tot;
    *reinterpret_cast<int32_t*>(&rdx10) = eax9;
    *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0;
    _Z6printfPKcz("tot:%d\n", rdx10, 0x41cb2a0, r9);
    v11 = 1;
    while (eax12 = tot, v11 <= eax12) {
        v13 = 0;
        while (v13 <= 4) {
            v14 = 0;
            while (v14 <= 9) {
                rdx15 = v13;
                rax16 = (rdx15 << 2) + rdx15;
                r8_8 = reinterpret_cast<void**>((rax16 + rax16 + v11 * 50 + v14) * 4 + 0x3eae060);
                rdx10 = reinterpret_cast<void**>("%d");
                _Z6fscanfP6_iobufPKcz(v7, "%d", r8_8, r9);
                ++v14;
            }
            ++v13;
        }
        ++v11;
    }
    v17 = 1;
    while (eax18 = tot, v17 <= eax18) {
        r8_8 = reinterpret_cast<void**>(v17 * 4 + 0x41bb460);
        rdx10 = reinterpret_cast<void**>("%d");
        _Z6fscanfP6_iobufPKcz(v7, "%d", r8_8, r9);
        ++v17;
    }
    fclose(v7, rdx10, r8_8);
    rax19 = fopen("input.txt", "r", r8_8);
    fin = rax19;
    rax20 = fin;
    r8_21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0x150);
    _Z6fscanfP6_iobufPKcz(rax20, "%d", r8_21, r9);
    v22 = 0;
    while (v22 <= 33) {
        rax23 = fin;
        r8_21 = reinterpret_cast<void**>((static_cast<int64_t>(v22) << 2) + (reinterpret_cast<int64_t>(rbp5) + 0xc0));
        _Z6fscanfP6_iobufPKcz(rax23, "%d", r8_21, r9);
        ++v22;
    }
    v24 = 0;
    while (v24 <= 33) {
        rax25 = fin;
        r8_21 = reinterpret_cast<void**>((static_cast<int64_t>(v24) << 2) + (reinterpret_cast<int64_t>(rbp5) + 48));
        _Z6fscanfP6_iobufPKcz(rax25, "%d", r8_21, r9);
        ++v24;
    }
    v26 = 0;
    while (v26 <= 33) {
        rax27 = fin;
        r8_21 = reinterpret_cast<void**>((static_cast<int64_t>(v26) << 2) + (reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffffa0));
        _Z6fscanfP6_iobufPKcz(rax27, "%d", r8_21, r9);
        ++v26;
    }
    rax28 = fin;
    fclose(rax28, "%d", r8_21);
    eax29 = _Z7calc_xtPKiS0_(reinterpret_cast<int64_t>(rbp5) + 0xc0, reinterpret_cast<int64_t>(rbp5) + 48, r8_21, r9);
    *reinterpret_cast<int32_t*>(&rdx30) = eax29;
    *reinterpret_cast<int32_t*>(&rdx30 + 4) = 0;
    _Z6printfPKcz("xt:%d\n", rdx30, r8_21, r9);
    *reinterpret_cast<int32_t*>(&rax31) = eax29;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = 0;
    return rax31;
}

/* .text */
void text(void** rcx, void** rdx, void** r8, void** r9);

int32_t __mingw_pformat(int32_t ecx, void** rdx, int32_t r8d, void** r9);

void _unlock_file(void** rcx, void** rdx, void** r8, void** r9);

/* .text */
int32_t text(void** rcx, void** rdx, void** r8, void** r9) {
    int32_t eax5;

    text(rcx, rdx, r8, r9);
    eax5 = __mingw_pformat(0x6000, rcx, 0, rdx);
    _unlock_file(rcx, rcx, 0, rdx);
    return eax5;
}

/* calc_xt(int const*, int const*) */
int32_t _Z7calc_xtPKiS0_(int32_t* rcx, void* rdx, void** r8, void** r9) {
    int32_t* v5;
    int32_t v6;
    int32_t v7;
    int32_t eax8;
    int32_t eax9;
    int64_t rdx10;
    int64_t rax11;

    v5 = rcx;
    v6 = 7;
    v7 = 0;
    while (v7 <= 33) {
        if (v7 > 27) {
            eax8 = 9;
        } else {
            eax9 = (__intrinsic() >> 1) - (v7 >> 31);
            eax8 = v7 - ((eax9 << 3) + eax9);
        }
        rdx10 = v5[v7];
        rax11 = (rdx10 << 2) + rdx10;
        v6 = *reinterpret_cast<int32_t*>((rax11 + rax11 + v6 * 50 + eax8) * 4 + 0x3eae060);
        if (v6 <= 0) {
            _assert("ha_cursor>0", "D:\\workspace\\mahjong_old\\calc_xt\\main.cpp", 0xd4, r9);
        }
        ++v7;
    }
    return *reinterpret_cast<int32_t*>(v6 * 4 + 0x41bb460);
}

void** memset(int64_t rcx);

struct s36 {
    signed char[32] pad32;
    void** f32;
};

int64_t __mingw_sformat(void** rcx, void** rdx, void** r8);

int32_t __mingw_vfscanf(void** rcx, void** rdx, void** r8) {
    int64_t rax4;
    void* rsp5;
    int64_t* rsp6;
    void** rax7;
    struct s36* rsp8;
    int64_t* rsp9;

    rax4 = ___chkstk_ms(rcx);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 + 8 - rax4);
    rsp6 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp5) - 8);
    *rsp6 = 0x407a1e;
    rax7 = memset(reinterpret_cast<int64_t>(rsp5) + 32);
    rsp8 = reinterpret_cast<struct s36*>(rsp6 + 1);
    rsp8->f32 = rcx;
    rsp9 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp8) - 8);
    *rsp9 = 0x407a31;
    __mingw_sformat(rax7, rdx, r8);
    goto (rsp9 + 1 + 0x208 + 1 + 1)[1];
}

int64_t fclose = 0x3dcd908;

void fclose(void** rcx, void** rdx, void** r8) {
    goto fclose;
}

int64_t fopen = 0x3dcd912;

void** fopen(int64_t rcx, int64_t rdx, void** r8) {
    goto fopen;
}

int64_t _onexit = 0x3dcd8c4;

int64_t _onexit(int64_t rcx, void** rdx, void** r8, void** r9) {
    goto _onexit;
}

int32_t __mingwthr_cs_init;

int64_t DeleteCriticalSection = 0x3dcd590;

int64_t __mingw_TLScallback(int64_t rcx, void** rdx, void** r8, void** r9) {
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    void** rcx8;
    void** rbx9;
    int64_t v10;
    int32_t eax11;

    if (*reinterpret_cast<uint32_t*>(&rdx) == 1) {
        eax5 = __mingwthr_cs_init;
        if (!eax5) {
            InitializeCriticalSection(0x41cbb80);
        }
        __mingwthr_cs_init = 1;
        return 1;
    } else {
        if (*reinterpret_cast<uint32_t*>(&rdx) < 1) {
            eax6 = __mingwthr_cs_init;
            if (eax6) {
                text();
            }
            eax7 = __mingwthr_cs_init;
            if (eax7 == 1) {
                rcx8 = bss;
                if (rcx8) {
                    do {
                        rbx9 = *reinterpret_cast<void***>(rcx8 + 16);
                        free(rcx8, rdx, r8, r9, v10);
                        rcx8 = rbx9;
                    } while (rbx9);
                }
                bss = reinterpret_cast<void**>(0);
                __mingwthr_cs_init = 0;
                DeleteCriticalSection(0x41cbb80);
            }
        } else {
            if (*reinterpret_cast<uint32_t*>(&rdx) == 2) {
                text(rcx, rdx);
            } else {
                if (*reinterpret_cast<uint32_t*>(&rdx) == 3 && (eax11 = __mingwthr_cs_init, !!eax11)) {
                    text();
                }
            }
        }
        return 1;
    }
}

int64_t __iob_func = 0x3dcd82e;

void*** __iob_func() {
    goto __iob_func;
}

int64_t fwrite = 0x3dcd940;

void fwrite(int64_t rcx, void** rdx, void** r8, void** r9) {
    goto fwrite;
}

int64_t vfprintf = 0x3dcda0c;

void vfprintf(void** rcx, void** rdx, void** r8, void** r9) {
    goto vfprintf;
}

uint32_t __mingw_GetSectionCount(void** rcx, void** rdx, void** r8) {
    struct s2* rdx4;
    int32_t eax5;

    rdx4 = refptr___image_base__;
    if (rdx4->f0 != 0x5a4d || (eax5 = text(rdx4), eax5 == 0)) {
        return 0;
    } else {
        return static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(rdx4->f60 + reinterpret_cast<uint64_t>(rdx4) + 6));
    }
}

int64_t calloc = 0x3dcd8ee;

void** calloc(int64_t rcx, int64_t rdx) {
    goto calloc;
}

int64_t wcscpy = 0x3dcda18;

void wcscpy(void** rcx, int64_t rdx, int64_t r8) {
    goto wcscpy;
}

int64_t fwprintf = 0x3dcd934;

void fwprintf() {
    goto fwprintf;
}

int64_t raise = 0x3dcd9a8;

void raise(int64_t rcx, void** rdx, void** r8, void** r9) {
    goto raise;
}

int64_t _exit = 0x3dcd89e;

void _exit(int64_t rcx, void** rdx, void** r8, void** r9) {
    goto _exit;
}

void release_ptrs(void** rcx, void** rdx, void** r8, void** r9) {
    void** rdi5;
    void** rcx6;
    int64_t v7;
    void** rsi8;
    void** rbx9;
    void** rcx10;
    int64_t v11;
    int1_t below_or_equal12;
    void** rbx13;
    int64_t v14;

    rdi5 = rcx;
    rcx6 = *reinterpret_cast<void***>(rdx);
    free(rcx6, rdx, r8, r9, v7);
    rsi8 = *reinterpret_cast<void***>(rdi5);
    *reinterpret_cast<void***>(rdx) = reinterpret_cast<void**>(0);
    if (rsi8) {
        while (1) {
            *reinterpret_cast<int32_t*>(&rbx9) = 0;
            *reinterpret_cast<int32_t*>(&rbx9 + 4) = 0;
            if (*reinterpret_cast<void***>(rsi8)) {
                do {
                    rcx10 = **reinterpret_cast<void****>(reinterpret_cast<uint64_t>(rsi8 + reinterpret_cast<unsigned char>(rbx9) * 8) + 16);
                    free(rcx10, rdx, r8, r9, v11);
                    ++rbx9;
                    below_or_equal12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi8)) <= reinterpret_cast<unsigned char>(rbx9);
                    **reinterpret_cast<int64_t**>(reinterpret_cast<uint64_t>(rsi8 + reinterpret_cast<unsigned char>(rbx9) * 8) + 16) = 0;
                } while (!below_or_equal12);
            }
            rbx13 = *reinterpret_cast<void***>(rsi8 + 8);
            free(rsi8, rdx, r8, r9, v14);
            if (!rbx13) 
                break;
            rsi8 = rbx13;
        }
        *reinterpret_cast<void***>(rdi5) = reinterpret_cast<void**>(0);
    }
    return;
}

int64_t getc = 0x3dcd94a;

int64_t getc() {
    goto getc;
}

int32_t mbrlen(void** rcx, void** rdx, void** r8, void** r9) {
    void** rbx5;
    int32_t eax6;
    int64_t rax7;

    rbx5 = r8;
    ___mb_cur_max_func();
    ___lc_codepage_func();
    if (!rbx5) {
        rbx5 = reinterpret_cast<void**>(0x41cbbd0);
    }
    eax6 = text(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 + 62, rcx, rdx, rbx5);
    rax7 = eax6;
    return *reinterpret_cast<int32_t*>(&rax7);
}

/* .text */
uint64_t text(void** rcx, void*** rdx, int32_t r8d, void** r9, int64_t a5) {
    void** rbx6;
    void*** rbp7;
    int64_t rsi8;
    int32_t* rax9;
    uint64_t r15_10;
    int64_t rdi11;
    int32_t eax12;
    int32_t r14d13;
    int32_t eax14;
    uint32_t ecx15;
    int64_t r12_16;
    uint32_t ecx17;
    uint32_t r12d18;
    int64_t rcx19;
    int32_t eax20;
    int64_t rcx21;
    int32_t eax22;
    uint32_t eax23;
    uint32_t eax24;
    void** rbx25;
    int64_t r13_26;
    uint32_t eax27;
    uint32_t ecx28;
    int64_t rcx29;
    int32_t eax30;
    int64_t rcx31;
    int32_t eax32;
    uint64_t rax33;
    int32_t* rax34;

    rbx6 = rcx;
    rbp7 = rdx;
    rsi8 = r8d;
    if (rdx) {
        *rbp7 = rcx;
    }
    if (*reinterpret_cast<uint32_t*>(&rsi8) == 1 || *reinterpret_cast<uint32_t*>(&rsi8) > 36) {
        rax9 = _errno();
        *reinterpret_cast<int32_t*>(&r15_10) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = 0;
        *rax9 = 33;
        goto addr_4081ba_5;
    }
    while (*reinterpret_cast<uint32_t*>(&rdi11) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6)))), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0, eax12 = isspace(), r14d13 = eax12, !!eax12) {
        ++rbx6;
    }
    eax14 = static_cast<int32_t>(rdi11 - 43);
    ecx15 = *reinterpret_cast<uint32_t*>(&rdi11);
    if (!(*reinterpret_cast<unsigned char*>(&eax14) & 0xfd)) 
        goto addr_4081ee_9;
    addr_4081f6_10:
    if (!*reinterpret_cast<uint32_t*>(&rsi8)) {
        *reinterpret_cast<uint32_t*>(&rsi8) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
        if (*reinterpret_cast<signed char*>(&ecx15) != 48) {
            addr_408207_12:
            *reinterpret_cast<int32_t*>(&r12_16) = *reinterpret_cast<signed char*>(&ecx15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = 0;
            ecx17 = static_cast<uint32_t>(r12_16 - 48);
            if (ecx17 <= 9) {
                addr_408319_13:
                r12d18 = *reinterpret_cast<uint32_t*>(&rsi8);
            } else {
                *reinterpret_cast<int32_t*>(&rcx19) = *reinterpret_cast<int32_t*>(&r12_16);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
                eax20 = isupper(rcx19);
                if (!eax20) {
                    *reinterpret_cast<int32_t*>(&rcx21) = *reinterpret_cast<int32_t*>(&r12_16);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&r15_10) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = 0;
                    eax22 = islower(rcx21);
                    if (!eax22) 
                        goto addr_4081ba_5;
                    ecx17 = static_cast<uint32_t>(r12_16 - 87);
                    goto addr_408319_13;
                } else {
                    ecx17 = static_cast<uint32_t>(r12_16 - 55);
                    r12d18 = *reinterpret_cast<uint32_t*>(&rsi8);
                }
            }
        } else {
            eax23 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 1))) & 0xffffffdf;
            if (*reinterpret_cast<signed char*>(&eax23) != 88) {
                r12d18 = 8;
                *reinterpret_cast<uint32_t*>(&rsi8) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
                ecx17 = 0;
            } else {
                addr_4082cb_20:
                ecx15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 2));
                *reinterpret_cast<uint32_t*>(&rsi8) = 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
                rbx6 = rbx6 + 2;
                goto addr_408207_12;
            }
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rsi8) != 16) 
            goto addr_408207_12;
        if (*reinterpret_cast<signed char*>(&ecx15) != 48) 
            goto addr_408207_12;
        r12d18 = 16;
        eax24 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 1))) & 0xffffffdf;
        if (*reinterpret_cast<signed char*>(&eax24) == 88) 
            goto addr_4082cb_20;
        ecx17 = 0;
    }
    *reinterpret_cast<int32_t*>(&r15_10) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = 0;
    if (ecx17 >= r12d18) {
        addr_4081ba_5:
        return r15_10;
    } else {
        rbx25 = rbx6 + 1;
        r15_10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(ecx17)));
        while (1) {
            *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx25));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = 0;
            eax27 = static_cast<uint32_t>(r13_26 - 48);
            ecx28 = eax27;
            if (eax27 > 9 && (*reinterpret_cast<int32_t*>(&rcx29) = *reinterpret_cast<int32_t*>(&r13_26), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0, eax30 = isupper(rcx29, rcx29), ecx28 = static_cast<uint32_t>(r13_26 - 55), !eax30)) {
                *reinterpret_cast<int32_t*>(&rcx31) = *reinterpret_cast<int32_t*>(&r13_26);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
                eax32 = islower(rcx31, rcx31);
                if (!eax32) 
                    break;
                ecx28 = static_cast<uint32_t>(r13_26 - 87);
            }
            if (ecx28 >= r12d18) 
                break;
            if (-1 / reinterpret_cast<uint64_t>(rsi8) + 1 < r15_10 || (rax33 = reinterpret_cast<int32_t>(ecx28) + rsi8 * r15_10, r15_10 > rax33)) {
                r14d13 = 1;
            } else {
                r15_10 = rax33;
            }
            ++rbx25;
        }
        if (rbp7) 
            goto addr_4082e5_36;
    }
    addr_4082e9_37:
    if (r14d13) {
        rax34 = _errno();
        r15_10 = 0xffffffffffffffff;
        *rax34 = 34;
        goto addr_4081ba_5;
    } else {
        if (*reinterpret_cast<signed char*>(&rdi11) == 45) {
            r15_10 = -r15_10;
        }
        goto addr_4081ba_5;
    }
    addr_4082e5_36:
    *rbp7 = rbx25;
    goto addr_4082e9_37;
    addr_4081ee_9:
    ecx15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6 + 1));
    ++rbx6;
    goto addr_4081f6_10;
}

/* .text */
void text(void** rcx, void*** rdx, void** r8) {
    uint32_t eax4;
    int64_t rdx5;

    eax4 = __strtodg(rcx, rdx, 0x4111a0, reinterpret_cast<int64_t>(__zero_stack_offset()) - 72 + 60);
    *reinterpret_cast<uint32_t*>(&rdx5) = eax4 & 7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdx5) <= 5) {
        goto *reinterpret_cast<int32_t*>(0x412950 + rdx5 * 4) + 0x412950;
    }
    if (!(*reinterpret_cast<unsigned char*>(&eax4) & 8)) 
        goto addr_407af2_5;
    addr_407af2_5:
    __asm__("movd xmm0, edx");
    return;
}

struct s37 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

/* .text */
uint32_t text(void*** rcx, struct s17* rdx, void** r8, void** r9);

struct s38 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s39 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

/* .text */
void** text(void** rcx, void** edx, void** r8, void** r9);

void** __diff_D2A(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...);

uint32_t __strtodg(void** rcx, void*** rdx, struct s17* r8, void** r9) {
    void** rbp5;
    void*** v6;
    struct s17* v7;
    void** v8;
    struct s16* rax9;
    void** r12_10;
    void* rsp11;
    uint32_t v12;
    int64_t v13;
    void** v14;
    void** v15;
    uint32_t r8d16;
    void** v17;
    int64_t rax18;
    void** rsi19;
    uint32_t v20;
    void** rcx21;
    struct s37* rdi22;
    void** ebx23;
    void** v24;
    int64_t rax25;
    int64_t r8_26;
    uint32_t eax27;
    uint32_t eax28;
    void** r8_29;
    void** rax30;
    uint32_t r8d31;
    void** r8_32;
    void** r12d33;
    int64_t rcx34;
    void* v35;
    int32_t r10d36;
    void** rcx37;
    void** r12_38;
    void** r8_39;
    int64_t r10_40;
    int64_t rax41;
    int64_t r8_42;
    void* eax43;
    int64_t rcx44;
    int32_t edi45;
    int64_t r8_46;
    int32_t r15d47;
    void** r8_48;
    void** r11_49;
    void** r13_50;
    void** v51;
    void** r9_52;
    int64_t r8_53;
    void** eax54;
    void** v55;
    uint32_t eax56;
    uint32_t v57;
    int64_t rbp58;
    struct s38* rdi59;
    void** rsi60;
    void** eax61;
    void* rcx62;
    void* ebp63;
    uint32_t ebp64;
    struct s39* rdi65;
    void** rsi66;
    struct s39* rdi67;
    void** rsi68;
    int64_t rax69;
    int64_t rcx70;
    uint32_t r10d71;
    int64_t r8_72;
    uint32_t ecx73;
    int64_t rcx74;
    struct s39* rdi75;
    void** rsi76;
    int64_t r8_77;
    struct s39* rdi78;
    void** rsi79;
    struct s39* rdi80;
    void** rsi81;
    struct s39* rdi82;
    void** rsi83;
    void** v84;
    void** eax85;
    void** r8_86;
    void** rax87;
    int64_t rdx88;
    void** v89;
    int64_t rbp90;
    void* v91;
    void** r13d92;
    void** v93;
    void** v94;
    void** eax95;
    void** v96;
    void** eax97;
    void** v98;
    void** eax99;
    void** v100;
    void* ebp101;
    void** rdx102;
    int64_t v103;
    void** rax104;
    void** edx105;
    void** rcx106;
    void** edx107;
    uint32_t edx108;
    void** r8_109;
    void** rax110;
    void* rsp111;
    void** v112;
    void** eax113;
    void** rdx114;
    int1_t sf115;
    void** ebp116;
    void** v117;
    void** v118;
    void** v119;
    int64_t rax120;
    void* v121;
    void** v122;
    void** ecx123;
    int64_t v124;
    void** rax125;
    void** rcx126;
    void** rdi127;
    void** r8_128;
    void** ecx129;
    int64_t v130;
    void** rax131;
    void** rcx132;
    void** rsi133;
    void** rdx134;
    int64_t v135;
    void** rax136;
    void* rsp137;
    void** r15_138;
    int64_t rbx139;
    void** r12d140;
    int64_t r13_141;
    void** r14d142;
    int64_t rax143;
    void** ebx144;
    int64_t rax145;
    void** ebx146;
    void** r14d147;
    void** eax148;
    void** rax149;
    int64_t v150;
    void** rax151;
    int64_t v152;
    void* ebx153;
    void** rdx154;
    int64_t v155;
    void** rax156;
    void** edx157;
    void** rax158;
    void** rdx159;
    int64_t v160;
    void** rax161;
    void** rdx162;
    int64_t v163;
    void** rax164;
    int64_t v165;
    void** rax166;
    void** rbx167;
    int64_t r13_168;
    void** rcx169;
    uint32_t eax170;
    void* rsp171;
    uint32_t eax172;
    uint32_t eax173;
    void** rdi174;
    void** rsi175;
    uint32_t eax176;
    uint32_t v177;
    void** r13d178;
    uint32_t v179;
    void* v180;
    void* r12d181;
    void** rdx182;
    int64_t v183;
    void** rax184;
    void** rax185;
    void* rsp186;
    void** rdx187;
    int32_t v188;
    void** r14_189;
    void** edx190;
    int64_t v191;
    void** rax192;
    void** r12_193;
    void** rcx194;
    int64_t v195;
    void** rax196;
    void* rsp197;
    void** edx198;
    int64_t rdx199;
    int64_t v200;
    void** rax201;
    int64_t v202;
    int64_t v203;
    void** rax204;
    void** edx205;
    void** edx206;
    int64_t rdx207;
    void** eax208;
    int64_t v209;
    int64_t v210;
    uint1_t zf211;
    uint1_t below_or_equal212;
    void** eax213;
    int64_t v214;
    int64_t v215;
    int64_t v216;
    int64_t v217;
    uint1_t zf218;
    uint1_t below_or_equal219;
    uint1_t zf220;
    void** edx221;
    int64_t rax222;
    uint32_t* rdx223;
    int64_t v224;
    void** rax225;
    uint32_t eax226;
    void** eax227;
    void** eax228;
    void** rdx229;
    void** edx230;
    int64_t v231;
    void** rax232;
    int64_t v233;
    int64_t v234;
    int64_t v235;
    int64_t v236;
    int64_t v237;
    int32_t* rax238;
    void** eax239;
    uint32_t eax240;
    int32_t* rax241;
    void** rdx242;
    void** v243;
    int64_t v244;
    int32_t* rax245;
    int64_t v246;
    int64_t rcx247;
    uint64_t rdx248;
    uint64_t v249;
    uint64_t rax250;
    uint32_t ecx251;
    uint32_t ecx252;
    void** rdx253;
    void** rax254;
    void** edx255;
    void*** rax256;
    void*** rcx257;
    void** rax258;
    void*** rax259;
    void*** rcx260;
    uint32_t ecx261;
    int64_t rcx262;
    int64_t rax263;
    void** rdx264;
    void** rax265;
    int64_t rax266;
    int64_t rcx267;
    uint32_t r10d268;
    int64_t r8_269;
    uint32_t ecx270;
    int64_t rcx271;
    struct s39* rdi272;
    void** rsi273;
    int64_t r8_274;
    int32_t ecx275;
    struct s29** rbx276;
    int32_t eax277;
    void** eax278;
    struct s30* v279;
    uint32_t eax280;
    struct s29** rbx281;
    int32_t eax282;
    int32_t eax283;

    __asm__("movaps [rsp+0xc0], xmm6");
    __asm__("movaps [rsp+0xd0], xmm7");
    __asm__("movaps [rsp+0xe0], xmm8");
    rbp5 = rcx;
    v6 = rdx;
    v7 = r8;
    v8 = r9;
    rax9 = localeconv();
    r12_10 = rax9->f0;
    strlen(r12_10);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xf8 - 8 + 8 - 8 + 8);
    v12 = 0;
    v13 = 0;
    v14 = rbp5;
    v15 = reinterpret_cast<void**>(0);
    r8d16 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp5));
    v17 = v7->f0;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r8d16)) <= 45) {
        *reinterpret_cast<uint32_t*>(&rax18) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r8d16));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
        goto *reinterpret_cast<int32_t*>(0x412d2c + rax18 * 4) + 0x412d2c;
    }
    rsi19 = rbp5;
    v20 = 0;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&r8d16) == 48)) {
        addr_40cf60_4:
        rcx21 = rsi19;
        *reinterpret_cast<int32_t*>(&rdi22) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = 0;
        ebx23 = reinterpret_cast<void**>(0);
        v24 = v7->f16;
        *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r8d16))));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
        if (static_cast<uint32_t>(rax25 - 48) <= 9) {
            do {
                if (reinterpret_cast<signed char>(ebx23) <= reinterpret_cast<signed char>(8)) {
                    *reinterpret_cast<int32_t*>(&r8_26) = static_cast<int32_t>(reinterpret_cast<int64_t>(rdi22) + reinterpret_cast<int64_t>(rdi22) * 4);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdi22) = static_cast<int32_t>(rax25 + r8_26 * 2 - 48);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = 0;
                } else {
                    if (reinterpret_cast<signed char>(ebx23) <= reinterpret_cast<signed char>(15)) {
                    }
                }
                ++rcx21;
                ++ebx23;
                v14 = rcx21;
                *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx21))));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
                r9 = reinterpret_cast<void**>(static_cast<uint32_t>(rax25 - 48));
                *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                r8d16 = *reinterpret_cast<uint32_t*>(&rax25);
            } while (reinterpret_cast<unsigned char>(r9) <= reinterpret_cast<unsigned char>(9));
        }
    } else {
        eax27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi19 + 1));
        if (*reinterpret_cast<signed char*>(&eax27) == 88 || *reinterpret_cast<signed char*>(&eax27) == 0x78) {
            r9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp11) + 0xb8);
            eax28 = text(reinterpret_cast<int64_t>(rsp11) + 0xa8, v7, v8, r9);
            v12 = eax28;
            if (eax28 != 6) 
                goto addr_40d356_13;
            r8_29 = reinterpret_cast<void**>(0);
            if (v6) {
                *v6 = rbp5;
                goto addr_40d2ee_16;
            }
        } else {
            rax30 = rsi19 + 1;
            do {
                rsi19 = rax30;
                v14 = rax30;
                r8d16 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax30));
                ++rax30;
            } while (*reinterpret_cast<void***>(&r8d16) == 48);
            if (!*reinterpret_cast<void***>(&r8d16)) 
                goto addr_40d356_13;
            v20 = 1;
            goto addr_40cf60_4;
        }
    }
    if (*reinterpret_cast<void***>(r12_10) != *reinterpret_cast<void***>(&r8d16)) 
        goto addr_40d06e_22;
    r8d31 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_10 + 1));
    if (!*reinterpret_cast<void***>(&r8d31)) {
        r8_32 = rcx21 + 1;
    } else {
        if (*reinterpret_cast<void***>(&r8d31) != *reinterpret_cast<void***>(rcx21 + 1)) {
            addr_40d06e_22:
            r12d33 = ebx23;
            *reinterpret_cast<void**>(&rcx34) = reinterpret_cast<void*>(0);
            v35 = reinterpret_cast<void*>(0);
            r10d36 = 0;
            goto addr_40d07e_26;
        } else {
            rcx37 = rcx21 + 2;
            r12_38 = r12_10 + 2;
            do {
                r9 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_38))));
                *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                r8_32 = rcx37;
                if (!r9) 
                    break;
                ++rcx37;
                ++r12_38;
            } while (*reinterpret_cast<void***>(r8_32) == r9);
            goto addr_40d06e_22;
        }
    }
    v14 = r8_32;
    *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r8_32))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
    if (!ebx23) {
        if (*reinterpret_cast<uint32_t*>(&rax25) != 48) {
            *reinterpret_cast<void**>(&rcx34) = reinterpret_cast<void*>(0);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
        } else {
            r8_39 = r8_32 + 1;
            *reinterpret_cast<void**>(&rcx34) = reinterpret_cast<void*>(0);
            do {
                v14 = r8_39;
                *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r8_39))));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
                *reinterpret_cast<void**>(&rcx34) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rcx34)) + 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
                ++r8_39;
            } while (*reinterpret_cast<uint32_t*>(&rax25) == 48);
        }
        if (static_cast<uint32_t>(rax25 - 49) <= 8) {
            rsi19 = v14;
            *reinterpret_cast<uint32_t*>(&r10_40) = static_cast<uint32_t>(rax25 - 48);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_40) + 4) = 0;
            r12d33 = reinterpret_cast<void**>(1);
            v35 = reinterpret_cast<void*>(static_cast<uint32_t>(rcx34 + 1));
            r9 = rsi19;
            while (1) {
                addr_40e7a6_37:
                *reinterpret_cast<int32_t*>(&rax41) = static_cast<int32_t>(reinterpret_cast<int64_t>(rdi22) + reinterpret_cast<int64_t>(rdi22) * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                *reinterpret_cast<void**>(&rcx34) = reinterpret_cast<void*>(0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rdi22) = static_cast<int32_t>(r10_40 + rax41 * 2);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = 0;
                while (v14 = r9 + 1, *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r9 + 1)))), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0, *reinterpret_cast<uint32_t*>(&r8_42) = static_cast<uint32_t>(rax25 - 48), *reinterpret_cast<uint32_t*>(&r8_42) <= 9) {
                    addr_40d550_39:
                    *reinterpret_cast<uint32_t*>(&r10_40) = *reinterpret_cast<uint32_t*>(&r8_42);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_40) + 4) = 0;
                    r9 = v14;
                    eax43 = reinterpret_cast<void*>(static_cast<uint32_t>(rcx34 + 1));
                    if (*reinterpret_cast<uint32_t*>(&r8_42)) {
                        v35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v35) + reinterpret_cast<uint32_t>(eax43));
                        if (eax43 == 1) {
                            *reinterpret_cast<void***>(&rcx44) = r12d33;
                            ++r12d33;
                        } else {
                            *reinterpret_cast<void***>(&rcx44) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rcx34)) + reinterpret_cast<unsigned char>(r12d33));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx44) + 4) = 0;
                            do {
                                if (reinterpret_cast<signed char>(r12d33) <= reinterpret_cast<signed char>(8)) {
                                    edi45 = static_cast<int32_t>(reinterpret_cast<int64_t>(rdi22) + reinterpret_cast<int64_t>(rdi22) * 4);
                                    ++r12d33;
                                    *reinterpret_cast<int32_t*>(&rdi22) = edi45 + edi45;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = 0;
                                } else {
                                    ++r12d33;
                                    if (reinterpret_cast<signed char>(r12d33) <= reinterpret_cast<signed char>(16)) {
                                    }
                                }
                            } while (*reinterpret_cast<void***>(&rcx44) != r12d33);
                            r12d33 = reinterpret_cast<void**>(static_cast<uint32_t>(rcx44 + 1));
                        }
                        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rcx44)) <= reinterpret_cast<signed char>(8)) 
                            goto addr_40e7a6_37;
                        *reinterpret_cast<void**>(&rcx34) = reinterpret_cast<void*>(0);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
                        if (reinterpret_cast<signed char>(r12d33) > reinterpret_cast<signed char>(16)) 
                            continue;
                    } else {
                        *reinterpret_cast<void**>(&rcx34) = eax43;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
                    }
                }
                break;
            }
        } else {
            v35 = reinterpret_cast<void*>(0);
            r12d33 = reinterpret_cast<void**>(0);
        }
    } else {
        *reinterpret_cast<uint32_t*>(&r8_42) = static_cast<uint32_t>(rax25 - 48);
        *reinterpret_cast<void**>(&rcx34) = reinterpret_cast<void*>(0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = 0;
        r12d33 = ebx23;
        v35 = reinterpret_cast<void*>(0);
        if (*reinterpret_cast<uint32_t*>(&r8_42) <= 9) 
            goto addr_40d550_39;
    }
    r10d36 = 1;
    addr_40d07e_26:
    if ((*reinterpret_cast<uint32_t*>(&rax25) & 0xffffffdf) == 69) {
        if (!(reinterpret_cast<unsigned char>(r12d33) | reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rcx34)) | v20)) 
            goto addr_40d2a0_58;
        rbp5 = v14;
        v14 = rbp5 + 1;
        *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp5 + 1))));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
        if (*reinterpret_cast<signed char*>(&rax25) != 43) 
            goto addr_40d19f_60;
    } else {
        *reinterpret_cast<void***>(&r8_46) = reinterpret_cast<void**>(0);
        goto addr_40d092_62;
    }
    r15d47 = 0;
    addr_40d1ac_64:
    v14 = rbp5 + 2;
    *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp5 + 2))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
    goto addr_40d1bc_65;
    addr_40d19f_60:
    r15d47 = 0;
    if (*reinterpret_cast<signed char*>(&rax25) != 45) {
        addr_40d1bc_65:
        if (static_cast<uint32_t>(rax25 - 48) > 9) {
            v14 = rbp5;
            *reinterpret_cast<void***>(&r8_46) = reinterpret_cast<void**>(0);
        } else {
            if (*reinterpret_cast<uint32_t*>(&rax25) == 48) {
                r8_48 = v14 + 1;
                do {
                    v14 = r8_48;
                    *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r8_48))));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
                    ++r8_48;
                } while (*reinterpret_cast<uint32_t*>(&rax25) == 48);
            }
            r9 = reinterpret_cast<void**>(static_cast<uint32_t>(rax25 - 49));
            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
            *reinterpret_cast<void***>(&r8_46) = reinterpret_cast<void**>(0);
            if (reinterpret_cast<unsigned char>(r9) <= reinterpret_cast<unsigned char>(8)) {
                r11_49 = v14;
                *reinterpret_cast<void***>(&r8_46) = reinterpret_cast<void**>(static_cast<uint32_t>(rax25 - 48));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_46) + 4) = 0;
                r13_50 = r11_49 + 1;
                v51 = r11_49;
                v14 = r13_50;
                *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r11_49 + 1))));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
                if (static_cast<uint32_t>(rax25 - 48) <= 9) {
                    r9_52 = r11_49 + 2;
                    do {
                        *reinterpret_cast<int32_t*>(&r8_53) = static_cast<int32_t>(r8_46 + r8_46 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_53) + 4) = 0;
                        v14 = r9_52;
                        r13_50 = r9_52;
                        ++r9_52;
                        *reinterpret_cast<void***>(&r8_46) = reinterpret_cast<void**>(static_cast<uint32_t>(rax25 + r8_53 * 2 - 48));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_46) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r9_52 + 0xffffffffffffffff))));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
                    } while (static_cast<uint32_t>(rax25 - 48) <= 9);
                }
                if (reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r13_50) - reinterpret_cast<unsigned char>(v51)) > reinterpret_cast<int64_t>(8) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r8_46)) > reinterpret_cast<signed char>(0x4e1f)) {
                    *reinterpret_cast<void***>(&r8_46) = reinterpret_cast<void**>(0x4e1f);
                }
                r9 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r8_46)));
                *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                if (r15d47) {
                    *reinterpret_cast<void***>(&r8_46) = r9;
                }
            }
        }
    } else {
        r15d47 = 1;
        goto addr_40d1ac_64;
    }
    addr_40d092_62:
    if (r12d33) {
        v12 = 1;
        eax54 = v7->f12;
        v55 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r8_46)) - reinterpret_cast<uint32_t>(v35));
        eax56 = reinterpret_cast<unsigned char>(eax54) & 3;
        v57 = eax56;
        if (eax56 != 2 && (v57 = 1, eax56 != 3)) {
            v57 = reinterpret_cast<uint1_t>(eax56 == 0);
        }
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<void***>(&rbp58) = reinterpret_cast<void**>(16);
        __asm__("cvtsi2sd xmm0, rax");
        if (!ebx23) {
            ebx23 = r12d33;
        }
        if (reinterpret_cast<signed char>(r12d33) <= reinterpret_cast<signed char>(16)) {
            *reinterpret_cast<void***>(&rbp58) = r12d33;
        }
        rdi22->f0 = *reinterpret_cast<void***>(rsi19);
        rdi59 = reinterpret_cast<struct s38*>(&rdi22->f4);
        rsi60 = rsi19 + 4;
        if (reinterpret_cast<signed char>(r12d33) > reinterpret_cast<signed char>(9)) {
            __asm__("pxor xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, rdx");
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, xmm1");
            rdi59->f0 = *reinterpret_cast<void***>(rsi60);
            rdi59 = reinterpret_cast<struct s38*>(&rdi59->f4);
            rsi60 = rsi60 + 4;
        }
        if (reinterpret_cast<signed char>(v17) > reinterpret_cast<signed char>(53)) 
            goto addr_40d590_94;
        if (reinterpret_cast<signed char>(r12d33) <= reinterpret_cast<signed char>(15)) 
            goto addr_40d41f_96;
    } else {
        if (v20 | reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rcx34))) 
            goto addr_40d356_13;
        if (r10d36) 
            goto addr_40d2a0_58;
        if (*reinterpret_cast<uint32_t*>(&rax25) == 78) 
            goto addr_40d0cd_100; else 
            goto addr_40d0b5_101;
    }
    addr_40d590_94:
    eax61 = v55;
    goto addr_40d594_102;
    addr_40d41f_96:
    if (!v55) {
        rcx62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) + 0xb0);
    } else {
        if (reinterpret_cast<signed char>(v55) <= reinterpret_cast<signed char>(0)) {
            eax61 = v55;
            if (reinterpret_cast<signed char>(v55) < reinterpret_cast<signed char>(0xffffffea)) {
                addr_40d594_102:
                ebp63 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r12d33) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp58)) + reinterpret_cast<unsigned char>(eax61));
                if (reinterpret_cast<int32_t>(ebp63) <= reinterpret_cast<int32_t>(0)) {
                    if (!ebp63) {
                        addr_40d5d6_107:
                        goto label_108;
                    } else {
                        ebp64 = -reinterpret_cast<uint32_t>(ebp63);
                        if (ebp64 & 15) {
                            rdi59->f0 = *reinterpret_cast<void***>(rsi60);
                            rdi65 = reinterpret_cast<struct s39*>(&rdi59->f4);
                            rsi66 = rsi60 + 4;
                            __asm__("divsd xmm0, [rdx+rax*8]");
                            rdi65->f0 = *reinterpret_cast<void***>(rsi66);
                            rdi59 = reinterpret_cast<struct s38*>(&rdi65->f4);
                            rsi60 = rsi66 + 4;
                        }
                        ebp63 = reinterpret_cast<void*>(ebp64 & 0xfffffff0);
                        if (!ebp63) 
                            goto addr_40d5d6_107; else 
                            goto addr_40d968_117;
                    }
                } else {
                    if (reinterpret_cast<uint32_t>(ebp63) & 15) {
                        rdi59->f0 = *reinterpret_cast<void***>(rsi60);
                        rdi67 = reinterpret_cast<struct s39*>(&rdi59->f4);
                        rsi68 = rsi60 + 4;
                        __asm__("mulsd xmm0, [rdx+rax*8]");
                        rdi67->f0 = *reinterpret_cast<void***>(rsi68);
                        rdi59 = reinterpret_cast<struct s38*>(&rdi67->f4);
                        rsi60 = rsi68 + 4;
                    }
                    ebp63 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp63) & 0xfffffff0);
                    if (!ebp63) 
                        goto addr_40d5d6_107;
                    *reinterpret_cast<void***>(&rax69) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp63) >> 4);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax69) + 4) = 0;
                    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax69)) <= reinterpret_cast<signed char>(15)) {
                        *reinterpret_cast<int32_t*>(&rcx70) = 0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx70) + 4) = 0;
                    } else {
                        r10d71 = static_cast<uint32_t>(rax69 - 16);
                        *reinterpret_cast<int32_t*>(&r8_72) = 0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_72) + 4) = 0;
                        r9 = reinterpret_cast<void**>(r10d71 & 15);
                        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                        rdi59->f0 = *reinterpret_cast<void***>(rsi60);
                        rdi59 = reinterpret_cast<struct s38*>(&rdi59->f4);
                        rsi60 = rsi60 + 4;
                        do {
                            *reinterpret_cast<void***>(&rax69) = *reinterpret_cast<void***>(&rax69) - 16;
                            ecx73 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v13) + 4) >> 20;
                            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v13) + 4) = 0x3ff00000;
                            *reinterpret_cast<uint32_t*>(&rcx74) = ecx73 & 0x7ff;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx74) + 4) = 0;
                            rdi59->f0 = *reinterpret_cast<void***>(rsi60);
                            rdi75 = reinterpret_cast<struct s39*>(&rdi59->f4);
                            rsi76 = rsi60 + 4;
                            *reinterpret_cast<int32_t*>(&rcx70) = static_cast<int32_t>(r8_72 + rcx74 - 0x3ff);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx70) + 4) = 0;
                            __asm__("mulsd xmm0, xmm1");
                            *reinterpret_cast<int32_t*>(&r8_72) = *reinterpret_cast<int32_t*>(&rcx70);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_72) + 4) = 0;
                            rdi75->f0 = *reinterpret_cast<void***>(rsi76);
                            rdi59 = reinterpret_cast<struct s38*>(&rdi75->f4);
                            rsi60 = rsi76 + 4;
                        } while (r9 != *reinterpret_cast<void***>(&rax69));
                        *reinterpret_cast<void***>(&rax69) = reinterpret_cast<void**>(r10d71 & 15);
                    }
                    *reinterpret_cast<uint32_t*>(&r8_77) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v13) + 4) >> 20 & 0x7ff;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_77) + 4) = 0;
                    rdi59->f0 = *reinterpret_cast<void***>(rsi60);
                    rdi78 = reinterpret_cast<struct s39*>(&rdi59->f4);
                    rsi79 = rsi60 + 4;
                    ebp63 = reinterpret_cast<void*>(static_cast<uint32_t>(rcx70 + r8_77 - 0x3ff));
                    if (!*reinterpret_cast<void***>(&rax69)) 
                        goto addr_40d5df_144; else 
                        goto addr_40d855_145;
                }
            } else {
                rdi59->f0 = *reinterpret_cast<void***>(rsi60);
                rdi80 = reinterpret_cast<struct s39*>(&rdi59->f4);
                rsi81 = rsi60 + 4;
                __asm__("divsd xmm0, [rdx+rax*8]");
                goto addr_40e468_150;
            }
        } else {
            if (reinterpret_cast<signed char>(v55) > reinterpret_cast<signed char>(22)) {
                eax61 = v55;
                if (reinterpret_cast<signed char>(37 - reinterpret_cast<unsigned char>(r12d33)) < reinterpret_cast<signed char>(v55)) 
                    goto addr_40d594_102;
                rdi59->f0 = *reinterpret_cast<void***>(rsi60);
                rdi80 = reinterpret_cast<struct s39*>(&rdi59->f4);
                rsi81 = rsi60 + 4;
                __asm__("mulsd xmm0, [rdx+rcx*8]");
                __asm__("mulsd xmm0, [rdx+rax*8]");
                goto addr_40e468_150;
            } else {
                if (1) {
                    __asm__("bsf ecx, ecx");
                } else {
                    __asm__("bsf ecx, edx");
                }
                rdi59->f0 = *reinterpret_cast<void***>(rsi60);
                rdi82 = reinterpret_cast<struct s39*>(&rdi59->f4);
                rsi83 = rsi60 + 4;
                __asm__("mulsd xmm0, [rcx+r8*8]");
                rcx62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) + 0xb0);
                rdi82->f0 = *reinterpret_cast<void***>(rsi83);
                rdi59 = reinterpret_cast<struct s38*>(&rdi82->f4);
                rsi60 = rsi83 + 4;
            }
        }
    }
    addr_40d4b1_166:
    r9 = v84;
    eax85 = rvOK(rcx62, v7, v8, r9);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
    if (eax85) {
        addr_40d356_13:
        r8_29 = v15;
        goto addr_40d2c0_167;
    } else {
        eax61 = reinterpret_cast<void**>(0);
        goto addr_40d594_102;
    }
    label_108:
    rdi59->f0 = *reinterpret_cast<void***>(rsi60);
    rdi78 = reinterpret_cast<struct s39*>(&rdi59->f4);
    rsi79 = rsi60 + 4;
    addr_40d5df_144:
    r8_86 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp11) + 0xa0);
    rax87 = __d2b_D2A();
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
    *reinterpret_cast<void***>(&rdx88) = v89;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx88) + 4) = 0;
    v15 = rax87;
    *reinterpret_cast<void***>(&rbp90) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp63) + reinterpret_cast<uint32_t>(v91));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp90) + 4) = 0;
    r13d92 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdx88)) - reinterpret_cast<unsigned char>(v17));
    v93 = *reinterpret_cast<void***>(&rbp90);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r13d92) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r13d92 == 0))) {
        text(rax87, r13d92, rax87, r13d92);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        *reinterpret_cast<void***>(&rdx88) = v17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx88) + 4) = 0;
        v94 = v17;
        *reinterpret_cast<void***>(&rbp90) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v93) + reinterpret_cast<unsigned char>(r13d92));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp90) + 4) = 0;
        v93 = *reinterpret_cast<void***>(&rbp90);
    }
    eax95 = reinterpret_cast<void**>(static_cast<int32_t>(rdx88 + rbp90) - reinterpret_cast<unsigned char>(v17));
    v96 = eax95;
    eax97 = v7->f8;
    if (reinterpret_cast<signed char>(eax97 + 1) < reinterpret_cast<signed char>(eax95)) {
        v98 = reinterpret_cast<void**>(0);
        goto addr_40da58_173;
    }
    eax99 = v7->f4;
    v100 = eax99;
    if (reinterpret_cast<signed char>(eax95) >= reinterpret_cast<signed char>(eax99)) {
        v98 = reinterpret_cast<void**>(0);
    } else {
        ebp101 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp90)) - reinterpret_cast<unsigned char>(eax99));
        if (reinterpret_cast<int32_t>(ebp101) > reinterpret_cast<int32_t>(0)) {
            *reinterpret_cast<void**>(&rdx102) = ebp101;
            *reinterpret_cast<int32_t*>(&rdx102 + 4) = 0;
            rax104 = __lshift_D2A(v15, rdx102, r8_86, r9, v103, v15, *reinterpret_cast<void**>(&rdx102));
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
            v94 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v94) + reinterpret_cast<uint32_t>(ebp101));
            v15 = rax104;
            goto addr_40d69a_178;
        }
        if (ebp101) {
            edx105 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdx88)) + reinterpret_cast<uint32_t>(ebp101));
            rcx106 = v15;
            v94 = edx105;
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx105) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx105 == 0))) {
                edx107 = reinterpret_cast<void**>(-reinterpret_cast<uint32_t>(ebp101));
                text(rcx106, edx107, rcx106, edx107);
                rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
                goto addr_40d69a_178;
            } else {
                if (reinterpret_cast<signed char>(edx105) < reinterpret_cast<signed char>(0xffffffff)) {
                    *reinterpret_cast<void***>(rcx106 + 20) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(v8) = v100;
                    if (v24) 
                        goto addr_40d6e0_184;
                    edx108 = 80;
                    goto addr_40d341_186;
                } else {
                    v94 = reinterpret_cast<void**>(1);
                    *reinterpret_cast<void***>(rcx106 + 20) = reinterpret_cast<void**>(0x100000001);
                    goto addr_40d69a_178;
                }
            }
        } else {
            addr_40d69a_178:
            v93 = v100;
            if (!v24 || reinterpret_cast<signed char>(v96 + 1) >= reinterpret_cast<signed char>(v100)) {
                v98 = reinterpret_cast<void**>(1);
                v96 = v100;
            } else {
                rcx106 = v15;
                *reinterpret_cast<void***>(rcx106 + 20) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(v8) = v100;
                goto addr_40d6e0_184;
            }
        }
    }
    r9 = *reinterpret_cast<void***>(&rdi78);
    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
    r8_109 = r12d33;
    *reinterpret_cast<int32_t*>(&r8_109 + 4) = 0;
    rax110 = text(rsi79, ebx23, r8_109, r9);
    rsp111 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
    v112 = rax110;
    eax113 = reinterpret_cast<void**>(0);
    __asm__("movq xmm8, [rip+0x5361]");
    rdx114 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v55));
    *reinterpret_cast<int32_t*>(&rdx114 + 4) = 0;
    sf115 = reinterpret_cast<signed char>(v55) < reinterpret_cast<signed char>(0);
    if (!sf115) {
        rdx114 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&rdx114 + 4) = 0;
    }
    if (!sf115) {
        eax113 = v55;
    }
    ebp116 = reinterpret_cast<void**>(0);
    v117 = rdx114;
    v118 = eax113;
    v119 = rax110 + 16;
    *reinterpret_cast<void***>(&rax120) = v17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax120) + 4) = 0;
    v121 = reinterpret_cast<void*>(static_cast<int32_t>(rax120 + 1));
    v122 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rax120)) & 31);
    while (1) {
        ecx123 = *reinterpret_cast<void***>(v112 + 8);
        rax125 = __Balloc_D2A(ecx123, rdx114, r8_109, r9, v124, ecx123);
        rcx126 = rax125 + 16;
        rdi127 = rax125;
        r8_128 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(v112 + 20)) * 4 + 8);
        memcpy(rcx126, v119, r8_128, rcx126, v119, r8_128);
        ecx129 = *reinterpret_cast<void***>(v15 + 8);
        rax131 = __Balloc_D2A(ecx129, v119, r8_128, r9, v130, ecx129);
        rcx132 = rax131 + 16;
        rsi133 = rax131;
        rdx134 = v15 + 16;
        r8_109 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(v15 + 20)) * 4 + 8);
        memcpy(rcx132, rdx134, r8_109, rcx132, rdx134, r8_109);
        rax136 = __i2b_D2A(1, rdx134, r8_109, r9, v135, 1);
        rsp137 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp111) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        r15_138 = rax136;
        *reinterpret_cast<void**>(&rbx139) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v93) + reinterpret_cast<unsigned char>(ebp116));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx139) + 4) = 0;
        r12d140 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v94) - reinterpret_cast<unsigned char>(ebp116));
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rbx139)) < reinterpret_cast<int32_t>(0)) {
            *reinterpret_cast<void***>(&r13_141) = v117;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_141) + 4) = 0;
            r14d142 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v118) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rbx139)));
        } else {
            *reinterpret_cast<void***>(&rax143) = v117;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax143) + 4) = 0;
            r14d142 = v118;
            *reinterpret_cast<void***>(&r13_141) = reinterpret_cast<void**>(static_cast<uint32_t>(rax143 + rbx139));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_141) + 4) = 0;
        }
        ebx144 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rbx139)) + reinterpret_cast<unsigned char>(r12d140) - reinterpret_cast<unsigned char>(v17));
        *reinterpret_cast<void**>(&rax145) = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v121) - reinterpret_cast<unsigned char>(r12d140));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax145) + 4) = 0;
        if (reinterpret_cast<signed char>(v100) > reinterpret_cast<signed char>(ebx144)) {
            *reinterpret_cast<void**>(&rax145) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx144) - reinterpret_cast<unsigned char>(v100) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax145)));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax145) + 4) = 0;
        }
        ebx146 = reinterpret_cast<void**>(static_cast<uint32_t>(r13_141 + rax145));
        r14d147 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d142) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax145)));
        eax148 = r14d147;
        if (reinterpret_cast<signed char>(ebx146) <= reinterpret_cast<signed char>(r14d147)) {
            eax148 = ebx146;
        }
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r13_141)) <= reinterpret_cast<signed char>(eax148)) {
            eax148 = *reinterpret_cast<void***>(&r13_141);
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax148) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax148 == 0))) {
            ebx146 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx146) - reinterpret_cast<unsigned char>(eax148));
            r14d147 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d147) - reinterpret_cast<unsigned char>(eax148));
            *reinterpret_cast<void***>(&r13_141) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r13_141)) - reinterpret_cast<unsigned char>(eax148));
        }
        if (v117) {
            rax149 = __pow5mult_D2A(r15_138, v117, r15_138, v117);
            r15_138 = rax149;
            rax151 = __mult_D2A(rax149, rsi133, r8_109, r9, v150, rax149, rsi133);
            __Bfree_D2A(rsi133, rsi133, r8_109, r9, v152, rsi133);
            rsp137 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp137) - 8 + 8 - 8 + 8 - 8 + 8);
            rsi133 = rax151;
        }
        ebx153 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx146) - reinterpret_cast<unsigned char>(ebp116));
        if (reinterpret_cast<int32_t>(ebx153) > reinterpret_cast<int32_t>(0)) {
            *reinterpret_cast<void**>(&rdx154) = ebx153;
            *reinterpret_cast<int32_t*>(&rdx154 + 4) = 0;
            rax156 = __lshift_D2A(rsi133, rdx154, r8_109, r9, v155, rsi133, *reinterpret_cast<void**>(&rdx154));
            rsp137 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp137) - 8 + 8);
            rsi133 = rax156;
        } else {
            if (ebx153) {
                edx157 = reinterpret_cast<void**>(-reinterpret_cast<uint32_t>(ebx153));
                text(rsi133, edx157, rsi133, edx157);
                rsp137 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp137) - 8 + 8);
            }
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v55) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v55 == 0))) {
            rax158 = __pow5mult_D2A(rdi127, v118, rdi127, v118);
            rsp137 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp137) - 8 + 8);
            rdi127 = rax158;
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d147) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d147 == 0))) {
            rdx159 = r14d147;
            *reinterpret_cast<int32_t*>(&rdx159 + 4) = 0;
            rax161 = __lshift_D2A(rdi127, rdx159, r8_109, r9, v160, rdi127, rdx159);
            rsp137 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp137) - 8 + 8);
            rdi127 = rax161;
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r13_141)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r13_141) == 0))) {
            rdx162 = *reinterpret_cast<void***>(&r13_141);
            *reinterpret_cast<int32_t*>(&rdx162 + 4) = 0;
            rax164 = __lshift_D2A(r15_138, rdx162, r8_109, r9, v163, r15_138, rdx162);
            rsp137 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp137) - 8 + 8);
            r15_138 = rax164;
        }
        rax166 = __diff_D2A(rsi133, rdi127, r8_109, r9, v165, rsi133, rdi127, r8_109);
        rbx167 = rax166;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax166 + 20)) > reinterpret_cast<signed char>(1)) 
            goto addr_40dddf_219;
        if (!*reinterpret_cast<void***>(rax166 + 24)) 
            goto addr_40e0e0_221;
        addr_40dddf_219:
        r13_168 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx167 + 16));
        rcx169 = rbx167;
        *reinterpret_cast<void***>(rbx167 + 16) = reinterpret_cast<void**>(0);
        eax170 = __cmp_D2A(rcx169, r15_138, rcx169, r15_138);
        rsp171 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp137) - 8 + 8 - 8 + 8);
        if (!v57 || !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax170) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax170 == 0))) {
            if (reinterpret_cast<int32_t>(eax170) < reinterpret_cast<int32_t>(0)) 
                break;
            if (!eax170) 
                goto addr_40e633_224;
            eax172 = __ratio_D2A(rbx167, r15_138, r8_109, r9);
            rsp171 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp171) - 8 + 8);
            *reinterpret_cast<void***>(rdi127) = *reinterpret_cast<void***>(rsi133);
            rdi127 = rdi127 + 4;
            rsi133 = rsi133 + 4;
            __asm__("ucomisd xmm1, xmm0");
            if (!0) 
                goto addr_40df5b_229;
        } else {
            eax173 = v57 & 1;
            ebp116 = reinterpret_cast<void**>(eax173 ^ *reinterpret_cast<uint32_t*>(&r13_168));
            if (eax173 == *reinterpret_cast<uint32_t*>(&r13_168)) 
                goto addr_40e57e_231;
            if (!*reinterpret_cast<uint32_t*>(&r13_168)) 
                goto addr_40e020_233; else 
                goto addr_40de25_234;
        }
        *reinterpret_cast<void***>(rdi127) = *reinterpret_cast<void***>(rsi133);
        rdi174 = rdi127 + 4;
        rsi175 = rsi133 + 4;
        __asm__("movapd xmm7, xmm0");
        *reinterpret_cast<void***>(rdi174) = *reinterpret_cast<void***>(rsi175);
        rdi127 = rdi174 + 4;
        rsi133 = rsi175 + 4;
        __asm__("mulsd xmm7, xmm1");
        eax176 = (eax172 - (eax172 + reinterpret_cast<uint1_t>(eax172 < eax172 + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r13_168) < 1))) & 16) + 16;
        v177 = eax176;
        r13d178 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r13_168) < 1))));
        __asm__("ucomisd xmm0, xmm7");
        if (*reinterpret_cast<uint32_t*>(&r13_168) > 1) 
            goto addr_40e231_242;
        __asm__("movapd xmm6, xmm7");
        v179 = 0;
        ebp116 = reinterpret_cast<void**>(0);
        addr_40de52_244:
        v180 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v93) + reinterpret_cast<unsigned char>(v94));
        if (reinterpret_cast<signed char>(v94) < reinterpret_cast<signed char>(v17) && !(*reinterpret_cast<unsigned char*>(&v98) & 1)) {
            r12d181 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v17) - reinterpret_cast<unsigned char>(v94));
            *reinterpret_cast<void**>(&rdx182) = r12d181;
            *reinterpret_cast<int32_t*>(&rdx182 + 4) = 0;
            rax184 = __lshift_D2A(v15, rdx182, r8_109, r9, v183, v15, *reinterpret_cast<void**>(&rdx182));
            rsp171 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp171) - 8 + 8);
            v94 = v17;
            v93 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v93) - reinterpret_cast<uint32_t>(r12d181));
            v15 = rax184;
        }
        __asm__("movapd xmm0, xmm6");
        r8_109 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp171) + 0x98);
        rax185 = __d2b_D2A();
        rsp186 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp171) - 8 + 8);
        *reinterpret_cast<int32_t*>(&rdx187) = v188;
        *reinterpret_cast<int32_t*>(&rdx187 + 4) = 0;
        r14_189 = rax185;
        if (*reinterpret_cast<int32_t*>(&rdx187) < 0) {
            edx190 = reinterpret_cast<void**>(-*reinterpret_cast<int32_t*>(&rdx187));
            text(rax185, edx190, rax185, edx190);
            rsp186 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp186) - 8 + 8);
        } else {
            if (*reinterpret_cast<int32_t*>(&rdx187)) {
                rax192 = __lshift_D2A(rax185, rdx187, r8_109, r9, v191, rax185, *reinterpret_cast<int32_t*>(&rdx187));
                rsp186 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp186) - 8 + 8);
                r14_189 = rax192;
            }
        }
        r12_193 = v15;
        rdx114 = r14_189;
        rcx194 = r12_193;
        if (r13d178) {
            rax196 = __diff_D2A(rcx194, rdx114, r8_109, r9, v195, rcx194, rdx114, r8_109);
            rsp197 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp186) - 8 + 8);
            v15 = rax196;
            if (!v98 && ((edx198 = *reinterpret_cast<void***>(r12_193 + 20) - 1, reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax196 + 20)) <= reinterpret_cast<signed char>(edx198)) || (rdx199 = reinterpret_cast<int32_t>(edx198) + 4, rdx114 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(&rdx199) ^ 31), *reinterpret_cast<int32_t*>(&rdx114 + 4) = 0, reinterpret_cast<signed char>(rdx114) < reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(v98) ^ 31)))) {
                rdx114 = v100;
                *reinterpret_cast<int32_t*>(&rdx114 + 4) = 0;
                if (v96 != rdx114) {
                    rdx114 = reinterpret_cast<void**>(1);
                    *reinterpret_cast<int32_t*>(&rdx114 + 4) = 0;
                    rax201 = __lshift_D2A(rax196, 1, r8_109, r9, v200, rax196, 1);
                    --v93;
                    v15 = rax201;
                    --v96;
                    __Bfree_D2A(r14_189, 1, r8_109, r9, v202, r14_189);
                    __Bfree_D2A(r12_193, 1, r8_109, r9, v203, r12_193);
                    rsp171 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp197) - 8 + 8 - 8 + 8 - 8 + 8);
                    goto addr_40dffa_254;
                } else {
                    --v94;
                    v98 = r13d178;
                }
            }
        } else {
            rax204 = text(rcx194, rdx114, r8_109, r9);
            rsp197 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp186) - 8 + 8);
            edx205 = *reinterpret_cast<void***>(rax204 + 20);
            v15 = rax204;
            edx206 = edx205 - 1;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_193 + 20)) <= reinterpret_cast<signed char>(edx206) || (rdx207 = reinterpret_cast<int32_t>(edx206) + 4, rdx114 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(&rdx207) ^ 31), *reinterpret_cast<int32_t*>(&rdx114 + 4) = 0, reinterpret_cast<signed char>(rdx114) > reinterpret_cast<signed char>(*reinterpret_cast<uint32_t*>(&rcx194) ^ 31))) {
                rdx114 = v98;
                *reinterpret_cast<int32_t*>(&rdx114 + 4) = 0;
                if (!rdx114) {
                    rdx114 = reinterpret_cast<void**>(1);
                    *reinterpret_cast<int32_t*>(&rdx114 + 4) = 0;
                    text(rax204, 1, rax204, 1);
                    rsp197 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp197) - 8 + 8);
                    v179 = 0;
                    ++v93;
                    ++v96;
                } else {
                    eax208 = v94 + 1;
                    v94 = eax208;
                    v98 = reinterpret_cast<void**>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax208 != v17))));
                }
            }
        }
        __Bfree_D2A(r14_189, rdx114, r8_109, r9, v209, r14_189);
        __Bfree_D2A(r12_193, rdx114, r8_109, r9, v210, r12_193);
        rsp171 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp197) - 8 + 8 - 8 + 8);
        if (ebp116) 
            goto addr_40e0e0_221;
        if (reinterpret_cast<int1_t>(reinterpret_cast<unsigned char>(v94) + reinterpret_cast<unsigned char>(v93) == v180) && (zf211 = reinterpret_cast<uint1_t>(v179 == 0), below_or_equal212 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf211)), !zf211)) {
            __asm__("mulsd xmm6, [rip+0x527a]");
            __asm__("movapd xmm0, xmm7");
            __asm__("subsd xmm0, [rip+0x525e]");
            __asm__("movapd xmm1, xmm6");
            __asm__("xorpd xmm1, xmm8");
            __asm__("ucomisd xmm1, xmm0");
            if (below_or_equal212) {
                __asm__("ucomisd xmm0, xmm6");
                if (!below_or_equal212) {
                    *reinterpret_cast<void***>(rdi127) = *reinterpret_cast<void***>(rsi133);
                    rdi127 = rdi127 + 4;
                    rsi133 = rsi133 + 4;
                    __asm__("subsd xmm0, xmm6");
                    __asm__("ucomisd xmm0, xmm7");
                    if (!below_or_equal212) 
                        goto addr_40e2b5_268;
                }
            } else {
                __asm__("ucomisd xmm7, xmm6");
                if (!below_or_equal212) 
                    goto addr_40e2b5_268;
            }
        }
        if (!v98) {
            addr_40dffa_254:
            eax213 = __trailz_D2A(v15, v15);
            rsp171 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp171) - 8 + 8);
            v98 = reinterpret_cast<void**>(0);
            ebp116 = eax213;
            goto addr_40dc45_271;
        } else {
            addr_40dc45_271:
            __Bfree_D2A(rsi133, rdx114, r8_109, r9, v214, rsi133);
            __Bfree_D2A(rdi127, rdx114, r8_109, r9, v215, rdi127);
            __Bfree_D2A(r15_138, rdx114, r8_109, r9, v216, r15_138);
            __Bfree_D2A(rbx167, rdx114, r8_109, r9, v217, rbx167);
            rsp111 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp171) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            continue;
        }
        addr_40e231_242:
        __asm__("cvttsd2si eax, xmm7");
        __asm__("pxor xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, eax");
        v179 = eax176;
        __asm__("subsd xmm7, xmm6");
        if (v57 == 1) {
            zf218 = reinterpret_cast<uint1_t>(r13d178 == 0);
            below_or_equal219 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf218));
            if (!zf218) {
                addr_40e260_273:
                __asm__("ucomisd xmm7, [rip+0x4c00]");
                if (below_or_equal219) {
                    addr_40e28e_274:
                    ebp116 = reinterpret_cast<void**>(0);
                    goto addr_40de52_244;
                } else {
                    addr_40e26a_275:
                    ++v179;
                    __asm__("pxor xmm6, xmm6");
                    __asm__("cvtsi2sd xmm6, edx");
                    v177 = 48 - v177;
                    goto addr_40e28e_274;
                }
            } else {
                ebp116 = reinterpret_cast<void**>(0);
                goto addr_40de52_244;
            }
        } else {
            if (v57 != 2) {
                __asm__("ucomisd xmm7, xmm1");
                if (v57 >= 2) 
                    goto addr_40e26a_275;
                ebp116 = reinterpret_cast<void**>(0);
                goto addr_40de52_244;
            } else {
                zf220 = reinterpret_cast<uint1_t>(r13d178 == 0);
                below_or_equal219 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf220));
                if (!zf220) 
                    goto addr_40e28e_274; else 
                    goto addr_40e260_273;
            }
        }
        addr_40df5b_229:
        if (*reinterpret_cast<uint32_t*>(&r13_168)) {
            *reinterpret_cast<void***>(rdi127) = *reinterpret_cast<void***>(rsi133);
            rdi127 = rdi127 + 4;
            rsi133 = rsi133 + 4;
            v179 = 0;
            ebp116 = reinterpret_cast<void**>(0);
            r13d178 = reinterpret_cast<void**>(0);
            v177 = 32;
            __asm__("movapd xmm7, xmm6");
            goto addr_40de52_244;
        } else {
            ebp116 = reinterpret_cast<void**>(0);
            goto addr_40df66_286;
        }
        addr_40e020_233:
        v12 = 17;
        if (v96 == v100) 
            goto addr_40df66_286;
        edx221 = v17;
        r8_109 = v15;
        if (reinterpret_cast<signed char>(edx221) <= reinterpret_cast<signed char>(31)) {
            r9 = v17;
            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        } else {
            if (*reinterpret_cast<void***>(r8_109 + 24)) {
                addr_40df66_286:
                if (reinterpret_cast<signed char>(r12d140) > reinterpret_cast<signed char>(1)) 
                    goto addr_40df77_290;
                if (*reinterpret_cast<unsigned char*>(&v98) & 1) 
                    goto addr_40e7b4_292; else 
                    goto addr_40df77_290;
            } else {
                rcx169 = v122;
                *reinterpret_cast<int32_t*>(&rax222) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax222) + 4) = 0;
                r9 = rcx169;
                *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                do {
                    edx221 = edx221 - 32;
                    r13_168 = *reinterpret_cast<int32_t*>(&rax222);
                    if (rcx169 == edx221) 
                        break;
                    ++rax222;
                } while (!*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r8_109) + reinterpret_cast<uint64_t>(rax222 * 4) + 20));
                goto addr_40df66_286;
            }
        }
        if (reinterpret_cast<signed char>(r9) <= reinterpret_cast<signed char>(1)) 
            goto addr_40e0ad_297;
        rdx223 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(r8_109 + r13_168 * 4) + 24);
        --r9;
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        __asm__("bsf ecx, eax");
        *rdx223 = *rdx223 >> *reinterpret_cast<signed char*>(&rcx169);
        if (reinterpret_cast<signed char>(r9) > reinterpret_cast<signed char>(rcx169)) 
            goto addr_40df66_286; else 
            goto addr_40e0ad_297;
        addr_40df77_290:
        *reinterpret_cast<void***>(rdi127) = *reinterpret_cast<void***>(rsi133);
        rdi127 = rdi127 + 4;
        rsi133 = rsi133 + 4;
        v179 = 0;
        r13d178 = reinterpret_cast<void**>(1);
        v177 = 16;
        __asm__("movapd xmm7, xmm6");
        goto addr_40de52_244;
        addr_40de25_234:
        *reinterpret_cast<void***>(rdi127) = *reinterpret_cast<void***>(rsi133);
        rdi127 = rdi127 + 4;
        rsi133 = rsi133 + 4;
        r13d178 = reinterpret_cast<void**>(0);
        v12 = 33;
        v179 = 0;
        v177 = 32;
        __asm__("movapd xmm7, xmm6");
        goto addr_40de52_244;
    }
    if (*reinterpret_cast<uint32_t*>(&r13_168)) {
        addr_40e890_306:
        v12 = 17;
        goto addr_40e0e0_221;
    } else {
        v12 = 33;
        if (reinterpret_cast<signed char>(r12d140) > reinterpret_cast<signed char>(1) || (v96 == v100 || *reinterpret_cast<unsigned char*>(&v98) & 1)) {
            addr_40e0e0_221:
            if (!v98) 
                goto addr_40e3c0_308; else 
                goto addr_40e0ec_309;
        } else {
            rax225 = __lshift_D2A(rbx167, 1, r8_109, r9, v224, rbx167, 1);
            rbx167 = rax225;
            eax226 = __cmp_D2A(rax225, r15_138, rax225, r15_138);
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax226) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax226 == 0)) {
                addr_40e3c0_308:
                v98 = v94;
            } else {
                v12 = 17;
                v98 = reinterpret_cast<void**>(0);
                goto addr_40e605_312;
            }
        }
    }
    addr_40e3cb_313:
    eax227 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) - reinterpret_cast<unsigned char>(v98));
    v98 = eax227;
    if (!eax227) {
        addr_40e0ec_309:
        eax228 = v93;
    } else {
        rdx229 = v98;
        *reinterpret_cast<int32_t*>(&rdx229 + 4) = 0;
        if (reinterpret_cast<signed char>(eax227) <= reinterpret_cast<signed char>(0)) {
            edx230 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rdx229));
            text(v15, edx230, v15, edx230);
        } else {
            rax232 = __lshift_D2A(v15, rdx229, r8_109, r9, v231, v15, rdx229);
            v15 = rax232;
        }
        eax228 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v93) - reinterpret_cast<unsigned char>(v98));
        v98 = reinterpret_cast<void**>(0);
        v93 = eax228;
    }
    *reinterpret_cast<void***>(v8) = eax228;
    __Bfree_D2A(rsi133, v8, r8_109, r9, v233, rsi133);
    __Bfree_D2A(rdi127, v8, r8_109, r9, v234, rdi127);
    __Bfree_D2A(r15_138, v8, r8_109, r9, v235, r15_138);
    __Bfree_D2A(v112, v8, r8_109, r9, v236, v112);
    __Bfree_D2A(rbx167, v8, r8_109, r9, v237, rbx167);
    if (reinterpret_cast<signed char>(v7->f8) >= reinterpret_cast<signed char>(v93)) {
        addr_40da95_319:
        r8_29 = v15;
        if (!v98) {
            addr_40d2c0_167:
            if (v6) {
                *v6 = v14;
            }
        } else {
            r9 = v24;
            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
            rcx106 = r8_29;
            if (r9) {
                addr_40d6e0_184:
                *reinterpret_cast<void***>(rcx106 + 20) = reinterpret_cast<void**>(0);
                v12 = 80;
                rax238 = _errno();
                r8_29 = v15;
                *rax238 = 34;
                goto addr_40d2c0_167;
            } else {
                edx108 = v12 & 0xfffffff8;
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r8_29 + 20)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r8_29 + 20) == 0))) {
                    edx108 = edx108 | 2;
                }
                if (v12 & 48) 
                    goto addr_40d341_186; else 
                    goto addr_40dade_325;
            }
        }
    } else {
        eax239 = v7->f12;
        eax240 = reinterpret_cast<unsigned char>(eax239) & 3;
        if (eax240 == 2) {
            if (1) {
                addr_40da58_173:
                v12 = 0xa3;
                *reinterpret_cast<void***>(v15 + 20) = reinterpret_cast<void**>(0);
                rax241 = _errno();
                *rax241 = 34;
                *reinterpret_cast<void***>(v8) = v7->f8 + 1;
                goto addr_40da95_319;
            } else {
                goto addr_40e164_329;
            }
        } else {
            if (eax240 == 3) {
                if (0) 
                    goto addr_40da58_173;
                goto addr_40e164_329;
            } else {
                if (eax240 == 1) 
                    goto addr_40da58_173; else 
                    goto addr_40e164_329;
            }
        }
    }
    if (!1) {
        v12 = v12 | 8;
    }
    addr_40d2ee_16:
    if (r8_29) {
        rdx242 = v17;
        *reinterpret_cast<int32_t*>(&rdx242 + 4) = 0;
        __copybits_D2A(v243, rdx242, r8_29, v243, rdx242, r8_29);
        __Bfree_D2A(v15, rdx242, r8_29, r9, v244, v15);
    }
    __asm__("movaps xmm6, [rsp+0xc0]");
    __asm__("movaps xmm7, [rsp+0xd0]");
    __asm__("movaps xmm8, [rsp+0xe0]");
    return v12;
    addr_40d341_186:
    v12 = edx108 | 64;
    rax245 = _errno();
    *rax245 = 34;
    goto addr_40d356_13;
    addr_40dade_325:
    v12 = edx108;
    goto addr_40d2c0_167;
    addr_40e164_329:
    __Bfree_D2A(v15, v8, r8_109, r9, v246, v15);
    v15 = reinterpret_cast<void**>(0);
    v12 = 17;
    *reinterpret_cast<void***>(v8) = v7->f8;
    *reinterpret_cast<void***>(&rcx247) = v7->f0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx247) + 4) = 0;
    rdx248 = v249 + (static_cast<int32_t>(rcx247 + 31) >> 5) * 4;
    rax250 = v249;
    if (v249 < rdx248) {
        do {
            rax250 = rax250 + 4;
            *reinterpret_cast<uint32_t*>(rax250 - 4) = 0xffffffff;
        } while (rdx248 > rax250);
    }
    ecx251 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rcx247)) & 31;
    if (ecx251) {
        ecx252 = 32 - ecx251;
        *reinterpret_cast<uint32_t*>(rdx248 - 4) = *reinterpret_cast<uint32_t*>(rdx248 - 4) >> *reinterpret_cast<signed char*>(&ecx252);
        goto addr_40da95_319;
    }
    addr_40e605_312:
    v93 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v93) - reinterpret_cast<unsigned char>(v17));
    rdx253 = v17;
    *reinterpret_cast<int32_t*>(&rdx253 + 4) = 0;
    v94 = v17;
    rax254 = __set_ones_D2A(v15, rdx253, r8_109, r9, v15, rdx253, r8_109);
    v15 = rax254;
    goto addr_40e0e0_221;
    addr_40e633_224:
    if (!*reinterpret_cast<uint32_t*>(&r13_168)) {
        if (r12d140 == 1) {
            v12 = 1;
            if (v96 == v100) {
                v12 = 33;
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v15 + 20) == 1)) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v15 + 24) == 1)) {
                        r12d140 = v24;
                    }
                    v24 = r12d140;
                    goto addr_40e0e0_221;
                }
            }
        } else {
            v12 = 33;
        }
    } else {
        r8_109 = v98;
        *reinterpret_cast<int32_t*>(&r8_109 + 4) = 0;
        if (!r8_109) 
            goto addr_40e8a0_350;
        edx255 = v94;
        r8_109 = v15;
        rax256 = reinterpret_cast<void***>(r8_109 + 24);
        rcx257 = rax256 + (reinterpret_cast<signed char>(edx255) >> 5) * 4;
        if (reinterpret_cast<uint64_t>(rax256) >= reinterpret_cast<uint64_t>(rcx257)) 
            goto addr_40e693_352; else 
            goto addr_40e66e_353;
    }
    addr_40e82f_354:
    if (reinterpret_cast<signed char>(v17) <= reinterpret_cast<signed char>(r12d140)) 
        goto addr_40e841_355;
    if (!(*reinterpret_cast<unsigned char*>(&v98) & 1)) 
        goto addr_40e3c0_308;
    addr_40e841_355:
    r8_109 = v15;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r8_109 + 24)) & 1)) 
        goto addr_40e0e0_221;
    if (*reinterpret_cast<uint32_t*>(&r13_168)) {
        rax258 = text(r8_109, r8_109);
        v15 = rax258;
        __asm__("bsr eax, [rax+rdx*4+0x18]");
        if ((reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(v94)) & 31) != (*reinterpret_cast<uint32_t*>(&rax258) ^ 31)) {
            ++v94;
        }
        v12 = 33;
        goto addr_40e0e0_221;
    }
    if (r12d140 - 1) {
        rax259 = reinterpret_cast<void***>(r8_109 + 24);
        rcx260 = rax259 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r8_109 + 20)) * 4;
        do {
            if (*rax259) 
                break;
            rax259 = rax259 + 4;
            *reinterpret_cast<uint16_t*>(rax259 + 0xfffffffffffffffc) = reinterpret_cast<uint16_t>(0xffffffff);
        } while (reinterpret_cast<uint64_t>(rcx260) > reinterpret_cast<uint64_t>(rax259));
        goto addr_40e890_306;
        *rax259 = *rax259 - 1;
        goto addr_40e890_306;
    }
    addr_40e7c4_366:
    *reinterpret_cast<void***>(r8_109 + 20) = reinterpret_cast<void**>(0);
    v12 = 80;
    v93 = v100;
    goto addr_40e0e0_221;
    addr_40e693_352:
    ecx261 = reinterpret_cast<unsigned char>(edx255) & 31;
    if (!ecx261 || !((0xffffffff << *reinterpret_cast<unsigned char*>(&ecx261) | reinterpret_cast<unsigned char>(*rax256)) + 1)) {
        *reinterpret_cast<void***>(&rcx262) = v100;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx262) + 4) = 0;
        *reinterpret_cast<void***>(r8_109 + 20) = reinterpret_cast<void**>(0x100000001);
        *reinterpret_cast<void***>(&rax263) = v17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax263) + 4) = 0;
        v12 = 33;
        v93 = reinterpret_cast<void**>(static_cast<uint32_t>(rax263 + rcx262 - 1));
        goto addr_40e3cb_313;
    } else {
        addr_40e8a0_350:
        v12 = 17;
        goto addr_40e82f_354;
    }
    addr_40e66e_353:
    rax256 = reinterpret_cast<void***>(r8_109 + 28);
    if (*reinterpret_cast<void***>(r8_109 + 24) == 0xffffffff) {
        do {
            if (reinterpret_cast<uint64_t>(rax256) >= reinterpret_cast<uint64_t>(rcx257)) 
                goto addr_40e693_352;
            rax256 = rax256 + 4;
        } while (*reinterpret_cast<uint16_t*>(rax256 + 0xfffffffffffffffc) == 0xffffffff);
        goto addr_40e8a0_350;
    } else {
        goto addr_40e8a0_350;
    }
    addr_40e2b5_268:
    v12 = v12 | v177;
    goto addr_40e0e0_221;
    addr_40e7b4_292:
    r8_109 = v15;
    v98 = reinterpret_cast<void**>(1);
    goto addr_40e7c4_366;
    addr_40e57e_231:
    v12 = (eax173 - (eax173 + reinterpret_cast<uint1_t>(eax173 < eax173 + reinterpret_cast<uint1_t>(eax173 < 1))) & 16) + 17;
    goto addr_40e0e0_221;
    addr_40e0ad_297:
    v93 = v96 - 1;
    rdx264 = v17;
    *reinterpret_cast<int32_t*>(&rdx264 + 4) = 0;
    v94 = v17;
    rax265 = __set_ones_D2A(r8_109, rdx264, r8_109, r9);
    v15 = rax265;
    goto addr_40e0e0_221;
    addr_40d968_117:
    *reinterpret_cast<void***>(&rax266) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp63) >> 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax266) + 4) = 0;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax266)) <= reinterpret_cast<signed char>(15)) {
        *reinterpret_cast<int32_t*>(&rcx267) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx267) + 4) = 0;
    } else {
        r10d268 = static_cast<uint32_t>(rax266 - 16);
        *reinterpret_cast<int32_t*>(&r8_269) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_269) + 4) = 0;
        r9 = reinterpret_cast<void**>(r10d268 & 15);
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        rdi59->f0 = *reinterpret_cast<void***>(rsi60);
        rdi59 = reinterpret_cast<struct s38*>(&rdi59->f4);
        rsi60 = rsi60 + 4;
        do {
            *reinterpret_cast<void***>(&rax266) = *reinterpret_cast<void***>(&rax266) - 16;
            ecx270 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v13) + 4) >> 20;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v13) + 4) = 0x3ff00000;
            *reinterpret_cast<uint32_t*>(&rcx271) = ecx270 & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx271) + 4) = 0;
            rdi59->f0 = *reinterpret_cast<void***>(rsi60);
            rdi272 = reinterpret_cast<struct s39*>(&rdi59->f4);
            rsi273 = rsi60 + 4;
            *reinterpret_cast<int32_t*>(&rcx267) = static_cast<int32_t>(r8_269 + rcx271 - 0x3ff);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx267) + 4) = 0;
            __asm__("mulsd xmm0, xmm1");
            *reinterpret_cast<int32_t*>(&r8_269) = *reinterpret_cast<int32_t*>(&rcx267);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_269) + 4) = 0;
            rdi272->f0 = *reinterpret_cast<void***>(rsi273);
            rdi59 = reinterpret_cast<struct s38*>(&rdi272->f4);
            rsi60 = rsi273 + 4;
        } while (r9 != *reinterpret_cast<void***>(&rax266));
        *reinterpret_cast<void***>(&rax266) = reinterpret_cast<void**>(r10d268 & 15);
    }
    *reinterpret_cast<uint32_t*>(&r8_274) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v13) + 4) >> 20 & 0x7ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_274) + 4) = 0;
    rdi59->f0 = *reinterpret_cast<void***>(rsi60);
    rdi78 = reinterpret_cast<struct s39*>(&rdi59->f4);
    rsi79 = rsi60 + 4;
    ebp63 = reinterpret_cast<void*>(static_cast<uint32_t>(rcx267 + r8_274 - 0x3ff));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax266)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax266) == 0)) 
        goto addr_40d5df_144;
    __asm__("movapd xmm1, xmm0");
    ecx275 = 0;
    do {
        if (*reinterpret_cast<unsigned char*>(&rax266) & 1) {
            __asm__("mulsd xmm1, [rdx]");
            ecx275 = 1;
        }
        *reinterpret_cast<void***>(&rax266) = reinterpret_cast<void**>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax266)) >> 1);
    } while (*reinterpret_cast<void***>(&rax266));
    addr_40d877_392:
    if (*reinterpret_cast<signed char*>(&ecx275)) {
        rdi78->f0 = *reinterpret_cast<void***>(rsi79);
        rdi78 = reinterpret_cast<struct s39*>(&rdi78->f4);
        rsi79 = rsi79 + 4;
        __asm__("movapd xmm0, xmm1");
        goto addr_40d5df_144;
    }
    addr_40d855_145:
    __asm__("movapd xmm1, xmm0");
    ecx275 = 0;
    do {
        if (*reinterpret_cast<unsigned char*>(&rax69) & 1) {
            __asm__("mulsd xmm1, [rdx]");
            ecx275 = 1;
        }
        *reinterpret_cast<void***>(&rax69) = reinterpret_cast<void**>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax69)) >> 1);
    } while (*reinterpret_cast<void***>(&rax69));
    goto addr_40d877_392;
    addr_40e468_150:
    rcx62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) + 0xb0);
    rdi80->f0 = *reinterpret_cast<void***>(rsi81);
    rdi59 = reinterpret_cast<struct s38*>(&rdi80->f4);
    rsi60 = rsi81 + 4;
    goto addr_40d4b1_166;
    addr_40d0cd_100:
    rbx276 = reinterpret_cast<struct s29**>(reinterpret_cast<int64_t>(rsp11) + 0xa8);
    eax277 = __match_D2A(rbx276, "an");
    if (!eax277) {
        addr_40d2a0_58:
        r8_29 = reinterpret_cast<void**>(0);
        v14 = rbp5;
        v12 = 6;
        goto addr_40d2c0_167;
    } else {
        v12 = 4;
        r8_29 = reinterpret_cast<void**>(0);
        eax278 = v7->f8;
        *reinterpret_cast<void***>(v8) = eax278 + 1;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v14) == 40)) 
            goto addr_40d2c0_167;
        eax280 = text(rbx276, v7, v279);
        v12 = eax280;
    }
    addr_40d14b_405:
    r8_29 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(v8) = v7->f8 + 1;
    goto addr_40d2c0_167;
    addr_40d0b5_101:
    if (*reinterpret_cast<int32_t*>(&rax25) <= reinterpret_cast<int32_t>(78)) {
        if (*reinterpret_cast<uint32_t*>(&rax25) != 73) {
            goto addr_40d2a0_58;
        }
    }
    if (*reinterpret_cast<uint32_t*>(&rax25) == 0x69) {
        rbx281 = reinterpret_cast<struct s29**>(reinterpret_cast<int64_t>(rsp11) + 0xa8);
        eax282 = __match_D2A(rbx281, "nf");
        if (!eax282) 
            goto addr_40d2a0_58;
    } else {
        if (*reinterpret_cast<uint32_t*>(&rax25) != 0x6e) 
            goto addr_40d2a0_58; else 
            goto addr_40d0cd_100;
    }
    --v14;
    eax283 = __match_D2A(rbx281, "inity");
    if (!eax283) {
        ++v14;
    }
    v12 = 3;
    goto addr_40d14b_405;
}

int64_t strtoul = 0x3dcd9ee;

int32_t strtoul(void** rcx, void*** rdx, int64_t r8, void** r9, int64_t a5) {
    goto strtoul;
}

/* .text */
void** text(int64_t rcx, uint32_t edx, struct s19* r8, uint32_t* r9) {
    uint32_t edi5;
    int64_t rax6;

    __asm__("movaps [rsp+0x90], xmm6");
    edi5 = *r9;
    *r9 = edi5 & 0xffffffcf;
    *reinterpret_cast<uint32_t*>(&rax6) = edi5 & 7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax6) > 4) {
        __asm__("movaps xmm6, [rsp+0x90]");
        return 0;
    } else {
        goto *reinterpret_cast<int32_t*>(0x412b30 + rax6 * 4) + 0x412b30;
    }
}

int64_t fputc = 0x3dcd924;

void fputc() {
    goto fputc;
}

void __pformat_emit_inf_or_nan(uint32_t ecx, void** rdx, void** r8, void** r9, ...) {
    void* rsp5;
    void** r11d6;
    void* rcx7;
    void* r10_8;
    uint32_t r11d9;
    void* r9_10;
    uint32_t eax11;
    void* rdx12;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 56);
    r11d6 = *reinterpret_cast<void***>(r8 + 8);
    *reinterpret_cast<void***>(r8 + 16) = reinterpret_cast<void**>(0xffffffff);
    if (!ecx) {
        if (!(reinterpret_cast<unsigned char>(r11d6) & 0x100)) {
            if (!(*reinterpret_cast<unsigned char*>(&r11d6) & 64)) {
                rcx7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 44);
                r10_8 = rcx7;
            } else {
                rcx7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 44);
                r10_8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx7) + 1);
            }
        } else {
            rcx7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 44);
            r10_8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx7) + 1);
        }
    } else {
        rcx7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 44);
        r10_8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx7) + 1);
    }
    r11d9 = reinterpret_cast<unsigned char>(r11d6) & 32;
    *reinterpret_cast<int32_t*>(&r9_10) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_10) + 4) = 0;
    do {
        eax11 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(r9_10))) & 0xffffffdf | r11d9;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(r10_8) + reinterpret_cast<uint64_t>(r9_10)) = *reinterpret_cast<signed char*>(&eax11);
        r9_10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r9_10) + 1);
    } while (!reinterpret_cast<int1_t>(r9_10 == 3));
    rdx12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r10_8) + 3 - reinterpret_cast<int64_t>(rcx7));
    __pformat_putchars(rcx7, *reinterpret_cast<void***>(&rdx12), r8);
    return;
}

int64_t wcslen = 0x3dcda22;

void** wcslen(uint16_t* rcx) {
    goto wcslen;
}

int64_t strerror = 0x3dcd9c4;

void** strerror(int64_t rcx) {
    goto strerror;
}

uint64_t __b2d_D2A(void** rcx, uint32_t* rdx, void** r8d) {
    void*** r11_4;
    void*** r10_5;
    void** r9d6;
    void*** rbx7;
    int64_t r8_8;
    uint32_t edx9;
    uint32_t ecx10;
    uint64_t rax11;
    int32_t ecx12;
    uint64_t r9_13;
    uint32_t r8d14;
    uint64_t rdx15;
    uint32_t ecx16;
    uint64_t rdx17;
    uint64_t rax18;
    uint64_t rax19;
    uint64_t rax20;
    uint32_t ecx21;
    uint32_t ebx22;
    uint32_t ecx23;
    uint32_t ecx24;
    uint64_t rax25;
    uint32_t ecx26;

    r11_4 = reinterpret_cast<void***>(rcx + 24);
    r10_5 = r11_4 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20)) * 4;
    r9d6 = r10_5[0xfffffffffffffffc];
    rbx7 = r10_5 + 0xfffffffffffffffc;
    __asm__("bsr r8d, r9d");
    *reinterpret_cast<uint32_t*>(&r8_8) = reinterpret_cast<unsigned char>(r8d) ^ 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
    *rdx = 32 - *reinterpret_cast<uint32_t*>(&r8_8);
    if (*reinterpret_cast<int32_t*>(&r8_8) <= reinterpret_cast<int32_t>(10)) {
        edx9 = 0;
        ecx10 = 11 - *reinterpret_cast<uint32_t*>(&r8_8);
        *reinterpret_cast<uint32_t*>(&rax11) = reinterpret_cast<unsigned char>(r9d6) >> *reinterpret_cast<signed char*>(&ecx10) | 0x3ff00000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
        if (reinterpret_cast<uint64_t>(r11_4) < reinterpret_cast<uint64_t>(rbx7)) {
            edx9 = reinterpret_cast<unsigned char>(r10_5[0xfffffffffffffff8]) >> *reinterpret_cast<signed char*>(&ecx10);
        }
        ecx12 = static_cast<int32_t>(r8_8 + 21);
        *reinterpret_cast<uint32_t*>(&r9_13) = reinterpret_cast<unsigned char>(r9d6) << *reinterpret_cast<unsigned char*>(&ecx12) | edx9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_13) + 4) = 0;
        __asm__("movd xmm0, rax");
        return rax11 << 32 | r9_13;
    }
    r8d14 = *reinterpret_cast<uint32_t*>(&r8_8) - 11;
    if (reinterpret_cast<uint64_t>(r11_4) >= reinterpret_cast<uint64_t>(rbx7)) {
        *reinterpret_cast<void***>(&rdx15) = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
        if (r8d14) {
            ecx16 = r8d14;
            *reinterpret_cast<uint32_t*>(&rdx17) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rax18) = reinterpret_cast<unsigned char>(r9d6) << *reinterpret_cast<unsigned char*>(&ecx16) | 0x3ff00000;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            rax19 = rax18 << 32;
        } else {
            addr_40c78b_8:
            *reinterpret_cast<uint32_t*>(&rax20) = reinterpret_cast<unsigned char>(r9d6) | 0x3ff00000;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            __asm__("movd xmm0, rax");
            return rax20 << 32 | rdx15;
        }
    } else {
        *reinterpret_cast<void***>(&rdx15) = r10_5[0xfffffffffffffff8];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
        if (!r8d14) 
            goto addr_40c78b_8;
        ecx21 = r8d14;
        ebx22 = 32 - r8d14;
        ecx23 = ebx22;
        ecx24 = r8d14;
        *reinterpret_cast<uint32_t*>(&rax25) = reinterpret_cast<unsigned char>(r9d6) << *reinterpret_cast<unsigned char*>(&ecx21) | 0x3ff00000 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdx15)) >> *reinterpret_cast<signed char*>(&ecx23);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdx17) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdx15)) << *reinterpret_cast<unsigned char*>(&ecx24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
        rax19 = rax25 << 32;
        if (reinterpret_cast<uint64_t>(r11_4) < reinterpret_cast<uint64_t>(r10_5 + 0xfffffffffffffff8)) {
            ecx26 = ebx22;
            *reinterpret_cast<uint32_t*>(&rdx17) = *reinterpret_cast<uint32_t*>(&rdx17) | *reinterpret_cast<uint32_t*>(r10_5 + 0xfffffffffffffff4) >> *reinterpret_cast<signed char*>(&ecx26);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
        }
    }
    __asm__("movd xmm0, rax");
    return rax19 & 0xffffffff00000000 | rdx17;
}

void** __diff_D2A(void** rcx, void** rdx, void** r8, void** r9, int64_t a5, ...) {
    int64_t rax6;
    void** rsi7;
    void** rbp8;
    void** ebx9;
    int1_t sf10;
    void** ecx11;
    int64_t v12;
    void** rax13;
    int64_t rdx14;
    void*** rcx15;
    int64_t r8_16;
    void*** r11_17;
    void*** r10_18;
    void*** rdi19;
    int64_t rbx20;
    void*** rbp21;
    void*** r9_22;
    int64_t rsi23;
    int64_t rdx24;
    uint64_t rdx25;
    uint16_t esi26;
    uint64_t r8_27;
    void** rax28;
    void* rcx29;
    void** rax30;
    void*** rcx31;
    uint16_t* r10_32;
    void*** r11_33;
    int64_t rdx34;
    uint64_t rdx35;
    uint64_t r8_36;
    int64_t v37;

    rax6 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 20));
    rsi7 = rcx;
    rbp8 = rdx;
    ebx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 20)) - *reinterpret_cast<uint32_t*>(&rax6));
    sf10 = reinterpret_cast<signed char>(ebx9) < reinterpret_cast<signed char>(0);
    if (ebx9) {
        ebx9 = reinterpret_cast<void**>(0);
        if (!sf10) {
            addr_40c591_3:
            ecx11 = *reinterpret_cast<void***>(rsi7 + 8);
            rax13 = __Balloc_D2A(ecx11, rdx, r8, r9, v12);
            if (!rax13) {
                addr_40c661_4:
                return rax13;
            } else {
                rdx14 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rsi7 + 20));
                rcx15 = reinterpret_cast<void***>(rsi7 + 24);
                *reinterpret_cast<void***>(rax13 + 16) = ebx9;
                *reinterpret_cast<uint32_t*>(&r8_16) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0;
                r11_17 = reinterpret_cast<void***>(rbp8 + 24);
                r10_18 = reinterpret_cast<void***>(rax13 + 24);
                rdi19 = rcx15 + rdx14 * 4;
                rbx20 = rdx14;
                rbp21 = r11_17 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbp8 + 20)) * 4;
                while (r9_22 = rcx15 + 4, r11_17 = r11_17 + 4, *reinterpret_cast<uint16_t*>(&rsi23) = *reinterpret_cast<uint16_t*>(r11_17 + 0xfffffffffffffffc), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = 0, r10_18 = r10_18 + 4, *reinterpret_cast<uint16_t*>(&rdx24) = *reinterpret_cast<uint16_t*>(r9_22 + 0xfffffffffffffffc), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = 0, rdx25 = reinterpret_cast<uint64_t>(rdx24 - rsi23 - r8_16), esi26 = *reinterpret_cast<uint16_t*>(&rdx25), *reinterpret_cast<uint16_t*>(r10_18 + 0xfffffffffffffffc) = *reinterpret_cast<uint16_t*>(&rdx25), r8_27 = rdx25 >> 32, *reinterpret_cast<uint32_t*>(&r8_16) = *reinterpret_cast<uint32_t*>(&r8_27) & 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0, reinterpret_cast<uint64_t>(rbp21) > reinterpret_cast<uint64_t>(r11_17)) {
                    rcx15 = r9_22;
                }
                if (reinterpret_cast<uint64_t>(rdi19) > reinterpret_cast<uint64_t>(r9_22)) 
                    goto addr_40c608_9;
            }
        } else {
            addr_40c67b_10:
            rax28 = rsi7;
            ebx9 = reinterpret_cast<void**>(1);
            rsi7 = rbp8;
            rbp8 = rax28;
            goto addr_40c591_3;
        }
    } else {
        rdx = rcx + 24;
        rcx29 = reinterpret_cast<void*>(rax6 * 4);
        rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(rcx29));
        rcx31 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbp8) + reinterpret_cast<uint64_t>(rcx29) + 24);
        do {
            rcx31 = rcx31 - 4;
            rax30 = rax30 - 4;
            if (*reinterpret_cast<void***>(rax30) != *rcx31) 
                goto addr_40c58b_13;
        } while (reinterpret_cast<unsigned char>(rdx) < reinterpret_cast<unsigned char>(rax30));
        goto addr_40c690_15;
    }
    addr_40c645_16:
    r10_32 = reinterpret_cast<uint16_t*>(r10_18 - 4);
    if (!esi26) {
        do {
            r10_32 = r10_32 - 2;
            *reinterpret_cast<void***>(&rbx20) = *reinterpret_cast<void***>(&rbx20) - 1;
        } while (!*r10_32);
    }
    *reinterpret_cast<void***>(rax13 + 20) = *reinterpret_cast<void***>(&rbx20);
    goto addr_40c661_4;
    addr_40c608_9:
    r11_33 = r10_18;
    do {
        r9_22 = r9_22 + 4;
        *reinterpret_cast<uint16_t*>(&rdx34) = *reinterpret_cast<uint16_t*>(r9_22 + 0xfffffffffffffffc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = 0;
        r11_33 = r11_33 + 4;
        rdx35 = reinterpret_cast<uint64_t>(rdx34 - r8_16);
        esi26 = *reinterpret_cast<uint16_t*>(&rdx35);
        *reinterpret_cast<uint16_t*>(r11_33 + 0xfffffffffffffffc) = *reinterpret_cast<uint16_t*>(&rdx35);
        r8_36 = rdx35 >> 32;
        *reinterpret_cast<uint32_t*>(&r8_16) = *reinterpret_cast<uint32_t*>(&r8_36) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0;
    } while (reinterpret_cast<uint64_t>(rdi19) > reinterpret_cast<uint64_t>(r9_22));
    r10_18 = r10_18 + (reinterpret_cast<uint64_t>(rdi19) - reinterpret_cast<uint64_t>(rcx15) + 0xfffffffffffffffb >> 2) * 4 + 4;
    goto addr_40c645_16;
    addr_40c58b_13:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax30)) < reinterpret_cast<unsigned char>(*rcx31)) 
        goto addr_40c67b_10; else 
        goto addr_40c591_3;
    addr_40c690_15:
    rax13 = __Balloc_D2A(0, rdx, r8, r9, v37);
    if (rax13) {
        *reinterpret_cast<void***>(rax13 + 20) = reinterpret_cast<void**>(1);
        return rax13;
    }
}

/* .text */
uint32_t text(void*** rcx, struct s17* rdx, void** r8, void** r9) {
    void*** r13_5;
    struct s17* rbp6;
    void** v7;
    void** r12_8;
    struct s16* rax9;
    struct s31* rsi10;
    void** r14_11;
    void** rax12;
    uint32_t ecx13;
    void** rdx14;
    void** r8_15;
    void** rax16;
    void* rax17;
    void** r11_18;
    void** rdi19;
    int32_t r10d20;
    void** rax21;
    uint32_t r10d22;
    uint32_t ebx23;
    void** rbx24;
    void** v25;
    uint32_t eax26;
    void** rcx27;
    void* rax28;
    void** r15d29;
    void** rdx30;
    int32_t ecx31;
    int32_t r11d32;
    void* rdx33;
    int64_t r11_34;
    uint32_t edx35;
    int64_t rdx36;
    uint32_t ebx37;
    void** ecx38;
    void* rax39;
    int32_t eax40;
    int32_t v41;
    int32_t* rax42;
    int32_t v43;
    void* v44;
    int32_t* rax45;
    int32_t v46;
    int64_t v47;
    void** rax48;
    int1_t zf49;
    void** r13_50;
    void*** v51;
    void** r9_52;
    void*** r8_53;
    void*** r14_54;
    uint32_t eax55;
    void** r11d56;
    int32_t r10d57;
    void* rax58;
    void** r15_59;
    int32_t ecx60;
    void*** rcx61;
    int64_t rsi62;
    int64_t r8_63;
    void** r8_64;
    int64_t rbx65;
    uint16_t eax66;
    uint16_t edi67;
    void** ecx68;
    uint16_t eax69;
    void** ebx70;
    int64_t v71;
    void** rax72;
    void** eax73;
    int64_t rbx74;
    void** r14d75;
    uint16_t eax76;
    void** ecx77;
    void** rdx78;
    void** v79;
    uint16_t eax80;
    int32_t v81;
    int64_t v82;
    int32_t v83;
    int32_t v84;
    int64_t rdi85;
    void** rax86;
    void*** rax87;
    void** ecx88;
    int32_t ebx89;
    uint32_t esi90;
    int64_t v91;
    int32_t* rax92;
    int64_t v93;
    void** rax94;
    uint32_t ebx95;
    int64_t rsi96;
    void** edi97;
    void** ecx98;
    int32_t eax99;
    int64_t v100;
    void** rax101;
    int64_t rcx102;
    void*** rdx103;
    void*** rcx104;
    uint32_t ecx105;
    void* rcx106;
    uint32_t ecx107;
    void* rdx108;
    uint1_t zf109;

    r13_5 = rcx;
    rbp6 = rdx;
    v7 = r8;
    r12_8 = r9;
    rax9 = localeconv();
    rsi10 = refptr___hexdig_D2A;
    r14_11 = rax9->f0;
    if (!rsi10->f48) {
        text();
    }
    rax12 = *r13_5;
    *reinterpret_cast<void***>(r12_8) = reinterpret_cast<void**>(0);
    ecx13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax12 + 2));
    if (*reinterpret_cast<unsigned char*>(&ecx13) != 48) {
        rdx14 = rax12 + 2;
        *reinterpret_cast<int32_t*>(&r8_15) = 0;
        *reinterpret_cast<int32_t*>(&r8_15 + 4) = 0;
    } else {
        rax16 = rax12 + 3;
        *reinterpret_cast<int32_t*>(&r8_15) = 0;
        do {
            rdx14 = rax16;
            ++rax16;
            ecx13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax16 + 0xffffffffffffffff));
            *reinterpret_cast<int32_t*>(&r8_15) = *reinterpret_cast<int32_t*>(&r8_15) + 1;
            *reinterpret_cast<int32_t*>(&r8_15 + 4) = 0;
        } while (*reinterpret_cast<unsigned char*>(&ecx13) == 48);
    }
    *reinterpret_cast<uint32_t*>(&rax17) = *reinterpret_cast<unsigned char*>(&ecx13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_18) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_11));
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<int64_t>(rax17))) {
        *reinterpret_cast<int32_t*>(&r8_15) = *reinterpret_cast<int32_t*>(&r8_15) + 1;
        *reinterpret_cast<int32_t*>(&r8_15 + 4) = 0;
        rdi19 = rdx14;
        r10d20 = 0;
        *reinterpret_cast<int32_t*>(&rax21) = 0;
        *reinterpret_cast<int32_t*>(&rax21 + 4) = 0;
    } else {
        if (!*reinterpret_cast<unsigned char*>(&r11_18) || *reinterpret_cast<unsigned char*>(&ecx13) != *reinterpret_cast<unsigned char*>(&r11_18)) {
            addr_40ef45_10:
            rax21 = rdx14;
            goto addr_40ef48_11;
        } else {
            rax21 = rdx14 + 1;
            r9 = r14_11 + 1;
            do {
                r10d22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r9));
                ebx23 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax21));
                if (!*reinterpret_cast<unsigned char*>(&r10d22)) 
                    goto addr_40ed8e_14;
                ++rax21;
                ++r9;
            } while (*reinterpret_cast<unsigned char*>(&r10d22) == *reinterpret_cast<unsigned char*>(&ebx23));
            goto addr_40ef45_10;
        }
    }
    addr_40ef03_16:
    while (*reinterpret_cast<void**>(&r9) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx14 + 1)))), *reinterpret_cast<int32_t*>(&r9 + 4) = 0, rbx24 = rdx14 + 1, !!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<unsigned char>(r9))) {
        rdx14 = rbx24;
    }
    if (*reinterpret_cast<unsigned char*>(&r9) != *reinterpret_cast<unsigned char*>(&r11_18)) {
        addr_40ede2_19:
        *reinterpret_cast<uint32_t*>(&r11_18) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24));
        v25 = reinterpret_cast<void**>(0);
        if (!rax21) {
            addr_40edfc_20:
            if (*reinterpret_cast<unsigned char*>(&r11_18) != 80 && *reinterpret_cast<unsigned char*>(&r11_18) != 0x70) {
                *r13_5 = rbx24;
                if (r10d20) 
                    goto addr_40ef30_22; else 
                    goto addr_40ee1d_23;
            }
        } else {
            addr_40edf3_24:
            v25 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(&rax21) - *reinterpret_cast<uint32_t*>(&rbx24) << 2);
            goto addr_40edfc_20;
        }
    } else {
        if (!rax21) {
            eax26 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_11 + 1));
            if (!*reinterpret_cast<void***>(&eax26)) {
                rax21 = rdx14 + 2;
                *reinterpret_cast<uint32_t*>(&r11_18) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24 + 1));
                goto addr_40f341_28;
            } else {
                rcx27 = r14_11 + 2;
                rdx14 = rdx14 + 3;
                if (*reinterpret_cast<void***>(rbx24 + 1) != *reinterpret_cast<void***>(&eax26)) {
                    v25 = reinterpret_cast<void**>(0);
                    goto addr_40edfc_20;
                }
                do {
                    *reinterpret_cast<void**>(&r9) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx27))));
                    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                    rax21 = rdx14;
                    *reinterpret_cast<uint32_t*>(&r11_18) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx14));
                    if (!*reinterpret_cast<unsigned char*>(&r9)) 
                        goto addr_40f341_28;
                    ++rdx14;
                    ++rcx27;
                } while (*reinterpret_cast<unsigned char*>(&r9) == *reinterpret_cast<unsigned char*>(&r11_18));
                goto addr_40f501_34;
            }
        } else {
            addr_40ef25_35:
            *reinterpret_cast<uint32_t*>(&r11_18) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24));
            goto addr_40edf3_24;
        }
    }
    addr_40ef7e_36:
    *reinterpret_cast<uint32_t*>(&rax28) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24 + 1));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
    if (*reinterpret_cast<signed char*>(&rax28) == 43) {
        r15d29 = reinterpret_cast<void**>(0);
        goto addr_40ef98_38;
    }
    r15d29 = reinterpret_cast<void**>(1);
    if (*reinterpret_cast<signed char*>(&rax28) != 45) {
        rdx30 = rbx24 + 1;
        r15d29 = reinterpret_cast<void**>(0);
    } else {
        addr_40ef98_38:
        *reinterpret_cast<uint32_t*>(&rax28) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24 + 2));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
        rdx30 = rbx24 + 2;
    }
    *reinterpret_cast<void**>(&r9) = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<int64_t>(rax28))));
    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
    ecx31 = 0;
    rax21 = rbx24;
    r11d32 = static_cast<int32_t>(reinterpret_cast<uint64_t>(r9 + 0xffffffffffffffff));
    if (*reinterpret_cast<unsigned char*>(&r11d32) <= 24) {
        rax21 = rdx30 + 1;
        *reinterpret_cast<void**>(&r9) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r9)) - 16);
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdx33) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx30 + 1));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = 0;
        while (*reinterpret_cast<uint32_t*>(&r11_34) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<int64_t>(rdx33)), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_34) + 4) = 0, edx35 = *reinterpret_cast<uint32_t*>(&r11_34) - 1, *reinterpret_cast<unsigned char*>(&edx35) <= 24) {
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r9)) & 0xf8000000) {
                ecx31 = 1;
            }
            ++rax21;
            *reinterpret_cast<int32_t*>(&rdx36) = static_cast<int32_t>(reinterpret_cast<uint64_t>(r9 + reinterpret_cast<unsigned char>(r9) * 4));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = 0;
            *reinterpret_cast<void**>(&r9) = reinterpret_cast<void*>(static_cast<uint32_t>(r11_34 + rdx36 * 2 - 16));
            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rdx33) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax21));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = 0;
        }
        if (!r15d29) 
            goto addr_40f2ab_48;
    } else {
        addr_40efb8_49:
        rdx14 = rdi19 + 0xffffffffffffffff;
        if (!*reinterpret_cast<int32_t*>(&r8_15)) {
            rax21 = rdx14;
            goto addr_40efc3_51;
        }
    }
    *reinterpret_cast<void**>(&r9) = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r9)));
    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
    addr_40f2ab_48:
    v25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v25) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r9)));
    goto addr_40efb8_49;
    addr_40efc3_51:
    *r13_5 = rax21;
    if (r10d20) {
        addr_40ef30_22:
        ebx37 = 0;
    } else {
        if (!ecx31) {
            addr_40ee1d_23:
            ecx38 = reinterpret_cast<void**>(0);
            rax39 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rbx24) - reinterpret_cast<unsigned char>(rdi19));
            eax40 = *reinterpret_cast<int32_t*>(&rax39) - 1;
            if (eax40 > 7) {
                do {
                    eax40 = eax40 >> 1;
                    ++ecx38;
                } while (eax40 > 7);
                goto addr_40ee3a_56;
            }
        } else {
            if (r15d29) {
                if (rbp6->f12 == 2) {
                    if (v41) {
                        addr_40f132_60:
                        rax42 = _errno();
                        ebx37 = 80;
                        *rax42 = 34;
                    } else {
                        goto addr_40f17b_62;
                    }
                } else {
                    if (!reinterpret_cast<int1_t>(rbp6->f12 == 3)) 
                        goto addr_40f132_60;
                    if (!v43) 
                        goto addr_40f132_60; else 
                        goto addr_40f17b_62;
                }
            } else {
                if (rbp6->f12 == 2) {
                    *reinterpret_cast<void**>(&r9) = v44;
                    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                    if (!*reinterpret_cast<void**>(&r9)) {
                        addr_40f230_67:
                        rax45 = _errno();
                        ebx37 = 0xa3;
                        *rax45 = 34;
                    } else {
                        goto addr_40efff_69;
                    }
                } else {
                    if (rbp6->f12 == 3) {
                        *reinterpret_cast<int32_t*>(&r8_15) = v46;
                        *reinterpret_cast<int32_t*>(&r8_15 + 4) = 0;
                        if (*reinterpret_cast<int32_t*>(&r8_15)) 
                            goto addr_40f230_67;
                        goto addr_40efff_69;
                    } else {
                        if (rbp6->f12 == 1) 
                            goto addr_40f230_67; else 
                            goto addr_40efff_69;
                    }
                }
            }
        }
    }
    addr_40ef32_74:
    return ebx37;
    addr_40ee3a_56:
    rax48 = __Balloc_D2A(ecx38, rdx14, r8_15, r9, v47);
    zf49 = *reinterpret_cast<void***>(r14_11 + 1) == 0;
    r13_50 = rax48;
    v51 = reinterpret_cast<void***>(rax48 + 24);
    if (zf49) {
        *reinterpret_cast<int32_t*>(&r9_52) = 0;
        *reinterpret_cast<int32_t*>(&r9_52 + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&r9_52) = 1;
        *reinterpret_cast<int32_t*>(&r9_52 + 4) = 0;
        while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r14_11) + reinterpret_cast<unsigned char>(r9_52) + 1)) {
            ++r9_52;
        }
    }
    if (reinterpret_cast<unsigned char>(rbx24) <= reinterpret_cast<unsigned char>(rdi19)) {
        r8_53 = reinterpret_cast<void***>(r13_50 + 28);
        r14_54 = v51;
        eax55 = 32;
        r11d56 = reinterpret_cast<void**>(0);
    } else {
        rdx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_11) + reinterpret_cast<unsigned char>(r9_52));
        r11d56 = reinterpret_cast<void**>(0);
        r14_54 = v51;
        r10d57 = 0;
        while (1) {
            *reinterpret_cast<uint32_t*>(&rax58) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24 + 0xffffffffffffffff));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax58) + 4) = 0;
            r15_59 = rbx24 + 0xffffffffffffffff;
            r8_53 = r14_54 + 4;
            if (*reinterpret_cast<void***>(&rax58) == *reinterpret_cast<void***>(rdx14)) {
                rbx24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_59) - reinterpret_cast<unsigned char>(r9_52));
                if (reinterpret_cast<unsigned char>(rbx24) <= reinterpret_cast<unsigned char>(rdi19)) 
                    break;
            } else {
                if (r10d57 != 32) {
                    ecx60 = r10d57;
                    r10d57 = r10d57 + 4;
                } else {
                    rcx61 = r14_54 + 8;
                    *r14_54 = r11d56;
                    r10d57 = 4;
                    r14_54 = r8_53;
                    *reinterpret_cast<uint32_t*>(&rax58) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24 + 0xffffffffffffffff));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax58) + 4) = 0;
                    r8_53 = rcx61;
                    r11d56 = reinterpret_cast<void**>(0);
                    ecx60 = 0;
                }
                rbx24 = r15_59;
                *reinterpret_cast<uint32_t*>(&rax58) = (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<int64_t>(rax58))) & 15) << *reinterpret_cast<unsigned char*>(&ecx60);
                r11d56 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r11d56) | *reinterpret_cast<uint32_t*>(&rax58));
                if (reinterpret_cast<unsigned char>(rbx24) <= reinterpret_cast<unsigned char>(rdi19)) 
                    break;
            }
        }
        __asm__("bsr eax, r11d");
        eax55 = *reinterpret_cast<uint32_t*>(&rax58) ^ 31;
    }
    *r14_54 = r11d56;
    *reinterpret_cast<void***>(&rsi62) = rbp6->f0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi62) + 4) = 0;
    r8_63 = reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(r8_53) - reinterpret_cast<uint64_t>(v51)) >> 2;
    *reinterpret_cast<void***>(r13_50 + 20) = *reinterpret_cast<void***>(&r8_63);
    r8_64 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r8_63)) << 5) - eax55);
    *reinterpret_cast<int32_t*>(&r8_64 + 4) = 0;
    if (reinterpret_cast<signed char>(r8_64) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi62))) {
        *reinterpret_cast<void***>(&rbx65) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_64) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi62)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx65) + 4) = 0;
        eax66 = __any_on_D2A(r13_50, *reinterpret_cast<void***>(&rbx65));
        edi67 = eax66;
        if (eax66 && (ecx68 = reinterpret_cast<void**>(static_cast<uint32_t>(rbx65 - 1)), edi67 = reinterpret_cast<uint16_t>(1), r8_64 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx68)), *reinterpret_cast<int32_t*>(&r8_64 + 4) = 0, !!(reinterpret_cast<unsigned char>(v51[(reinterpret_cast<signed char>(ecx68) >> 5) * 4]) & reinterpret_cast<unsigned char>(r8_64)))) {
            if (!ecx68 || (eax69 = __any_on_D2A(r13_50, ecx68), eax69 == 0)) {
                edi67 = reinterpret_cast<uint16_t>(2);
            } else {
                edi67 = reinterpret_cast<uint16_t>(3);
            }
        }
        rdx14 = *reinterpret_cast<void***>(&rbx65);
        *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
        text(r13_50, rdx14);
        v25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbx65)));
    } else {
        edi67 = reinterpret_cast<uint16_t>(0);
        if (reinterpret_cast<signed char>(r8_64) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi62))) {
            ebx70 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi62)) - reinterpret_cast<unsigned char>(r8_64));
            rdx14 = ebx70;
            *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
            rax72 = __lshift_D2A(r13_50, rdx14, r8_64, r9_52, v71);
            v25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v25) - reinterpret_cast<unsigned char>(ebx70));
            r13_50 = rax72;
            v51 = reinterpret_cast<void***>(rax72 + 24);
        }
    }
    if (reinterpret_cast<signed char>(rbp6->f8) < reinterpret_cast<signed char>(v25)) 
        goto addr_40f228_98;
    eax73 = rbp6->f4;
    if (reinterpret_cast<signed char>(eax73) <= reinterpret_cast<signed char>(v25)) {
        ebx37 = 1;
    } else {
        *reinterpret_cast<void***>(&rbx74) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax73) - reinterpret_cast<unsigned char>(v25));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx74) + 4) = 0;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi62)) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rbx74))) {
            r14d75 = reinterpret_cast<void**>(static_cast<uint32_t>(rbx74 - 1));
            if (!edi67) {
                if (r14d75) {
                    eax76 = __any_on_D2A(r13_50, r14d75);
                    edi67 = eax76;
                }
            } else {
                edi67 = reinterpret_cast<uint16_t>(1);
            }
            ecx77 = r14d75;
            if (reinterpret_cast<unsigned char>(v51[(reinterpret_cast<signed char>(r14d75) >> 5) * 4]) & 1 << *reinterpret_cast<unsigned char*>(&ecx77)) {
                edi67 = reinterpret_cast<uint16_t>(edi67 | 2);
            }
            *reinterpret_cast<void***>(&rsi62) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi62)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbx74)));
            text(r13_50, *reinterpret_cast<void***>(&rbx74));
            ebx37 = 2;
            v25 = rbp6->f4;
        } else {
            rdx78 = rbp6->f12;
            *reinterpret_cast<int32_t*>(&rdx78 + 4) = 0;
            if (rdx78 != 2) {
                if (rdx78 == 3) {
                    rdx78 = v79;
                    *reinterpret_cast<int32_t*>(&rdx78 + 4) = 0;
                    if (!rdx78) 
                        goto addr_40f12a_112;
                    goto addr_40f489_114;
                } else {
                    if (rdx78 != 1) 
                        goto addr_40f12a_112;
                    if (*reinterpret_cast<void***>(&rsi62) != *reinterpret_cast<void***>(&rbx74)) 
                        goto addr_40f12a_112;
                    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi62)) <= reinterpret_cast<signed char>(1)) 
                        goto addr_40f489_114;
                    rdx78 = reinterpret_cast<void**>(static_cast<uint32_t>(rsi62 - 1));
                    *reinterpret_cast<int32_t*>(&rdx78 + 4) = 0;
                    eax80 = __any_on_D2A(r13_50, rdx78);
                    if (!eax80) 
                        goto addr_40f12a_112;
                    eax73 = rbp6->f4;
                    goto addr_40f489_114;
                }
            }
            if (v81) {
                addr_40f12a_112:
                __Bfree_D2A(r13_50, rdx78, r8_64, r9_52, v82, r13_50);
                goto addr_40f132_60;
            } else {
                addr_40f489_114:
                *reinterpret_cast<void***>(r13_50 + 20) = reinterpret_cast<void**>(1);
                *v51 = reinterpret_cast<void**>(1);
                goto addr_40f196_121;
            }
        }
    }
    if (!edi67) {
        addr_40f2df_123:
        *reinterpret_cast<void***>(r12_8) = r13_50;
        *reinterpret_cast<void***>(v7) = v25;
        goto addr_40ef32_74;
    } else {
        if (rbp6->f12 == 2) {
            v83 = 1 - v84;
        } else {
            if (rbp6->f12 != 3) {
                if (rbp6->f12 != 1) 
                    goto addr_40f2dc_128;
                if (!(*reinterpret_cast<unsigned char*>(&edi67) & 2)) 
                    goto addr_40f2dc_128;
                if ((edi67 | reinterpret_cast<unsigned char>(*v51)) & 1) 
                    goto addr_40f417_131;
                goto addr_40f2dc_128;
            }
        }
        if (!v83) {
            addr_40f2dc_128:
            ebx37 = ebx37 | 16;
            goto addr_40f2df_123;
        } else {
            addr_40f417_131:
            rdi85 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r13_50 + 20));
            rax86 = text(r13_50, r13_50);
            r13_50 = rax86;
            rax87 = reinterpret_cast<void***>(rax86 + 24);
            if (ebx37 == 2) {
                ebx37 = 34;
                if (rbp6->f0 - 1 == *reinterpret_cast<void***>(&rsi62)) {
                    ecx88 = *reinterpret_cast<void***>(&rsi62);
                    ebx89 = 0;
                    *reinterpret_cast<unsigned char*>(&ebx89) = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(rax87[(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi62)) >> 5) * 4]) & 1 << *reinterpret_cast<unsigned char*>(&ecx88)) == 0);
                    ebx37 = reinterpret_cast<uint32_t>(ebx89 + 33);
                    goto addr_40f2df_123;
                }
            } else {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_50 + 20)) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdi85)) && ((esi90 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi62)) & 31, esi90 == 0) || reinterpret_cast<int32_t>(32 - esi90) <= reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rax87) ^ 31)) || (rdx14 = reinterpret_cast<void**>(1), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, text(r13_50, 1), ++v25, reinterpret_cast<signed char>(rbp6->f8) >= reinterpret_cast<signed char>(v25))) {
                    ebx37 = 33;
                    goto addr_40f2df_123;
                } else {
                    addr_40f228_98:
                    __Bfree_D2A(r13_50, rdx14, r8_64, r9_52, v91, r13_50);
                    goto addr_40f230_67;
                }
            }
        }
    }
    addr_40f196_121:
    *reinterpret_cast<void***>(r12_8) = r13_50;
    ebx37 = 98;
    *reinterpret_cast<void***>(v7) = eax73;
    rax92 = _errno();
    *rax92 = 34;
    goto addr_40ef32_74;
    addr_40f17b_62:
    rax94 = __Balloc_D2A(0, rdx14, r8_15, r9, v93);
    r13_50 = rax94;
    *reinterpret_cast<void***>(r13_50 + 20) = reinterpret_cast<void**>(0x100000001);
    eax73 = rbp6->f4;
    goto addr_40f196_121;
    addr_40efff_69:
    ebx95 = reinterpret_cast<unsigned char>(rbp6->f0) & 31;
    *reinterpret_cast<void***>(&rsi96) = reinterpret_cast<void**>(reinterpret_cast<signed char>(rbp6->f0) >> 5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi96) + 4) = 0;
    edi97 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi96)) - (1 - reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi96)) < reinterpret_cast<unsigned char>(1 - reinterpret_cast<uint1_t>(ebx95 < 1)))));
    ecx98 = reinterpret_cast<void**>(0);
    eax99 = reinterpret_cast<signed char>(edi97) >> 1;
    if (eax99) {
        do {
            ++ecx98;
            eax99 = eax99 >> 1;
        } while (eax99);
    }
    rax101 = __Balloc_D2A(ecx98, rdx14, r8_15, r9, v100);
    *reinterpret_cast<void***>(r12_8) = rax101;
    *reinterpret_cast<void***>(rax101 + 20) = edi97;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi96)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi96) == 0))) {
        *reinterpret_cast<int32_t*>(&rcx102) = static_cast<int32_t>(rsi96 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx102) + 4) = 0;
        rdx103 = reinterpret_cast<void***>(rax101 + 24);
        rcx104 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax101 + rcx102 * 4) + 28);
        do {
            *rdx103 = reinterpret_cast<void**>(0xffffffff);
            rdx103 = rdx103 + 4;
        } while (rcx104 != rdx103);
        r15d29 = *reinterpret_cast<void***>(&rsi96);
    }
    if (reinterpret_cast<signed char>(edi97) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi96))) {
        ecx105 = 32 - ebx95;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax101 + reinterpret_cast<int32_t>(r15d29) * 4) + 24) = 32 >> *reinterpret_cast<signed char*>(&ecx105);
    }
    ebx37 = 17;
    *reinterpret_cast<void***>(v7) = rbp6->f4;
    goto addr_40ef32_74;
    addr_40f341_28:
    rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r11_18)));
    *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
    rbx24 = rax21;
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<unsigned char>(rdx14))) {
        do {
            ++rbx24;
            rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24))));
            *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
            r11_18 = rdx14;
        } while (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<unsigned char>(rdx14)));
        goto addr_40edf3_24;
    }
    addr_40f501_34:
    *reinterpret_cast<uint32_t*>(&r11_18) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx24));
    v25 = reinterpret_cast<void**>(0);
    goto addr_40edfc_20;
    addr_40ef48_11:
    rbx24 = rax21;
    rdi19 = rdx14;
    if (*reinterpret_cast<unsigned char*>(&ecx13) == 80 || *reinterpret_cast<unsigned char*>(&ecx13) == 0x70) {
        v25 = reinterpret_cast<void**>(0);
        r10d20 = 1;
        goto addr_40ef7e_36;
    } else {
        r10d20 = 1;
        v25 = reinterpret_cast<void**>(0);
        r15d29 = reinterpret_cast<void**>(0);
        ecx31 = 0;
        goto addr_40efb8_49;
    }
    addr_40ed8e_14:
    *reinterpret_cast<uint32_t*>(&rcx106) = *reinterpret_cast<unsigned char*>(&ebx23);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx106) + 4) = 0;
    ecx107 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<int64_t>(rcx106));
    if (!*reinterpret_cast<signed char*>(&ecx107)) {
        ecx13 = ebx23;
        goto addr_40ef48_11;
    } else {
        rdi19 = rax21;
        if (*reinterpret_cast<unsigned char*>(&ebx23) == 48) {
            do {
                ++rdi19;
                ebx23 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi19));
            } while (*reinterpret_cast<unsigned char*>(&ebx23) == 48);
            *reinterpret_cast<uint32_t*>(&rdx108) = *reinterpret_cast<unsigned char*>(&ebx23);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx108) + 4) = 0;
            ecx107 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi10) + reinterpret_cast<int64_t>(rdx108));
        }
        r10d20 = 0;
        zf109 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&ecx107) == 0);
        rdx14 = rdi19;
        *reinterpret_cast<int32_t*>(&r8_15) = 1;
        *reinterpret_cast<int32_t*>(&r8_15 + 4) = 0;
        *reinterpret_cast<unsigned char*>(&r10d20) = zf109;
        if (!zf109) 
            goto addr_40ef03_16;
    }
    *reinterpret_cast<int32_t*>(&r8_15) = 1;
    *reinterpret_cast<int32_t*>(&r8_15 + 4) = 0;
    rbx24 = rdi19;
    if (*reinterpret_cast<unsigned char*>(&r11_18) == *reinterpret_cast<unsigned char*>(&ebx23)) 
        goto addr_40ef25_35; else 
        goto addr_40ede2_19;
}

/* .text */
void text() {
    int64_t rdx1;
    int64_t rax2;
    int32_t r8d3;
    int64_t rdx4;
    int64_t rax5;
    int32_t r8d6;
    int64_t rdx7;
    int64_t rax8;
    int32_t r8d9;

    *reinterpret_cast<int32_t*>(&rdx1) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax2) = 48;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    do {
        r8d3 = static_cast<int32_t>(rdx1 + 15);
        ++rdx1;
        *reinterpret_cast<signed char*>(0x41cc600 + rax2) = *reinterpret_cast<signed char*>(&r8d3);
        *reinterpret_cast<uint32_t*>(&rax2) = *reinterpret_cast<unsigned char*>(0x412ead + rdx1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    } while (*reinterpret_cast<signed char*>(&rax2));
    *reinterpret_cast<int32_t*>(&rdx4) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax5) = 97;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    do {
        r8d6 = static_cast<int32_t>(rdx4 + 25);
        ++rdx4;
        *reinterpret_cast<signed char*>(0x41cc600 + rax5) = *reinterpret_cast<signed char*>(&r8d6);
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<unsigned char*>(0x412ea6 + rdx4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    } while (*reinterpret_cast<signed char*>(&rax5));
    *reinterpret_cast<int32_t*>(&rdx7) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax8) = 65;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    do {
        r8d9 = static_cast<int32_t>(rdx7 + 25);
        ++rdx7;
        *reinterpret_cast<signed char*>(0x41cc600 + rax8) = *reinterpret_cast<signed char*>(&r8d9);
        *reinterpret_cast<uint32_t*>(&rax8) = *reinterpret_cast<unsigned char*>(0x412e9f + rdx7);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    } while (*reinterpret_cast<signed char*>(&rax8));
    return;
}

int64_t _lock = 0x3dcd8bc;

void _lock(int64_t rcx) {
    goto _lock;
}

int64_t exit = 0x3dcd900;

void exit(int64_t rcx, void** rdx, void** r8) {
    goto exit;
}

uint64_t __security_cookie = 0x2b992ddfa232;

int64_t GetSystemTimeAsFileTime = 0x3dcd638;

int64_t GetCurrentProcessId = 0x3dcd5d4;

int64_t GetCurrentThreadId = 0x3dcd5ea;

int64_t GetTickCount = 0x3dcd652;

int64_t QueryPerformanceCounter = 0x3dcd6c0;

int64_t __security_cookie_complement = 0xffffd466d2205dcd;

/* .text */
void text(int64_t rcx, void** rdx, void** r8) {
    void* rsp4;
    uint64_t rbx5;
    void* rcx6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    uint64_t rax10;
    uint64_t rsi11;
    uint64_t rax12;
    uint64_t rax13;
    uint64_t v14;
    int64_t rdx15;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 48);
    rbx5 = __security_cookie;
    if (rbx5 == 0x2b992ddfa232) {
        rcx6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) + 32);
        GetSystemTimeAsFileTime(rcx6);
        eax7 = reinterpret_cast<int32_t>(GetCurrentProcessId(rcx6));
        eax8 = reinterpret_cast<int32_t>(GetCurrentThreadId(rcx6));
        eax9 = reinterpret_cast<int32_t>(GetTickCount(rcx6));
        QueryPerformanceCounter(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 40);
        *reinterpret_cast<int32_t*>(&rax10) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi11) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rax12) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        rax13 = (rax12 ^ (rsi11 ^ (rax10 ^ v14))) & 0xffffffffffff;
        if (rax13 == rbx5) {
            rdx15 = 0xffffd466d2205dcc;
            rax13 = 0x2b992ddfa233;
        } else {
            rdx15 = reinterpret_cast<int64_t>(~rax13);
        }
        __security_cookie = rax13;
        __security_cookie_complement = rdx15;
        return;
    } else {
        __security_cookie_complement = reinterpret_cast<int64_t>(~rbx5);
        return;
    }
}

int64_t GetStartupInfoA = 0x3dcd626;

struct s40 {
    signed char[8] pad8;
    int64_t f8;
};

struct s40* g30;

/* .refptr.__native_startup_lock */
int64_t* refptr___native_startup_lock = reinterpret_cast<int64_t*>(0x41cc5e8);

/* .refptr.__native_startup_state */
int32_t* refptr___native_startup_state = reinterpret_cast<int32_t*>(0x41cc5e0);

/* .refptr.__dyn_tls_init_callback */
int64_t* refptr___dyn_tls_init_callback = reinterpret_cast<int64_t*>(0x4123a0);

/* .refptr.__xc_z */
void** refptr___xc_z = reinterpret_cast<void**>(16);

/* .refptr.__xc_a */
void** refptr___xc_a = reinterpret_cast<void**>(0);

/* .refptr.__xi_z */
void** refptr___xi_z = reinterpret_cast<void**>(48);

/* .refptr.__xi_a */
void** refptr___xi_a = reinterpret_cast<void**>(24);

int32_t has_cctor;

int64_t SetUnhandledExceptionFilter = 0x3dcd732;

void _gnu_exception_handler(uint32_t** rcx);

/* .refptr.__mingw_oldexcpt_handler */
void** refptr___mingw_oldexcpt_handler = reinterpret_cast<void**>(0xc0);

/* .text */
void text();

struct s2* __mingw_winmain_hInstance;

unsigned char* __mingw_winmain_lpCmdLine;

uint32_t __mingw_winmain_nShowCmd = 10;

int32_t argc;

void** argv;

/* .refptr.__imp___initenv */
void**** refptr___imp___initenv = reinterpret_cast<void****>(0x41cd3f0);

void** envp;

int32_t managedapp;

int32_t mainret;

int64_t __tmainCRTStartup(int64_t rcx, void** rdx, void** r8) {
    void** rcx4;
    void** rdx5;
    int32_t* rdi6;
    void** r9_7;
    struct s40* rax8;
    int64_t* rbx9;
    int64_t rsi10;
    int64_t r12_11;
    int64_t tmp64_12;
    int32_t* rsi13;
    int32_t ebp14;
    int64_t* rax15;
    int64_t rax16;
    void** rax17;
    void** rdx18;
    struct s2* rax19;
    unsigned char** rax20;
    uint32_t ecx21;
    unsigned char* rax22;
    void** r8_23;
    uint32_t eax24;
    unsigned char v25;
    uint16_t v26;
    int64_t rbx27;
    void** r12_28;
    void** rcx29;
    void** rax30;
    void** rdi31;
    void** rbp32;
    int64_t rax33;
    void* rbx34;
    void* r13_35;
    void** rcx36;
    void** rax37;
    void** rsi38;
    void** rax39;
    void**** rax40;
    void** rdx41;
    void** rcx42;
    void** r8_43;
    void** rdx44;
    int64_t rax45;
    int32_t ecx46;
    int64_t rcx47;
    int32_t* rax48;
    int64_t v49;
    int32_t edx50;

    *reinterpret_cast<int32_t*>(&rcx4) = 13;
    *reinterpret_cast<int32_t*>(&rcx4 + 4) = 0;
    rdx5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x98 + 32);
    while (rcx4) {
        --rcx4;
    }
    rdi6 = refptr_mingw_app_type;
    *reinterpret_cast<int32_t*>(&r9_7) = *rdi6;
    *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r9_7)) {
        rcx4 = rdx5;
        GetStartupInfoA(rcx4);
    }
    rax8 = g30;
    rbx9 = refptr___native_startup_lock;
    rsi10 = rax8->f8;
    r12_11 = Sleep;
    while (1) {
        if (*rbx9 == rsi10) {
            tmp64_12 = *rbx9;
            *rbx9 = rsi10;
            rsi10 = tmp64_12;
        }
        if (!0) 
            break;
        if (!rsi10) 
            goto addr_401410_11;
        *reinterpret_cast<int32_t*>(&rcx4) = 0x3e8;
        *reinterpret_cast<int32_t*>(&rcx4 + 4) = 0;
        r12_11(0x3e8);
    }
    rsi13 = refptr___native_startup_state;
    ebp14 = 0;
    if (*rsi13 == 1) {
        addr_401427_14:
        *reinterpret_cast<int32_t*>(&rcx4) = 31;
        *reinterpret_cast<int32_t*>(&rcx4 + 4) = 0;
        _amsg_exit(31);
        if (*rsi13 != 1) {
            addr_401224_15:
            if (!ebp14) {
                addr_40145d_16:
                *rbx9 = 0;
                goto addr_40122c_17;
            } else {
                addr_40122c_17:
                rax15 = refptr___dyn_tls_init_callback;
                rax16 = *rax15;
                if (rax16) {
                    *reinterpret_cast<int32_t*>(&r8) = 0;
                    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdx5) = 2;
                    *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rcx4) = 0;
                    *reinterpret_cast<int32_t*>(&rcx4 + 4) = 0;
                    rax16();
                }
            }
        } else {
            addr_40143c_19:
            rdx5 = refptr___xc_z;
            rcx4 = refptr___xc_a;
            _initterm(rcx4, rdx5);
            *rsi13 = 2;
            if (ebp14) 
                goto addr_40122c_17; else 
                goto addr_40145d_16;
        }
    } else {
        addr_401205_20:
        if (!*rsi13) {
            rdx5 = refptr___xi_z;
            *rsi13 = 1;
            rcx4 = refptr___xi_a;
            _initterm(rcx4, rdx5);
            goto addr_401219_22;
        } else {
            has_cctor = 1;
            goto addr_401219_22;
        }
    }
    _pei386_runtime_relocator(rcx4, rdx5, r8, r9_7);
    rax17 = reinterpret_cast<void**>(SetUnhandledExceptionFilter(_gnu_exception_handler, rdx5));
    rdx18 = refptr___mingw_oldexcpt_handler;
    *reinterpret_cast<void***>(rdx18) = rax17;
    __mingw_init_ehandler(_gnu_exception_handler);
    _set_invalid_parameter_handler(text);
    text(text, rdx18);
    rax19 = refptr___image_base__;
    __mingw_winmain_hInstance = rax19;
    rax20 = text(text);
    ecx21 = 0;
    rax22 = *rax20;
    if (rax22) {
        while (1) {
            *reinterpret_cast<uint32_t*>(&rdx18) = *rax22;
            *reinterpret_cast<int32_t*>(&rdx18 + 4) = 0;
            if (*reinterpret_cast<signed char*>(&rdx18) <= 32) {
                if (!*reinterpret_cast<signed char*>(&rdx18)) 
                    break;
                if (!(ecx21 & 1)) 
                    break;
                ecx21 = 1;
            } else {
                if (*reinterpret_cast<signed char*>(&rdx18) == 34) {
                    ecx21 = ecx21 ^ 1;
                }
            }
            ++rax22;
        }
        if (!*reinterpret_cast<signed char*>(&rdx18)) 
            goto addr_4012d4_34;
    } else {
        goto addr_4012f7_36;
    }
    do {
        ++rax22;
        *reinterpret_cast<uint32_t*>(&rdx18) = *rax22;
        *reinterpret_cast<int32_t*>(&rdx18 + 4) = 0;
        if (!*reinterpret_cast<signed char*>(&rdx18)) 
            break;
    } while (*reinterpret_cast<signed char*>(&rdx18) <= 32);
    addr_4012f0_39:
    __mingw_winmain_lpCmdLine = rax22;
    addr_4012f7_36:
    *reinterpret_cast<int32_t*>(&r8_23) = *rdi6;
    *reinterpret_cast<int32_t*>(&r8_23 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r8_23)) {
        eax24 = 10;
        if (v25 & 1) {
            eax24 = v26;
        }
        __mingw_winmain_nShowCmd = eax24;
    }
    *reinterpret_cast<int32_t*>(&rbx27) = argc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = 0;
    r12_28 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(rbx27 + 1))) << 3);
    rcx29 = r12_28;
    rax30 = malloc(rcx29);
    rdi31 = argv;
    rbp32 = rax30;
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx27) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx27) == 0))) {
        *reinterpret_cast<int32_t*>(&rax33) = static_cast<int32_t>(rbx27 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rbx34) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx34) + 4) = 0;
        r13_35 = reinterpret_cast<void*>(rax33 * 8 + 8);
        do {
            rcx36 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi31) + reinterpret_cast<uint64_t>(rbx34));
            rax37 = strlen(rcx36, rcx36);
            rsi38 = rax37 + 1;
            rax39 = malloc(rsi38, rsi38);
            r8_23 = rsi38;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbp32) + reinterpret_cast<uint64_t>(rbx34)) = rax39;
            rdx18 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi31) + reinterpret_cast<uint64_t>(rbx34));
            rcx29 = rax39;
            rbx34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx34) + 8);
            memcpy(rcx29, rdx18, r8_23);
        } while (r13_35 != rbx34);
        rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp32) + reinterpret_cast<unsigned char>(r12_28) + 0xfffffffffffffff8);
    }
    *reinterpret_cast<void***>(rax30) = reinterpret_cast<void**>(0);
    argv = rbp32;
    __main(rcx29, rdx18, r8_23, r9_7);
    rax40 = refptr___imp___initenv;
    rdx41 = envp;
    *reinterpret_cast<int32_t*>(&rcx42) = argc;
    *reinterpret_cast<int32_t*>(&rcx42 + 4) = 0;
    **rax40 = rdx41;
    r8_43 = envp;
    rdx44 = argv;
    rax45 = main(rcx42, rdx44, r8_43, r9_7);
    ecx46 = managedapp;
    mainret = *reinterpret_cast<int32_t*>(&rax45);
    if (!ecx46) {
        *reinterpret_cast<int32_t*>(&rcx47) = *reinterpret_cast<int32_t*>(&rax45);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = 0;
        exit(rcx47, rdx44, r8_43);
        rax48 = refptr_mingw_app_type;
        *rax48 = 1;
        text(rcx47, rdx44, r8_43);
        __tmainCRTStartup(rcx47, rdx44, r8_43);
        goto v49;
    } else {
        edx50 = has_cctor;
        if (!edx50) {
            _cexit();
            *reinterpret_cast<int32_t*>(&rax45) = mainret;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax45) + 4) = 0;
        }
        return rax45;
    }
    addr_4012d4_34:
    goto addr_4012f0_39;
    addr_401219_22:
    if (*rsi13 == 1) 
        goto addr_40143c_19; else 
        goto addr_401224_15;
    addr_401410_11:
    rsi13 = refptr___native_startup_state;
    ebp14 = 1;
    if (*rsi13 != 1) 
        goto addr_401205_20; else 
        goto addr_401427_14;
}

/* .text */
void text(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    void** rax6;
    int64_t v7;
    void** rax8;
    int64_t v9;
    void** rax10;
    int64_t rax11;
    int64_t rax12;
    int64_t rcx13;

    rax6 = text(0, rdx, r8, r9, v5);
    if (reinterpret_cast<unsigned char>(rax6) > reinterpret_cast<unsigned char>(rcx) || (rax8 = text(19, rdx, r8, r9, v7), reinterpret_cast<unsigned char>(rax8) < reinterpret_cast<unsigned char>(rcx))) {
        goto EnterCriticalSection;
    } else {
        rax10 = text(0, rdx, r8, r9, v9);
        rax11 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<unsigned char>(rax10)) >> 4;
        *reinterpret_cast<int32_t*>(&rax12) = *reinterpret_cast<int32_t*>(&rax11) * 0xaaaaaaab;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx13) = static_cast<int32_t>(rax12 + 16);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
        _lock(rcx13);
        *reinterpret_cast<void***>(rcx + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 24)) | 0x8000);
        return;
    }
}

int32_t __mingw_pformat(int32_t ecx, void** rdx, int32_t r8d, void** r9) {
    void** rbx5;
    void* rsp6;
    int32_t ecx7;
    void** rsi8;
    void** rdx9;
    int64_t rax10;
    void** r13_11;
    void** rdi12;
    uint32_t r14d13;
    int64_t v14;
    int32_t* r11_15;
    int64_t r9_16;
    int32_t edx17;
    uint32_t eax18;
    int64_t rax19;
    int64_t rax20;
    int64_t rdx21;

    rbx5 = r9;
    _errno();
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xa8 - 8 + 8);
    ecx7 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5));
    while (rsi8 = rbx5 + 1, !!ecx7) {
        do {
            if (ecx7 == 37) 
                break;
            rdx9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp6) + 0x70);
            __pformat_putc(*reinterpret_cast<signed char*>(&ecx7), rdx9, *reinterpret_cast<signed char*>(&ecx7), rdx9);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            ecx7 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 1));
            rbx5 = rsi8;
            rsi8 = rbx5 + 1;
        } while (ecx7);
        break;
        *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 1));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        r13_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp6) + 0x70);
        rdi12 = rsi8;
        r14d13 = 0;
        v14 = -1;
        r11_15 = reinterpret_cast<int32_t*>(r13_11 + 12);
        while (ecx7 = *reinterpret_cast<signed char*>(&rax10), *reinterpret_cast<int32_t*>(&r9_16) = ecx7, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_16) + 4) = 0, !!*reinterpret_cast<signed char*>(&rax10)) {
            edx17 = static_cast<int32_t>(rax10 - 32);
            if (*reinterpret_cast<unsigned char*>(&edx17) <= 90) 
                goto addr_409c9c_8;
            eax18 = *reinterpret_cast<uint32_t*>(&rax10) - 48;
            if (*reinterpret_cast<unsigned char*>(&eax18) > 9) 
                goto addr_40a339_10;
            if (r14d13 > 3) 
                goto addr_40a339_10;
            if (r14d13) {
                if (r14d13 == 2) {
                    r14d13 = 3;
                }
            } else {
                r14d13 = 1;
            }
            if (!r11_15) {
                addr_40a250_18:
                *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi12 + 1));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
            } else {
                *reinterpret_cast<int32_t*>(&rax19) = *reinterpret_cast<int32_t*>(&v14);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
                if (*reinterpret_cast<int32_t*>(&rax19) < 0) {
                    *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi12 + 1));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&v14) = *reinterpret_cast<int32_t*>(&r9_16) - 48;
                } else {
                    *reinterpret_cast<int32_t*>(&rax20) = static_cast<int32_t>(rax19 + rax19 * 4);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&v14) = static_cast<int32_t>(r9_16 + rax20 * 2 - 48);
                    goto addr_40a250_18;
                }
            }
            ++rdi12;
        }
        rbx5 = rdi12;
        continue;
        addr_40a339_10:
        rbx5 = rsi8;
        __pformat_putc(37, r13_11, 37, r13_11);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        ecx7 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5));
    }
    return 0;
    addr_409c9c_8:
    *reinterpret_cast<uint32_t*>(&rdx21) = *reinterpret_cast<unsigned char*>(&edx17);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
    goto *reinterpret_cast<int32_t*>(0x4129b0 + rdx21 * 4) + 0x4129b0;
}

int64_t _unlock = 0x3dcd8dc;

void _unlock_file(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    int64_t v6;
    void** rax7;
    int64_t v8;
    int64_t v9;
    void** rax10;
    int64_t v11;
    int64_t v12;

    rax7 = text(0, rdx, r8, r9, v5, 0, rdx, r8, r9, v6);
    if (reinterpret_cast<unsigned char>(rax7) > reinterpret_cast<unsigned char>(rcx) || (rax10 = text(19, rdx, r8, r9, v8, 19, rdx, r8, r9, v9), reinterpret_cast<unsigned char>(rax10) < reinterpret_cast<unsigned char>(rcx))) {
        goto LeaveCriticalSection;
    } else {
        *reinterpret_cast<void***>(rcx + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 24)) & 0xffff7fff);
        text(0, rdx, r8, r9, v11, 0, rdx, r8, r9, v12);
        goto _unlock;
    }
}

int64_t memset = 0x3dcd99e;

void** memset(int64_t rcx) {
    goto memset;
}

int64_t __mingw_sformat(void** rcx, void** rdx, void** r8) {
    void** rdi4;
    unsigned char dl5;
    void** r12_6;
    void** v7;
    void** v8;
    int32_t* rax9;
    int64_t rax10;
    struct s16* rax11;
    void* rsp12;
    void** rsi13;
    void** v14;
    void** rax15;
    uint32_t ebp16;
    uint32_t r14d17;
    uint32_t v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    uint32_t ecx24;
    void** rbx25;
    void** rax26;
    void* rsp27;
    void** r9_28;
    int32_t eax29;
    void** r15_30;
    void* rax31;
    int64_t v32;
    int64_t v33;
    int64_t rax34;
    uint32_t esi35;
    int32_t eax36;
    void** r15_37;
    int64_t v38;
    int64_t v39;
    int64_t rax40;
    int32_t eax41;
    uint32_t edx42;
    uint32_t v43;
    uint32_t eax44;
    uint32_t edx45;
    void** rcx46;
    int64_t rdx47;
    int64_t r8_48;
    int64_t v49;
    int64_t v50;
    int64_t rax51;
    void* rsp52;
    int32_t eax53;
    uint32_t r13d54;
    void** rcx55;
    uint32_t edx56;
    int64_t rdx57;
    int64_t rsi58;
    int64_t rax59;
    int64_t rdi60;
    void** v61;
    uint32_t eax62;
    int64_t rax63;
    void** rdx64;
    int32_t* rax65;
    void* rsp66;
    void** r14_67;
    int32_t v68;
    int32_t* rax69;
    void* rsp70;
    void** r15_71;
    int64_t v72;
    int64_t v73;
    int64_t rax74;
    int32_t eax75;
    int32_t* rax76;
    int32_t eax77;
    int32_t* rax78;
    int64_t v79;
    int64_t v80;
    void** rax81;
    int64_t rax82;
    void** rdi83;
    void** rax84;
    int64_t rax85;
    void** rdi86;
    int32_t eax87;
    void** rax88;
    void** rcx89;
    void** rax90;
    void** rdi91;
    void** rax92;
    void** r15_93;
    int64_t v94;
    int64_t v95;
    int64_t rax96;
    void** rax97;
    void** v98;
    void** v99;
    int32_t v100;
    void** rbx101;
    void** rcx102;
    void* rax103;
    void* v104;
    void** rax105;
    void** r8_106;
    void** rdi107;
    void** rbx108;
    void** rsi109;
    void** rdx110;
    void** rax111;
    void** rdi112;
    void** rsi113;
    int64_t v114;
    int64_t v115;
    int64_t rax116;
    int64_t v117;
    int64_t v118;
    int64_t rax119;
    void** rdi120;
    int32_t eax121;
    int64_t v122;
    int64_t v123;
    int64_t rax124;
    uint32_t r14d125;
    void** r15_126;
    int64_t v127;
    int64_t v128;
    int64_t rax129;
    int64_t rax130;
    int64_t v131;
    int64_t v132;
    uint32_t eax133;
    uint32_t v134;
    void** rax135;
    int64_t rax136;
    void** r8_137;
    void** rax138;
    int64_t rax139;
    void** rdi140;
    int32_t eax141;
    void** rax142;
    void** rax143;
    void** rax144;
    void** r15_145;
    int64_t v146;
    int64_t v147;
    int64_t rax148;
    void** rdi149;
    void** v150;
    void** rbx151;
    uint32_t v152;
    int32_t v153;
    uint32_t r13d154;
    void** rbp155;
    void** rcx156;
    int64_t rdx157;
    void** v158;
    void** r14_159;
    int32_t edi160;
    void** rbp161;
    void** rbx162;
    void** rsi163;
    void** rbp164;
    void** rax165;
    void** r14_166;
    int64_t v167;
    int64_t v168;
    int64_t rax169;
    uint32_t r14d170;
    void** rax171;
    int64_t rax172;
    void** rdi173;
    void** rax174;
    int64_t rax175;
    void** rdi176;
    void** rax177;
    void** rax178;
    void** r15_179;
    int64_t v180;
    int64_t v181;
    int64_t rax182;
    void** v183;
    uint32_t v184;
    void** r13_185;
    void** rbx186;
    int32_t eax187;
    void** rdi188;
    int64_t v189;
    int64_t v190;
    int64_t rax191;
    int64_t v192;
    int64_t v193;
    int64_t rax194;
    void** r8_195;
    void** rdi196;
    void** rdx197;
    void** rcx198;
    void** rax199;
    int64_t v200;
    int64_t v201;
    int64_t rax202;
    uint32_t edi203;
    void** rax204;
    int64_t rax205;
    void** rcx206;
    void** rax207;
    int64_t rax208;
    void** rcx209;
    void** rax210;
    void** rax211;
    void** r15_212;
    int64_t v213;
    int64_t v214;
    int64_t rax215;
    void** v216;
    uint32_t ebx217;
    uint32_t v218;
    uint32_t v219;
    uint32_t r14d220;
    void** r13_221;
    int32_t eax222;
    void** rax223;
    void** rcx224;
    uint32_t v225;
    void** rbx226;
    void** r13_227;
    void** rsi228;
    int32_t ebp229;
    void** rax230;
    void** r13_231;
    int64_t v232;
    int64_t v233;
    int64_t rax234;
    int64_t v235;
    int64_t v236;
    void** rsi237;
    int64_t v238;
    int64_t v239;
    void** rsi240;
    void** r15_241;
    int64_t v242;
    int64_t v243;
    int64_t rax244;
    int32_t eax245;
    int64_t v246;
    int64_t v247;
    int64_t v248;
    int64_t v249;
    int64_t v250;
    uint32_t eax251;
    int64_t v252;
    int64_t v253;
    int64_t v254;
    int64_t v255;
    int64_t v256;
    int32_t* rax257;
    int64_t v258;
    uint32_t eax259;
    int64_t v260;
    int32_t eax261;
    int64_t rax262;
    uint32_t ecx263;
    void** rax264;
    int64_t v265;
    uint32_t eax266;
    int64_t v267;

    __asm__("movaps [rsp+0x110], xmm6");
    __asm__("movaps [rsp+0x120], xmm7");
    rdi4 = rdx;
    dl5 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rcx) == 0);
    r12_6 = rcx;
    v7 = r8;
    v8 = reinterpret_cast<void**>(0);
    if (dl5 | static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdi4 == 0))) {
        rax9 = _errno();
        *rax9 = 22;
        *reinterpret_cast<int32_t*>(&rax10) = -1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    } else {
        localeconv();
        rax11 = localeconv();
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0x138 - 8 + 8 - 8 + 8);
        rsi13 = rax11->f8;
        v14 = rsi13;
        if (rsi13) {
            *reinterpret_cast<int32_t*>(&rax15) = 0;
            *reinterpret_cast<int32_t*>(&rax15 + 4) = 0;
            if (*reinterpret_cast<void***>(rsi13)) {
                rax15 = rsi13;
            }
            v14 = rax15;
        }
        ebp16 = 0;
        r14d17 = 0;
        __asm__("movq xmm6, [rip+0xe07e]");
        v18 = 0;
        __asm__("movss xmm7, [rip+0xe07e]");
        v19 = reinterpret_cast<void**>(0);
        v20 = reinterpret_cast<void**>(0);
        v21 = v7;
        v22 = reinterpret_cast<void**>(0);
        v23 = reinterpret_cast<void**>(0);
        while (ecx24 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi4)), !!*reinterpret_cast<unsigned char*>(&ecx24)) {
            if (*reinterpret_cast<signed char*>(&ecx24) >= reinterpret_cast<signed char>(0)) {
                rbx25 = rdi4 + 1;
                if (*reinterpret_cast<unsigned char*>(&ecx24) == 37) 
                    goto addr_4049f4_11; else 
                    goto addr_404909_12;
            }
            rax26 = strlen(rdi4, rdi4);
            rsp27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            r8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp27) + 0xd8);
            eax29 = mbrlen(rdi4, rax26, r8, r9_28);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp27) - 8 + 8);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax29 < 0) | reinterpret_cast<uint1_t>(eax29 == 0))) {
                r15_30 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xf0);
                *reinterpret_cast<int32_t*>(&rax31) = eax29 - 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = 0;
                rbx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi4) + reinterpret_cast<uint64_t>(rax31) + 1);
                do {
                    rax34 = in_ch(r12_6, r15_30, r8, r9_28, v32, r12_6, r15_30, r8, r9_28, v33);
                    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                    if (*reinterpret_cast<uint32_t*>(&rax34) == 0xffffffff) 
                        goto addr_4054b0_16;
                    ++rdi4;
                    if (*reinterpret_cast<uint32_t*>(&rax34) != static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi4 + 0xffffffffffffffff)))) 
                        goto addr_4054b0_16;
                } while (rdi4 != rbx25);
                ebp16 = *reinterpret_cast<uint32_t*>(&rax34);
            } else {
                ecx24 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi4));
                rbx25 = rdi4 + 1;
                if (*reinterpret_cast<unsigned char*>(&ecx24) != 37) {
                    addr_404909_12:
                    esi35 = *reinterpret_cast<unsigned char*>(&ecx24);
                    eax36 = isspace();
                    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                    if (eax36) {
                        r14d17 = 1;
                    } else {
                        r15_37 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xf0);
                        rax40 = in_ch(r12_6, r15_37, r8, r9_28, v38, r12_6, r15_37, r8, r9_28, v39);
                        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        ebp16 = *reinterpret_cast<uint32_t*>(&rax40);
                        if (*reinterpret_cast<uint32_t*>(&rax40) == 0xffffffff) 
                            goto addr_405ee4_23;
                        if (!r14d17) 
                            goto addr_40494d_25;
                        eax41 = isspace();
                        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        if (eax41) 
                            goto addr_404a6f_27; else 
                            goto addr_40494d_25;
                    }
                } else {
                    addr_4049f4_11:
                    edx42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi4 + 1));
                    v43 = 0;
                    eax44 = edx42;
                    edx45 = edx42 - 48;
                    if (edx45 <= 9) {
                        v43 = edx45;
                        rcx46 = rdi4 + 2;
                        *reinterpret_cast<uint32_t*>(&rdx47) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi4 + 2));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&r9_28) = static_cast<uint32_t>(rdx47 - 48);
                        *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&r8) = *reinterpret_cast<uint32_t*>(&rdx47);
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        if (*reinterpret_cast<uint32_t*>(&r9_28) <= 9) {
                            *reinterpret_cast<uint32_t*>(&r9_28) = edx45;
                            *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
                            do {
                                *reinterpret_cast<int32_t*>(&r8_48) = static_cast<int32_t>(reinterpret_cast<uint64_t>(r9_28 + reinterpret_cast<unsigned char>(r9_28) * 4));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_48) + 4) = 0;
                                ++rcx46;
                                *reinterpret_cast<uint32_t*>(&r9_28) = static_cast<uint32_t>(rdx47 + r8_48 * 2 - 48);
                                *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
                                *reinterpret_cast<uint32_t*>(&rdx47) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx46));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = 0;
                                *reinterpret_cast<uint32_t*>(&r8) = *reinterpret_cast<uint32_t*>(&rdx47);
                                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                            } while (static_cast<uint32_t>(rdx47 - 48) <= 9);
                            v43 = *reinterpret_cast<uint32_t*>(&r9_28);
                        }
                        if (*reinterpret_cast<signed char*>(&r8) == 36) {
                            rbx25 = rcx46 + 1;
                            eax44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx46 + 1));
                            goto addr_404a0e_34;
                        } else {
                            v43 = 0;
                            goto addr_404a0e_34;
                        }
                    }
                }
            }
            addr_4049b9_36:
            rdi4 = rbx25;
            continue;
            addr_40494d_25:
            if (esi35 == ebp16) 
                goto addr_404ad0_37; else 
                goto addr_404955_38;
            do {
                addr_404a6f_27:
                rax51 = in_ch(r12_6, r15_37, r8, r9_28, v49, r12_6, r15_37, r8, r9_28, v50);
                rsp52 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                ebp16 = *reinterpret_cast<uint32_t*>(&rax51);
                if (*reinterpret_cast<uint32_t*>(&rax51) == 0xffffffff) 
                    goto addr_404a81_39;
                eax53 = isspace();
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp52) - 8 + 8);
            } while (eax53);
            goto addr_40494d_25;
            addr_404a0e_34:
            r13d54 = 0;
            rcx55 = v14;
            while (1) {
                if (*reinterpret_cast<unsigned char*>(&eax44) == 42) {
                    *reinterpret_cast<unsigned char*>(&r13d54) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r13d54) | 0x80);
                    eax44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                    goto addr_404a48_43;
                }
                if (*reinterpret_cast<unsigned char*>(&eax44) == 39) {
                    edx56 = r13d54;
                    eax44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx56) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&edx56) + 1) | 1);
                    if (rcx55) {
                        r13d54 = edx56;
                    }
                    goto addr_404a48_43;
                }
                if (*reinterpret_cast<unsigned char*>(&eax44) != 73) 
                    break;
                eax44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                if (*reinterpret_cast<unsigned char*>(&eax44) != 54) 
                    goto addr_404a3c_50;
                r13d54 = r13d54 | 12;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx25 + 2) == 52)) {
                    addr_404a48_43:
                    ++rbx25;
                    continue;
                } else {
                    addr_404b4e_52:
                    eax44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 3));
                    rbx25 = rbx25 + 2;
                    goto addr_404a48_43;
                }
                addr_404a3c_50:
                if (*reinterpret_cast<unsigned char*>(&eax44) != 51 || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx25 + 2) == 50)) {
                    r13d54 = r13d54 | 12;
                    goto addr_404a48_43;
                } else {
                    r13d54 = r13d54 | 4;
                    goto addr_404b4e_52;
                }
            }
            *reinterpret_cast<uint32_t*>(&rdx57) = *reinterpret_cast<unsigned char*>(&eax44);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx57) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi58) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi58) + 4) = 0;
            if (static_cast<uint32_t>(rdx57 - 48) > 9) {
                *reinterpret_cast<int32_t*>(&rsi58) = -1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi58) + 4) = 0;
            } else {
                do {
                    *reinterpret_cast<int32_t*>(&rax59) = static_cast<int32_t>(rsi58 + rsi58 * 4);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax59) + 4) = 0;
                    ++rbx25;
                    *reinterpret_cast<int32_t*>(&rsi58) = static_cast<int32_t>(rdx57 + rax59 * 2 - 48);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi58) + 4) = 0;
                    *reinterpret_cast<uint32_t*>(&rdx57) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx57) + 4) = 0;
                    eax44 = *reinterpret_cast<uint32_t*>(&rdx57);
                } while (static_cast<uint32_t>(rdx57 - 48) <= 9);
                if (!*reinterpret_cast<int32_t*>(&rsi58)) 
                    goto label_59;
            }
            addr_404ba3_60:
            if (*reinterpret_cast<unsigned char*>(&eax44) == 0x6a) {
                r13d54 = r13d54 | 8;
                *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                v61 = rbx25 + 1;
            } else {
                if (*reinterpret_cast<signed char*>(&eax44) <= reinterpret_cast<signed char>(0x6a)) {
                    if (*reinterpret_cast<unsigned char*>(&eax44) == 76) {
                        addr_404c00_64:
                        *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                        r13d54 = r13d54 | 12;
                        v61 = rbx25 + 1;
                    } else {
                        if (*reinterpret_cast<signed char*>(&eax44) <= reinterpret_cast<signed char>(76)) {
                            if (!*reinterpret_cast<unsigned char*>(&eax44)) 
                                goto addr_404970_67;
                            goto addr_404e2e_69;
                        } else {
                            if (*reinterpret_cast<unsigned char*>(&eax44) == 97) {
                                *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                                eax62 = *reinterpret_cast<uint32_t*>(&rdi60) & 0xfffffff7;
                                if (*reinterpret_cast<signed char*>(&eax62) == 83 || *reinterpret_cast<signed char*>(&rdi60) == 0x73) {
                                    r13d54 = r13d54 | 0x200;
                                    v61 = rbx25 + 1;
                                } else {
                                    addr_404e2e_69:
                                    *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25));
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                                    v61 = rbx25;
                                }
                            } else {
                                if (*reinterpret_cast<unsigned char*>(&eax44) != 0x68) 
                                    goto addr_404e2e_69;
                                *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                                if (*reinterpret_cast<signed char*>(&rdi60) == 0x68) {
                                    r13d54 = r13d54 | 1;
                                    *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 2));
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                                    v61 = rbx25 + 2;
                                } else {
                                    r13d54 = r13d54 | 2;
                                    v61 = rbx25 + 1;
                                }
                            }
                        }
                    }
                } else {
                    if (*reinterpret_cast<unsigned char*>(&eax44) == 0x71) 
                        goto addr_404c00_64;
                    if (*reinterpret_cast<signed char*>(&eax44) > reinterpret_cast<signed char>(0x71)) 
                        goto addr_404bf0_79; else 
                        goto addr_404bb7_80;
                }
            }
            addr_404c11_81:
            if (!*reinterpret_cast<signed char*>(&rdi60)) 
                goto addr_404970_67;
            rbx25 = v61 + 1;
            if (!r14d17 && ((*reinterpret_cast<int32_t*>(&rax63) = static_cast<int32_t>(rdi60 - 67), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax63) + 4) = 0, *reinterpret_cast<unsigned char*>(&rax63) <= 43) && (rdx64 = reinterpret_cast<void**>(0x80101000001), static_cast<int1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(0x80101000001) >> rax63))))) {
                if (*reinterpret_cast<signed char*>(&rdi60) != 99) 
                    goto addr_404ca3_84; else 
                    goto addr_404ebe_85;
            }
            rax65 = _errno();
            rsp66 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            r14_67 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp66) + 0xf0);
            v68 = *rax65;
            rax69 = _errno();
            rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp66) - 8 + 8);
            *rax69 = 0;
            do {
                if (ebp16 == 0xffffffff) 
                    break;
                r15_71 = r14_67;
                rax74 = in_ch(r12_6, r14_67, r8, r9_28, v72, r12_6, r14_67, r8, r9_28, v73);
                rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
                ebp16 = *reinterpret_cast<uint32_t*>(&rax74);
                if (*reinterpret_cast<uint32_t*>(&rax74) == 0xffffffff) 
                    break;
                eax75 = isspace();
                rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
            } while (eax75);
            goto addr_404c7e_90;
            do {
                rax76 = _errno();
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8);
                if (*rax76 == 4) 
                    goto addr_404e69_93;
                eax77 = isspace();
                rsp70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            } while (eax77);
            r15_71 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp70) + 0xf0);
            ebp16 = 0xffffffff;
            addr_404c7e_90:
            rax78 = _errno();
            *reinterpret_cast<uint32_t*>(&r9_28) = 0;
            *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
            r8 = r15_71;
            rdx64 = r12_6;
            *rax78 = v68;
            back_ch(ebp16, rdx64, r8, 0, v79, ebp16, rdx64, r8, 0, v80);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp70) - 8 + 8 - 8 + 8);
            if (*reinterpret_cast<signed char*>(&rdi60) == 99) {
                addr_404ebe_85:
                if (*reinterpret_cast<unsigned char*>(&r13d54) & 4) {
                    if (*reinterpret_cast<int32_t*>(&rsi58) == -1) {
                        *reinterpret_cast<int32_t*>(&rsi58) = 1;
                    }
                    r14d17 = r13d54 & 0x80;
                    if (!r14d17) {
                        if (!(r13d54 & 0x600)) {
                            if (v43) {
                                rax81 = v7;
                                if (v43 != 1) {
                                    *reinterpret_cast<uint32_t*>(&rax82) = v43 - 2;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax82) + 4) = 0;
                                    rax81 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(v7 + rax82 * 8) + 8);
                                }
                                v19 = *reinterpret_cast<void***>(rax81);
                            } else {
                                rdi83 = *reinterpret_cast<void***>(v21);
                                v21 = v21 + 8;
                                v19 = rdi83;
                            }
                            if (!v19) 
                                goto addr_40558e_106;
                        } else {
                            if (v43) {
                                rax84 = v7;
                                if (v43 != 1) {
                                    *reinterpret_cast<uint32_t*>(&rax85) = v43 - 2;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = 0;
                                    rax84 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(v7 + rax85 * 8) + 8);
                                }
                                v20 = *reinterpret_cast<void***>(rax84);
                            } else {
                                rdi86 = *reinterpret_cast<void***>(v21);
                                v21 = v21 + 8;
                                v20 = rdi86;
                            }
                            if (!v20) 
                                goto addr_407387_113;
                            eax87 = 0x400;
                            if (*reinterpret_cast<int32_t*>(&rsi58) <= 0x400) {
                                eax87 = *reinterpret_cast<int32_t*>(&rsi58);
                            }
                            rax88 = reinterpret_cast<void**>(static_cast<int64_t>(eax87));
                            rcx89 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax88) + reinterpret_cast<unsigned char>(rax88));
                            v23 = rax88;
                            rax90 = malloc(rcx89, rcx89);
                            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                            rdi91 = v20;
                            v19 = rax90;
                            *reinterpret_cast<void***>(rdi91) = rax90;
                            if (!rax90) 
                                goto addr_40654d_117;
                            rax92 = v8;
                            if (!rax92 || (rdx64 = *reinterpret_cast<void***>(rax92), reinterpret_cast<unsigned char>(rdx64) > reinterpret_cast<unsigned char>(31))) {
                                rax92 = resize_gcollect_part_0(rax92, rdx64, r8, rax92, rdx64, r8);
                                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                                rdx64 = *reinterpret_cast<void***>(rax92);
                            }
                            v8 = rax92;
                            *reinterpret_cast<void***>(rax92) = rdx64 + 1;
                            *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax92 + reinterpret_cast<unsigned char>(rdx64) * 8) + 16) = v20;
                        }
                    }
                    r15_93 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xf0);
                    rax96 = in_ch(r12_6, r15_93, r8, r9_28, v94, r12_6, r15_93, r8, r9_28, v95);
                    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                    ebp16 = *reinterpret_cast<uint32_t*>(&rax96);
                    if (*reinterpret_cast<uint32_t*>(&rax96) == 0xffffffff) 
                        goto addr_405ee4_23;
                    rax97 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi58)));
                    v98 = rbx25;
                    v99 = rax97;
                    v100 = *reinterpret_cast<int32_t*>(&rsi58) - 1 - *reinterpret_cast<int32_t*>(&rax97);
                    rbx101 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xdc);
                    do {
                        if (!r14d17 && (r13d54 & 0x600 && (rcx102 = *reinterpret_cast<void***>(v20), rax103 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(v23)), v104 = rax103, reinterpret_cast<int1_t>(v19 == reinterpret_cast<uint64_t>(rax103) + reinterpret_cast<unsigned char>(rcx102))))) {
                            rax105 = v99;
                            r8_106 = reinterpret_cast<void**>(static_cast<int64_t>(v100 + *reinterpret_cast<int32_t*>(&rax105)));
                            if (reinterpret_cast<signed char>(rax105) >= reinterpret_cast<signed char>(v23)) {
                                r8_106 = v23;
                            }
                            rdi107 = v23 + 1;
                            rbx108 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(r8_106));
                            rsi109 = rbx101;
                            while (rdx110 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx108) + reinterpret_cast<unsigned char>(rbx108)), rax111 = realloc(rcx102, rdx110, r8_106, rcx102, rdx110, r8_106), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), rax111 == 0) {
                                if (reinterpret_cast<unsigned char>(rdi107) >= reinterpret_cast<unsigned char>(rbx108)) 
                                    goto addr_406b17_129;
                                rbx108 = rdi107;
                                rcx102 = *reinterpret_cast<void***>(v20);
                            }
                            rbx101 = rsi109;
                            v23 = rbx108;
                            *reinterpret_cast<void***>(v20) = rax111;
                            v19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax111) + reinterpret_cast<uint64_t>(v104));
                        }
                        rdi112 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xe3);
                        *reinterpret_cast<int32_t*>(&rsi113) = 0;
                        *reinterpret_cast<int32_t*>(&rsi113 + 4) = 0;
                        if (!r14d17) {
                            rsi113 = v19;
                        }
                        while (r9_28 = rbx101, *reinterpret_cast<uint32_t*>(&r8) = 1, *reinterpret_cast<int32_t*>(&r8 + 4) = 0, rax116 = mbrtowc(rsi113, rdi112, 1, r9_28, v114, rsi113, rdi112, 1, r9_28, v115), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), rax116 == -2) {
                            rax119 = in_ch(r12_6, r15_93, 1, r9_28, v117, r12_6, r15_93, 1, r9_28, v118);
                            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                            ebp16 = *reinterpret_cast<uint32_t*>(&rax119);
                            if (*reinterpret_cast<uint32_t*>(&rax119) == 0xffffffff) 
                                goto addr_4054d0_136;
                        }
                        if (rax116 != 1) 
                            goto addr_4054d0_136;
                        rdi120 = v99;
                        v19 = v19 + 2;
                        eax121 = v100 + *reinterpret_cast<int32_t*>(&rdi120);
                    } while (!(reinterpret_cast<uint1_t>(eax121 < 0) | reinterpret_cast<uint1_t>(eax121 == 0)) && (rax124 = in_ch(r12_6, r15_93, 1, r9_28, v122, r12_6, r15_93, 1, r9_28, v123), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), v99 = rdi120 - 1, ebp16 = *reinterpret_cast<uint32_t*>(&rax124), *reinterpret_cast<uint32_t*>(&rax124) != 0xffffffff));
                    rbx25 = v98;
                    if (r14d17) 
                        goto addr_404ad0_37;
                } else {
                    if (*reinterpret_cast<int32_t*>(&rsi58) == -1) {
                        *reinterpret_cast<int32_t*>(&rsi58) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi58) + 4) = 0;
                    }
                    r14d125 = r13d54 & 0x80;
                    if (r14d125) {
                        r15_126 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xf0);
                        rax129 = in_ch(r12_6, r15_126, r8, r9_28, v127, r12_6, r15_126, r8, r9_28, v128);
                        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        if (*reinterpret_cast<uint32_t*>(&rax129) == 0xffffffff) 
                            goto addr_4074e3_145;
                        *reinterpret_cast<uint32_t*>(&rax130) = *reinterpret_cast<uint32_t*>(&rax129);
                        do {
                            *reinterpret_cast<int32_t*>(&rsi58) = *reinterpret_cast<int32_t*>(&rsi58) - 1;
                            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi58) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi58) == 0))) 
                                break;
                            rax130 = in_ch(r12_6, r15_126, r8, r9_28, v131, r12_6, r15_126, r8, r9_28, v132);
                            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        } while (*reinterpret_cast<uint32_t*>(&rax130) != 0xffffffff);
                        ebp16 = *reinterpret_cast<uint32_t*>(&rax130);
                        r14d17 = 0;
                        goto addr_4049b9_36;
                    } else {
                        eax133 = r13d54 & 0x600;
                        v134 = eax133;
                        if (!eax133) {
                            if (v43) {
                                rax135 = v7;
                                if (v43 != 1) {
                                    *reinterpret_cast<uint32_t*>(&rax136) = v43 - 2;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax136) + 4) = 0;
                                    rax135 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(v7 + rax136 * 8) + 8);
                                }
                                r8_137 = *reinterpret_cast<void***>(rax135);
                            } else {
                                r8_137 = *reinterpret_cast<void***>(v21);
                                v21 = v21 + 8;
                            }
                            if (!r8_137) 
                                goto addr_406a86_157;
                        } else {
                            if (v43) {
                                rax138 = v7;
                                if (v43 != 1) {
                                    *reinterpret_cast<uint32_t*>(&rax139) = v43 - 2;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax139) + 4) = 0;
                                    rax138 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(v7 + rax139 * 8) + 8);
                                }
                                v20 = *reinterpret_cast<void***>(rax138);
                            } else {
                                rdi140 = *reinterpret_cast<void***>(v21);
                                v21 = v21 + 8;
                                v20 = rdi140;
                            }
                            if (!v20) 
                                goto addr_407387_113;
                            eax141 = 0x400;
                            if (*reinterpret_cast<int32_t*>(&rsi58) <= 0x400) {
                                eax141 = *reinterpret_cast<int32_t*>(&rsi58);
                            }
                            rax142 = reinterpret_cast<void**>(static_cast<int64_t>(eax141));
                            v23 = rax142;
                            rax143 = malloc(rax142, rax142);
                            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                            r8_137 = rax143;
                            *reinterpret_cast<void***>(v20) = r8_137;
                            if (!r8_137) 
                                goto addr_4078c3_167;
                            rax144 = v8;
                            if (!rax144 || (rdx64 = *reinterpret_cast<void***>(rax144), reinterpret_cast<unsigned char>(rdx64) > reinterpret_cast<unsigned char>(31))) {
                                rax144 = resize_gcollect_part_0(rax144, rdx64, r8_137, rax144, rdx64, r8_137);
                                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                                r8_137 = r8_137;
                                rdx64 = *reinterpret_cast<void***>(rax144);
                            }
                            v8 = rax144;
                            *reinterpret_cast<void***>(rax144) = rdx64 + 1;
                            *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax144 + reinterpret_cast<unsigned char>(rdx64) * 8) + 16) = v20;
                        }
                        r15_145 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xf0);
                        rax148 = in_ch(r12_6, r15_145, r8_137, r9_28, v146, r12_6, r15_145, r8_137, r9_28, v147);
                        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        r8_106 = r8_137;
                        if (*reinterpret_cast<uint32_t*>(&rax148) == 0xffffffff) 
                            goto addr_4074e3_145;
                        rdi149 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi58)));
                        v150 = rbx25;
                        rbx151 = v23;
                        v152 = r14d125;
                        v153 = static_cast<int32_t>(rsi58 - 1) - *reinterpret_cast<int32_t*>(&rdi149);
                        r13d154 = *reinterpret_cast<uint32_t*>(&rax148);
                        while (1) {
                            rbp155 = rbx151;
                            if (v134 && (rcx156 = *reinterpret_cast<void***>(v20), reinterpret_cast<int1_t>(r8_106 == reinterpret_cast<unsigned char>(rcx156) + reinterpret_cast<unsigned char>(rbx151)))) {
                                *reinterpret_cast<int32_t*>(&rdx157) = v153;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx157) + 4) = 0;
                                v158 = rbx151;
                                r14_159 = rbx151 + 1;
                                edi160 = *reinterpret_cast<int32_t*>(&rsi58);
                                rbp161 = reinterpret_cast<void**>(static_cast<int64_t>(static_cast<int32_t>(reinterpret_cast<uint64_t>(rdx157 + reinterpret_cast<unsigned char>(rdi149)))));
                                if (reinterpret_cast<signed char>(rdi149) > reinterpret_cast<signed char>(rbx151)) {
                                    rbp161 = rbx151;
                                }
                                rbx162 = v20;
                                rsi163 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp161) + reinterpret_cast<unsigned char>(rbx151));
                                rbp164 = rdi149;
                                while (rax165 = realloc(rcx156, rsi163, r8_106, rcx156, rsi163, r8_106), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), rax165 == 0) {
                                    if (reinterpret_cast<unsigned char>(r14_159) >= reinterpret_cast<unsigned char>(rsi163)) 
                                        goto addr_406b17_129;
                                    rcx156 = *reinterpret_cast<void***>(rbx162);
                                    rsi163 = r14_159;
                                }
                                rbp155 = rsi163;
                                *reinterpret_cast<int32_t*>(&rsi58) = edi160;
                                rdi149 = rbp164;
                                r8_106 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax165) + reinterpret_cast<unsigned char>(v158));
                                rbx151 = rbp155;
                                *reinterpret_cast<void***>(v20) = rax165;
                            }
                            r14_166 = r8_106 + 1;
                            *reinterpret_cast<int32_t*>(&rsi58) = *reinterpret_cast<int32_t*>(&rsi58) - 1;
                            *reinterpret_cast<void***>(r8_106) = *reinterpret_cast<void***>(&r13d154);
                            if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi58) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi58) == 0)) 
                                break;
                            --rdi149;
                            rax169 = in_ch(r12_6, r15_145, r8_106, r9_28, v167, r12_6, r15_145, r8_106, r9_28, v168);
                            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                            r13d154 = *reinterpret_cast<uint32_t*>(&rax169);
                            if (*reinterpret_cast<uint32_t*>(&rax169) == 0xffffffff) 
                                break;
                            r8_106 = r14_166;
                        }
                        v22 = r14_166;
                        r8 = rbp155;
                        v23 = rbx151;
                        ebp16 = r13d154;
                        rbx25 = v150;
                        r14d17 = v152;
                        text(v20, v22, r8, r9_28);
                        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        v20 = reinterpret_cast<void**>(0);
                        ++v18;
                        goto addr_4049b9_36;
                    }
                }
            } else {
                addr_404ca3_84:
                if (*reinterpret_cast<signed char*>(&rdi60) != 0x73) 
                    goto addr_405100_185; else 
                    goto addr_404cad_186;
            }
            r8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(v23));
            text(v20, v19, r8, r9_28);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            v20 = reinterpret_cast<void**>(0);
            ++v18;
            goto addr_4049b9_36;
            addr_404cad_186:
            r14d170 = r13d54 & 4;
            if (r14d170) {
                r14d17 = r13d54 & 0x80;
                if (!r14d17) {
                    if (!(r13d54 & 0x600)) {
                        *reinterpret_cast<uint32_t*>(&r8) = v43;
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        if (*reinterpret_cast<uint32_t*>(&r8)) {
                            rax171 = v7;
                            if (v43 != 1) {
                                *reinterpret_cast<uint32_t*>(&rax172) = v43 - 2;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax172) + 4) = 0;
                                rax171 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(v7 + rax172 * 8) + 8);
                            }
                            v19 = *reinterpret_cast<void***>(rax171);
                        } else {
                            rdi173 = *reinterpret_cast<void***>(v21);
                            v21 = v21 + 8;
                            v19 = rdi173;
                        }
                        if (!v19) 
                            goto addr_405554_196;
                    } else {
                        *reinterpret_cast<uint32_t*>(&r9_28) = v43;
                        *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
                        if (*reinterpret_cast<uint32_t*>(&r9_28)) {
                            rax174 = v7;
                            if (v43 != 1) {
                                *reinterpret_cast<uint32_t*>(&rax175) = v43 - 2;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax175) + 4) = 0;
                                rax174 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(v7 + rax175 * 8) + 8);
                            }
                            v20 = *reinterpret_cast<void***>(rax174);
                        } else {
                            rdi176 = *reinterpret_cast<void***>(v21);
                            v21 = v21 + 8;
                            v20 = rdi176;
                        }
                        if (!v20) 
                            goto addr_407387_113;
                        rax177 = malloc(0xc8, 0xc8);
                        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        rdi91 = v20;
                        v19 = rax177;
                        *reinterpret_cast<void***>(rdi91) = rax177;
                        if (!rax177) 
                            goto addr_40654d_117;
                        rax178 = v8;
                        if (!rax178 || (rdx64 = *reinterpret_cast<void***>(rax178), reinterpret_cast<unsigned char>(rdx64) > reinterpret_cast<unsigned char>(31))) {
                            rax178 = resize_gcollect_part_0(rax178, rdx64, r8);
                            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                            rdx64 = *reinterpret_cast<void***>(rax178);
                        }
                        v8 = rax178;
                        v23 = reinterpret_cast<void**>(100);
                        *reinterpret_cast<void***>(rax178) = rdx64 + 1;
                        *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax178 + reinterpret_cast<unsigned char>(rdx64) * 8) + 16) = v20;
                    }
                }
                r15_179 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xf0);
                rax182 = in_ch(r12_6, r15_179, r8, r9_28, v180, r12_6, r15_179, r8, r9_28, v181);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                ebp16 = *reinterpret_cast<uint32_t*>(&rax182);
                if (*reinterpret_cast<uint32_t*>(&rax182) == 0xffffffff) 
                    goto addr_405ee4_23;
                v183 = rbx25;
                v184 = r13d54;
                r13_185 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xdc);
                rbx186 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xe3);
                do {
                    eax187 = isspace();
                    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                    if (eax187) 
                        break;
                    *reinterpret_cast<int32_t*>(&rdi188) = 0;
                    *reinterpret_cast<int32_t*>(&rdi188 + 4) = 0;
                    if (!r14d17) {
                        rdi188 = v19;
                    }
                    while (r9_28 = r13_185, *reinterpret_cast<uint32_t*>(&r8) = 1, *reinterpret_cast<int32_t*>(&r8 + 4) = 0, rax191 = mbrtowc(rdi188, rbx186, 1, r9_28, v189, rdi188, rbx186, 1, r9_28, v190), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), rax191 == -2) {
                        rax194 = in_ch(r12_6, r15_179, 1, r9_28, v192, r12_6, r15_179, 1, r9_28, v193);
                        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        ebp16 = *reinterpret_cast<uint32_t*>(&rax194);
                        if (*reinterpret_cast<uint32_t*>(&rax194) == 0xffffffff) 
                            goto addr_4054d0_136;
                    }
                    if (rax191 != 1) 
                        goto addr_4054d0_136;
                    v19 = v19 + 2;
                    if (!r14d17 && (v184 & 0x600 && (r9_28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(v23)), v19 == reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20)) + reinterpret_cast<unsigned char>(r9_28)))) {
                        r8_195 = r9_28;
                        rdi196 = v23 + 1;
                        while (rdx197 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_195) + reinterpret_cast<unsigned char>(r8_195)), rcx198 = *reinterpret_cast<void***>(v20), rax199 = realloc(rcx198, rdx197, r8_195, rcx198, rdx197, r8_195), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), r8 = r8_195, r9_28 = r9_28, !rax199) {
                            if (reinterpret_cast<unsigned char>(rdi196) >= reinterpret_cast<unsigned char>(r8)) 
                                goto addr_4076c2_220;
                            r8_195 = rdi196;
                        }
                        v23 = r8;
                        *reinterpret_cast<void***>(v20) = rax199;
                        v19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax199) + reinterpret_cast<unsigned char>(r9_28));
                    }
                } while ((reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi58) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi58) == 0) || (*reinterpret_cast<int32_t*>(&rsi58) = *reinterpret_cast<int32_t*>(&rsi58) - 1, !!*reinterpret_cast<int32_t*>(&rsi58))) && (rax202 = in_ch(r12_6, r15_179, r8, r9_28, v200, r12_6, r15_179, r8, r9_28, v201), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), ebp16 = *reinterpret_cast<uint32_t*>(&rax202), *reinterpret_cast<uint32_t*>(&rax202) != 0xffffffff));
                goto addr_40616e_224;
            } else {
                edi203 = r13d54 & 0x80;
                if (!edi203) {
                    if (!(r13d54 & 0x600)) {
                        if (v43) {
                            rax204 = v7;
                            if (v43 != 1) {
                                *reinterpret_cast<uint32_t*>(&rax205) = v43 - 2;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax205) + 4) = 0;
                                rax204 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(v7 + rax205 * 8) + 8);
                            }
                            v22 = *reinterpret_cast<void***>(rax204);
                        } else {
                            rcx206 = *reinterpret_cast<void***>(v21);
                            v21 = v21 + 8;
                            v22 = rcx206;
                        }
                        if (!v22) 
                            goto addr_406a30_233;
                    } else {
                        if (v43) {
                            rax207 = v7;
                            if (v43 != 1) {
                                *reinterpret_cast<uint32_t*>(&rax208) = v43 - 2;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax208) + 4) = 0;
                                rax207 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(v7 + rax208 * 8) + 8);
                            }
                            v20 = *reinterpret_cast<void***>(rax207);
                        } else {
                            rcx209 = *reinterpret_cast<void***>(v21);
                            v21 = v21 + 8;
                            v20 = rcx209;
                        }
                        if (!v20) 
                            goto addr_407387_113;
                        rax210 = malloc(100, 100);
                        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                        v22 = rax210;
                        *reinterpret_cast<void***>(v20) = rax210;
                        if (!rax210) 
                            goto addr_40783a_241;
                        rax211 = v8;
                        if (!rax211 || (rdx64 = *reinterpret_cast<void***>(rax211), reinterpret_cast<unsigned char>(rdx64) > reinterpret_cast<unsigned char>(31))) {
                            rax211 = resize_gcollect_part_0(rax211, rdx64, r8, rax211, rdx64, r8);
                            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                            rdx64 = *reinterpret_cast<void***>(rax211);
                        }
                        v8 = rax211;
                        *reinterpret_cast<void***>(rax211) = rdx64 + 1;
                        v23 = reinterpret_cast<void**>(100);
                        *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax211 + reinterpret_cast<unsigned char>(rdx64) * 8) + 16) = v20;
                    }
                }
                r15_212 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xf0);
                rax215 = in_ch(r12_6, r15_212, r8, r9_28, v213, r12_6, r15_212, r8, r9_28, v214);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                ebp16 = *reinterpret_cast<uint32_t*>(&rax215);
                if (*reinterpret_cast<uint32_t*>(&rax215) == 0xffffffff) 
                    goto addr_405ee4_23;
                v216 = rbx25;
                ebx217 = ebp16;
                v218 = r14d170;
                v219 = r13d54;
                r14d220 = r13d54 & 0x600;
                r13_221 = v22;
                do {
                    eax222 = isspace();
                    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                    if (eax222) 
                        goto addr_406a35_248;
                    if (!edi203) {
                        rax223 = r13_221 + 1;
                        *reinterpret_cast<void***>(r13_221) = *reinterpret_cast<void***>(&ebx217);
                        if (r14d220) {
                            r13_221 = rax223;
                            rcx224 = *reinterpret_cast<void***>(v20);
                            if (rax223 == reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(rcx224)) {
                                v225 = ebx217;
                                rbx226 = v20;
                                r13_227 = v23 + 1;
                                rsi228 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(v23));
                                ebp229 = *reinterpret_cast<int32_t*>(&rsi58);
                                while (rax230 = realloc(rcx224, rsi228, r8, rcx224, rsi228, r8), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), rax230 == 0) {
                                    if (reinterpret_cast<unsigned char>(r13_227) >= reinterpret_cast<unsigned char>(rsi228)) 
                                        goto addr_406d8f_255;
                                    rcx224 = *reinterpret_cast<void***>(rbx226);
                                    rsi228 = r13_227;
                                }
                                r13_231 = v23;
                                *reinterpret_cast<int32_t*>(&rsi58) = ebp229;
                                v23 = rsi228;
                                ebx217 = v225;
                                r13_221 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_231) + reinterpret_cast<unsigned char>(rax230));
                                *reinterpret_cast<void***>(v20) = rax230;
                            }
                        } else {
                            r13_221 = rax223;
                        }
                    }
                } while ((reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi58) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi58) == 0) || (*reinterpret_cast<int32_t*>(&rsi58) = *reinterpret_cast<int32_t*>(&rsi58) - 1, !!*reinterpret_cast<int32_t*>(&rsi58))) && (rax234 = in_ch(r12_6, r15_212, r8, r9_28, v232, r12_6, r15_212, r8, r9_28, v233), rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8), ebx217 = *reinterpret_cast<uint32_t*>(&rax234), *reinterpret_cast<uint32_t*>(&rax234) != 0xffffffff));
                goto addr_406453_260;
            }
            *reinterpret_cast<uint32_t*>(&r9_28) = 1;
            *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
            r8 = r15_179;
            rbx25 = v183;
            back_ch(ebp16, r12_6, r8, 1, v235, ebp16, r12_6, r8, 1, v236);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            addr_406173_262:
            if (r14d17) {
                addr_404ad0_37:
                r14d17 = 0;
                goto addr_4049b9_36;
            } else {
                rsi237 = v19 + 2;
                *reinterpret_cast<void***>(v19) = reinterpret_cast<void**>(0);
                r8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(v23));
                text(v20, rsi237, r8, r9_28);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                v19 = rsi237;
                ++v18;
                v20 = reinterpret_cast<void**>(0);
                goto addr_4049b9_36;
            }
            addr_40616e_224:
            rbx25 = v183;
            goto addr_406173_262;
            addr_406a35_248:
            ebp16 = ebx217;
            *reinterpret_cast<uint32_t*>(&r9_28) = 1;
            *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
            r8 = r15_212;
            v22 = r13_221;
            r14d17 = v218;
            rbx25 = v216;
            back_ch(ebp16, r12_6, r8, 1, v238, ebp16, r12_6, r8, 1, v239);
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
            addr_406464_264:
            if (!edi203) {
                r14d17 = 0;
                *reinterpret_cast<void***>(v22) = reinterpret_cast<void**>(0);
                r8 = v23;
                rsi240 = v22 + 1;
                text(v20, rsi240, r8, r9_28);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
                v22 = rsi240;
                ++v18;
                v20 = reinterpret_cast<void**>(0);
                goto addr_4049b9_36;
            }
            addr_406453_260:
            ebp16 = ebx217;
            r14d17 = v218;
            v22 = r13_221;
            rbx25 = v216;
            goto addr_406464_264;
            addr_404bf0_79:
            if (*reinterpret_cast<unsigned char*>(&eax44) != 0x74) {
                if (*reinterpret_cast<unsigned char*>(&eax44) != 0x7a) 
                    goto addr_404e2e_69; else 
                    goto addr_404c00_64;
            }
            addr_404bb7_80:
            if (*reinterpret_cast<unsigned char*>(&eax44) == 0x6c) {
                *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                if (*reinterpret_cast<signed char*>(&rdi60) == 0x6c) {
                    r13d54 = r13d54 | 12;
                    *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 2));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                    v61 = rbx25 + 2;
                    goto addr_404c11_81;
                } else {
                    r13d54 = r13d54 | 4;
                    v61 = rbx25 + 1;
                    goto addr_404c11_81;
                }
            } else {
                if (*reinterpret_cast<unsigned char*>(&eax44) != 0x6d) 
                    goto addr_404e2e_69;
                *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 1));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                if (*reinterpret_cast<signed char*>(&rdi60) == 0x6c) {
                    r13d54 = r13d54 | 0x404;
                    *reinterpret_cast<uint32_t*>(&rdi60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25 + 2));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = 0;
                    v61 = rbx25 + 2;
                    goto addr_404c11_81;
                } else {
                    r13d54 = r13d54 | 0x400;
                    v61 = rbx25 + 1;
                    goto addr_404c11_81;
                }
            }
            label_59:
            *reinterpret_cast<int32_t*>(&rsi58) = -1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi58) + 4) = 0;
            goto addr_404ba3_60;
        }
        goto addr_405e13_274;
    }
    addr_40498f_275:
    __asm__("movaps xmm6, [rsp+0x110]");
    __asm__("movaps xmm7, [rsp+0x120]");
    return rax10;
    addr_405e13_274:
    if (r14d17) {
        r15_241 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp12) + 0xf0);
        do {
            rax244 = in_ch(r12_6, r15_241, r8, r9_28, v242, r12_6, r15_241, r8, r9_28, v243);
            eax245 = isspace();
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8 - 8 + 8);
        } while (eax245);
        back_ch(*reinterpret_cast<uint32_t*>(&rax244), r12_6, r15_241, 0, v246, *reinterpret_cast<uint32_t*>(&rax244), r12_6, r15_241, 0, v247);
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    }
    addr_404970_67:
    rax10 = cleanup_return(v18, reinterpret_cast<int64_t>(rsp12) + 0xe8, v20, reinterpret_cast<int64_t>(rsp12) + 0x100, v248);
    goto addr_40498f_275;
    addr_4054b0_16:
    back_ch(*reinterpret_cast<uint32_t*>(&rax34), r12_6, r15_30, 1, v249, *reinterpret_cast<uint32_t*>(&rax34), r12_6, r15_30, 1, v250);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    addr_404e69_93:
    eax251 = 0xffffffff;
    if (v18) {
        eax251 = v18;
    }
    addr_404e77_280:
    rax10 = cleanup_return(eax251, reinterpret_cast<int64_t>(rsp12) + 0xe8, v20, reinterpret_cast<int64_t>(rsp12) + 0x100, v252);
    goto addr_40498f_275;
    addr_405ee4_23:
    if (v18) {
        ebp16 = v18;
    }
    rax10 = cleanup_return(ebp16, reinterpret_cast<int64_t>(rsp12) + 0xe8, v20, reinterpret_cast<int64_t>(rsp12) + 0x100, v253);
    goto addr_40498f_275;
    addr_404955_38:
    back_ch(ebp16, r12_6, r15_37, 0, v254, ebp16, r12_6, r15_37, 0, v255);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    goto addr_404970_67;
    addr_404a81_39:
    if (v18) {
        ebp16 = v18;
    }
    rax10 = cleanup_return(ebp16, reinterpret_cast<int64_t>(rsp52) + 0xe8, v20, reinterpret_cast<int64_t>(rsp52) + 0x100, v256);
    goto addr_40498f_275;
    addr_4054d0_136:
    rax257 = _errno();
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    *rax257 = 42;
    goto addr_404970_67;
    addr_406b17_129:
    release_ptrs(reinterpret_cast<int64_t>(rsp12) + 0xe8, reinterpret_cast<int64_t>(rsp12) + 0x100, r8_106, r9_28);
    *reinterpret_cast<int32_t*>(&rax10) = -1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    goto addr_40498f_275;
    addr_40558e_106:
    goto addr_404970_67;
    addr_407387_113:
    rax10 = cleanup_return(v18, reinterpret_cast<int64_t>(rsp12) + 0xe8, 0, reinterpret_cast<int64_t>(rsp12) + 0x100, v258);
    goto addr_40498f_275;
    addr_40654d_117:
    eax259 = 0xffffffff;
    if (!(r13d54 & 0x400)) {
        eax259 = v18;
    }
    rax10 = cleanup_return(eax259, reinterpret_cast<int64_t>(rsp12) + 0xe8, rdi91, reinterpret_cast<int64_t>(rsp12) + 0x100, v260);
    goto addr_40498f_275;
    addr_4074e3_145:
    if (!v18) {
        v18 = 0xffffffff;
        goto addr_404970_67;
    }
    addr_406a86_157:
    goto addr_404970_67;
    addr_4078c3_167:
    eax251 = 0xffffffff;
    if (!(r13d54 & 0x400)) {
        eax251 = v18;
    }
    goto addr_404e77_280;
    addr_405100_185:
    eax261 = static_cast<int32_t>(rdi60 - 37);
    if (*reinterpret_cast<unsigned char*>(&eax261) <= 83) {
        *reinterpret_cast<uint32_t*>(&rax262) = *reinterpret_cast<unsigned char*>(&eax261);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax262) + 4) = 0;
        goto *reinterpret_cast<int32_t*>(0x412754 + rax262 * 4) + 0x412754;
    }
    addr_4076c2_220:
    if (v184 & 0x400) {
        addr_406e06_291:
        ecx263 = 0xffffffff;
    } else {
        rax264 = v20;
        v20 = reinterpret_cast<void**>(0);
        ecx263 = v18 + 1;
        *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax264)) + reinterpret_cast<unsigned char>(r9_28) + 0xfffffffffffffffe) = 0;
    }
    addr_406dbf_293:
    rax10 = cleanup_return(ecx263, reinterpret_cast<int64_t>(rsp12) + 0xe8, v20, reinterpret_cast<int64_t>(rsp12) + 0x100, v265);
    goto addr_40498f_275;
    addr_405554_196:
    goto addr_404970_67;
    addr_406d8f_255:
    if (v219 & 0x400) 
        goto addr_406e06_291;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20)) + reinterpret_cast<unsigned char>(v23) + 0xffffffffffffffff) = 0;
    v20 = reinterpret_cast<void**>(0);
    ecx263 = v18 + 1;
    goto addr_406dbf_293;
    addr_406a30_233:
    goto addr_404970_67;
    addr_40783a_241:
    eax266 = 0xffffffff;
    if (!(r13d54 & 0x400)) {
        eax266 = v18;
    }
    rax10 = cleanup_return(eax266, reinterpret_cast<int64_t>(rsp12) + 0xe8, v20, reinterpret_cast<int64_t>(rsp12) + 0x100, v267);
    goto addr_40498f_275;
}

int64_t ungetc = 0x3dcda02;

void ungetc() {
    goto ungetc;
}

/* .text */
void** text(void** rcx, void** edx, void** r8, void** r9) {
    void** rsi5;
    int64_t rbp6;
    void** edi7;
    void** ebx8;
    void** rdx9;
    void** ecx10;
    int32_t eax11;
    int64_t v12;
    void** rax13;
    void* r12_14;
    int32_t v15;
    void* rbx16;
    unsigned char* rbx17;
    void* r13_18;
    unsigned char* r14_19;
    unsigned char* rsi20;
    void** r8_21;
    void* rdi22;
    void* rsi23;
    void** r8_24;

    rsi5 = rcx;
    *reinterpret_cast<void***>(&rbp6) = edx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = 0;
    edi7 = r8;
    ebx8 = r9;
    *reinterpret_cast<int32_t*>(&rdx9) = (__intrinsic() >> 1) - (static_cast<int32_t>(reinterpret_cast<uint64_t>(r8 + 8)) >> 31);
    *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rdx9) <= 1) {
        ecx10 = reinterpret_cast<void**>(0);
    } else {
        eax11 = 1;
        ecx10 = reinterpret_cast<void**>(0);
        do {
            eax11 = eax11 + eax11;
            ++ecx10;
        } while (*reinterpret_cast<int32_t*>(&rdx9) > eax11);
    }
    rax13 = __Balloc_D2A(ecx10, rdx9, r8, r9, v12);
    r12_14 = reinterpret_cast<void*>(static_cast<int64_t>(v15));
    *reinterpret_cast<void***>(rax13 + 24) = ebx8;
    *reinterpret_cast<void***>(rax13 + 20) = reinterpret_cast<void**>(1);
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rbp6)) <= reinterpret_cast<signed char>(9)) {
        rbx16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi5) + reinterpret_cast<uint64_t>(r12_14) + 9);
        *reinterpret_cast<void***>(&rbp6) = reinterpret_cast<void**>(9);
    } else {
        rbx17 = reinterpret_cast<unsigned char*>(rsi5 + 9);
        *reinterpret_cast<int32_t*>(&r13_18) = static_cast<int32_t>(rbp6 - 10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = 0;
        r14_19 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi5) + reinterpret_cast<uint64_t>(r13_18) + 10);
        rsi20 = rbx17;
        do {
            ++rsi20;
            *reinterpret_cast<int32_t*>(&r8_21) = *reinterpret_cast<signed char*>(rsi20 - 1) - 48;
            *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
            rax13 = __multadd_D2A(rax13, 10, r8_21);
        } while (rsi20 != r14_19);
        rbx16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx17) + (reinterpret_cast<uint64_t>(r12_14) + reinterpret_cast<uint64_t>(r13_18) + 1));
    }
    if (reinterpret_cast<signed char>(edi7) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rbp6))) {
        *reinterpret_cast<void**>(&rdi22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi7 - 1) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp6)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = 0;
        rsi23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx16) + reinterpret_cast<int64_t>(rdi22) + 1);
        do {
            rbx16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx16) + 1);
            *reinterpret_cast<int32_t*>(&r8_24) = *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx16) - 1) - 48;
            *reinterpret_cast<int32_t*>(&r8_24 + 4) = 0;
            rax13 = __multadd_D2A(rax13, 10, r8_24);
        } while (rsi23 != rbx16);
    }
    return rax13;
}

int64_t clock = 0x3dcd8f8;

int32_t clock() {
    goto clock;
}

/* .text */
void text() {
    return;
}

void fun_410247(signed char* rcx) {
    signed char* rax2;
    signed char al3;

    *reinterpret_cast<signed char*>(&rax2) = reinterpret_cast<signed char>(al3 + *rcx);
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
    *rax2 = reinterpret_cast<signed char>(*rax2 + *reinterpret_cast<signed char*>(&rax2));
}

void fun_41025f() {
    int32_t* rax1;
    int32_t* rax2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    signed char* rax9;
    signed char* rax10;
    signed char al11;
    signed char* rax12;
    signed char* rax13;
    signed char al14;
    signed char* rax15;
    signed char* rax16;
    signed char al17;
    signed char* rax18;
    signed char* rax19;
    signed char al20;
    signed char* rax21;
    signed char* rax22;
    signed char al23;
    signed char* rax24;
    signed char* rax25;
    signed char al26;
    signed char* rax27;
    signed char* rax28;
    signed char al29;
    signed char* rax30;
    signed char* rax31;
    signed char al32;
    signed char* rax33;
    signed char* rax34;
    signed char al35;
    signed char* rax36;
    signed char* rax37;
    signed char al38;
    signed char* rax39;
    signed char* rax40;
    signed char al41;
    signed char* rax42;
    signed char* rax43;
    signed char al44;
    signed char* rax45;
    signed char* rax46;
    signed char al47;
    signed char* rax48;
    signed char* rax49;
    signed char al50;
    signed char* rax51;
    signed char* rax52;
    signed char al53;
    signed char* rax54;
    signed char* rax55;
    signed char al56;
    signed char* rax57;
    signed char* rax58;
    signed char al59;
    signed char* rax60;
    signed char* rax61;
    signed char al62;
    signed char* rax63;
    signed char* rax64;
    signed char al65;
    signed char* rax66;
    signed char* rax67;
    signed char al68;
    signed char* rax69;
    signed char* rax70;
    signed char al71;
    signed char* rax72;
    signed char* rax73;
    signed char al74;
    signed char* rax75;
    signed char* rax76;
    signed char al77;
    signed char* rax78;
    signed char* rax79;
    signed char al80;
    signed char* rax81;
    signed char* rax82;
    signed char al83;
    signed char* rax84;
    signed char* rax85;
    signed char al86;
    signed char* rax87;
    signed char* rax88;
    signed char al89;
    signed char* rax90;
    signed char* rax91;
    signed char al92;
    signed char* rax93;
    signed char* rax94;
    signed char al95;
    signed char* rax96;
    signed char* rax97;
    signed char al98;
    signed char* rax99;
    signed char* rax100;
    signed char al101;
    signed char* rax102;
    signed char* rax103;
    signed char al104;
    signed char* rax105;
    signed char* rax106;
    signed char al107;
    signed char* rax108;
    signed char* rax109;
    signed char al110;
    signed char* rax111;
    signed char* rax112;
    signed char al113;
    signed char* rax114;
    signed char* rax115;
    signed char al116;
    signed char* rax117;
    signed char* rax118;
    signed char al119;
    signed char* rax120;
    signed char* rax121;
    signed char al122;
    signed char* rax123;
    signed char* rax124;
    signed char al125;
    signed char* rax126;
    signed char* rax127;
    signed char al128;
    signed char* rax129;
    signed char* rax130;
    signed char al131;
    signed char* rax132;
    signed char* rax133;
    signed char al134;
    signed char* rax135;
    signed char* rax136;
    signed char al137;
    signed char* rax138;
    signed char* rax139;
    signed char al140;
    signed char* rax141;
    signed char* rax142;
    signed char al143;
    signed char* rax144;
    signed char* rax145;
    signed char al146;
    signed char* rax147;
    signed char* rax148;
    signed char al149;
    signed char* rax150;
    signed char* rax151;
    signed char al152;
    signed char* rax153;
    signed char* rax154;
    signed char al155;
    signed char* rax156;
    signed char* rax157;
    signed char al158;
    signed char* rax159;
    signed char* rax160;
    signed char al161;
    signed char* rax162;
    signed char* rax163;
    signed char al164;
    signed char* rax165;
    signed char* rax166;
    signed char al167;
    signed char* rax168;
    signed char* rax169;
    signed char al170;
    signed char* rax171;
    signed char* rax172;
    signed char al173;
    signed char* rax174;
    signed char* rax175;
    signed char al176;
    signed char* rax177;
    signed char* rax178;
    signed char al179;
    signed char* rax180;
    signed char* rax181;
    signed char al182;
    signed char* rax183;
    signed char* rax184;
    signed char al185;
    signed char* rax186;
    signed char* rax187;
    signed char al188;
    signed char* rax189;
    signed char* rax190;
    signed char al191;
    signed char* rax192;
    signed char* rax193;
    signed char al194;
    signed char* rax195;
    signed char* rax196;
    signed char al197;
    signed char* rax198;
    signed char* rax199;
    signed char al200;
    signed char* rax201;
    signed char* rax202;
    signed char al203;
    signed char* rax204;
    signed char* rax205;
    signed char al206;
    signed char* rax207;
    signed char* rax208;
    signed char al209;
    signed char* rax210;
    signed char* rax211;
    signed char al212;
    signed char* rax213;
    signed char* rax214;
    signed char al215;
    signed char* rax216;
    signed char* rax217;
    signed char al218;
    signed char* rax219;
    signed char* rax220;
    signed char al221;
    signed char* rax222;
    signed char* rax223;
    signed char al224;
    signed char* rax225;
    signed char* rax226;
    signed char al227;
    signed char* rax228;
    signed char* rax229;
    signed char al230;
    signed char* rax231;
    signed char* rax232;
    signed char al233;
    signed char* rax234;
    signed char* rax235;
    signed char al236;
    signed char* rax237;
    signed char* rax238;
    signed char al239;
    signed char* rax240;
    signed char* rax241;
    signed char al242;
    signed char* rax243;
    signed char* rax244;
    signed char al245;
    signed char* rax246;
    signed char* rax247;
    signed char al248;
    signed char* rax249;
    signed char* rax250;
    signed char al251;
    signed char* rax252;
    signed char* rax253;
    signed char al254;
    signed char* rax255;
    signed char* rax256;
    signed char al257;
    signed char* rax258;
    signed char* rax259;
    signed char al260;
    signed char* rax261;
    signed char* rax262;
    signed char al263;
    signed char* rax264;
    signed char* rax265;
    signed char al266;
    signed char* rax267;
    signed char* rax268;
    signed char al269;
    signed char* rax270;
    signed char* rax271;
    signed char al272;
    signed char* rax273;
    signed char* rax274;
    signed char al275;
    signed char* rax276;
    signed char* rax277;
    signed char al278;
    signed char* rax279;
    signed char* rax280;
    signed char al281;
    signed char* rax282;
    signed char* rax283;
    signed char al284;
    signed char* rax285;
    signed char* rax286;
    signed char al287;
    signed char* rax288;
    signed char* rax289;
    signed char al290;
    signed char* rax291;
    signed char* rax292;
    signed char al293;
    signed char* rax294;
    signed char* rax295;
    signed char al296;
    signed char* rax297;
    signed char* rax298;
    signed char al299;
    signed char* rax300;
    signed char* rax301;
    signed char al302;
    signed char* rax303;
    signed char* rax304;
    signed char al305;
    signed char* rax306;
    signed char* rax307;
    signed char al308;
    signed char* rax309;
    signed char* rax310;
    signed char al311;
    signed char* rax312;
    signed char* rax313;
    signed char al314;
    signed char* rax315;
    signed char* rax316;
    signed char al317;
    signed char* rax318;
    signed char* rax319;
    signed char al320;
    signed char* rax321;
    signed char* rax322;
    signed char al323;
    signed char* rax324;
    signed char* rax325;
    signed char al326;
    signed char* rax327;
    signed char* rax328;
    signed char al329;
    signed char* rax330;
    signed char* rax331;
    signed char al332;
    signed char* rax333;
    signed char* rax334;
    signed char al335;
    signed char* rax336;
    signed char* rax337;
    signed char al338;
    signed char* rax339;
    signed char* rax340;
    signed char al341;
    signed char* rax342;
    signed char* rax343;
    signed char al344;
    signed char* rax345;
    signed char* rax346;
    signed char al347;
    signed char* rax348;
    signed char* rax349;
    signed char al350;
    signed char* rax351;
    signed char* rax352;
    signed char al353;
    signed char* rax354;
    signed char* rax355;
    signed char al356;
    signed char* rax357;
    signed char* rax358;
    signed char al359;
    signed char* rax360;
    signed char* rax361;
    signed char al362;
    signed char* rax363;
    signed char* rax364;
    signed char al365;
    signed char* rax366;
    signed char* rax367;
    signed char al368;
    signed char* rax369;
    signed char* rax370;
    signed char al371;
    signed char* rax372;
    signed char* rax373;
    signed char al374;
    signed char* rax375;
    signed char* rax376;
    signed char al377;
    signed char* rax378;
    signed char* rax379;
    signed char al380;
    signed char* rax381;
    signed char* rax382;
    signed char al383;
    signed char* rax384;
    signed char* rax385;
    signed char al386;
    signed char* rax387;
    signed char* rax388;
    signed char al389;
    signed char* rax390;
    signed char* rax391;
    signed char al392;
    signed char* rax393;
    signed char* rax394;
    signed char al395;
    signed char* rax396;
    signed char* rax397;
    signed char al398;
    signed char* rax399;
    signed char* rax400;
    signed char al401;
    signed char* rax402;
    signed char* rax403;
    signed char al404;
    signed char* rax405;
    signed char* rax406;
    signed char al407;
    signed char* rax408;
    signed char* rax409;
    signed char al410;
    signed char* rax411;
    signed char* rax412;
    signed char al413;
    signed char* rax414;
    signed char* rax415;
    signed char al416;
    signed char* rax417;
    signed char* rax418;
    signed char al419;
    signed char* rax420;
    signed char* rax421;
    signed char al422;
    signed char* rax423;
    signed char* rax424;
    signed char al425;
    signed char* rax426;
    signed char* rax427;
    signed char al428;
    signed char* rax429;
    signed char* rax430;
    signed char al431;
    signed char* rax432;
    signed char* rax433;
    signed char al434;
    signed char* rax435;
    signed char* rax436;
    signed char al437;
    signed char* rax438;
    signed char* rax439;
    signed char al440;
    signed char* rax441;
    signed char* rax442;
    signed char al443;
    signed char* rax444;
    signed char* rax445;
    signed char al446;
    signed char* rax447;
    signed char* rax448;
    signed char al449;
    signed char* rax450;
    signed char* rax451;
    signed char al452;
    signed char* rax453;
    signed char* rax454;
    signed char al455;
    signed char* rax456;
    signed char* rax457;
    signed char al458;
    signed char* rax459;
    signed char* rax460;
    signed char al461;
    signed char* rax462;
    signed char* rax463;
    signed char al464;
    signed char* rax465;
    signed char* rax466;
    signed char al467;
    signed char* rax468;
    signed char* rax469;
    signed char al470;
    signed char* rax471;
    signed char* rax472;
    signed char al473;
    signed char* rax474;
    signed char* rax475;
    signed char al476;
    signed char* rax477;
    signed char* rax478;
    signed char al479;
    signed char* rax480;
    signed char* rax481;
    signed char al482;
    signed char* rax483;
    signed char* rax484;
    signed char al485;
    signed char* rax486;
    signed char* rax487;
    signed char al488;
    signed char* rax489;
    signed char* rax490;
    signed char al491;
    signed char* rax492;
    signed char* rax493;
    signed char al494;
    signed char* rax495;
    signed char* rax496;
    signed char al497;
    signed char* rax498;
    signed char* rax499;
    signed char al500;
    signed char* rax501;
    signed char* rax502;
    signed char al503;
    signed char* rax504;
    signed char* rax505;
    signed char al506;
    signed char* rax507;
    signed char* rax508;
    signed char al509;
    signed char* rax510;
    signed char* rax511;
    signed char al512;
    signed char* rax513;
    signed char* rax514;
    signed char al515;
    signed char* rax516;
    signed char* rax517;
    signed char al518;
    signed char* rax519;
    signed char* rax520;
    signed char al521;
    signed char* rax522;
    signed char* rax523;
    signed char al524;
    signed char* rax525;
    signed char* rax526;
    signed char al527;
    signed char* rax528;
    signed char* rax529;
    signed char al530;
    signed char* rax531;
    signed char* rax532;
    signed char al533;
    signed char* rax534;
    signed char* rax535;
    signed char al536;
    signed char* rax537;
    signed char* rax538;
    signed char al539;
    signed char* rax540;
    signed char* rax541;
    signed char al542;
    signed char* rax543;
    signed char* rax544;
    signed char al545;
    signed char* rax546;
    signed char* rax547;
    signed char al548;
    signed char* rax549;
    signed char* rax550;
    signed char al551;
    signed char* rax552;
    signed char* rax553;
    signed char al554;
    signed char* rax555;
    signed char* rax556;
    signed char al557;
    signed char* rax558;
    signed char* rax559;
    signed char al560;
    signed char* rax561;
    signed char* rax562;
    signed char al563;
    signed char* rax564;
    signed char* rax565;
    signed char al566;
    signed char* rax567;
    signed char* rax568;
    signed char al569;
    signed char* rax570;
    signed char* rax571;
    signed char al572;
    signed char* rax573;
    signed char* rax574;
    signed char al575;
    signed char* rax576;
    signed char* rax577;
    signed char al578;
    signed char* rax579;
    signed char* rax580;
    signed char al581;
    signed char* rax582;
    signed char* rax583;
    signed char al584;
    signed char* rax585;
    signed char* rax586;
    signed char al587;
    signed char* rax588;
    signed char* rax589;
    signed char al590;
    signed char* rax591;
    signed char* rax592;
    signed char al593;
    signed char* rax594;
    signed char* rax595;
    signed char al596;
    signed char* rax597;
    signed char* rax598;
    signed char al599;
    signed char* rax600;
    signed char* rax601;
    signed char al602;
    signed char* rax603;
    signed char* rax604;
    signed char al605;
    signed char* rax606;
    signed char* rax607;
    signed char al608;
    signed char* rax609;
    signed char* rax610;
    signed char al611;
    signed char* rax612;
    signed char* rax613;
    signed char al614;
    signed char* rax615;
    signed char* rax616;
    signed char al617;
    signed char* rax618;
    signed char* rax619;
    signed char al620;
    signed char* rax621;
    signed char* rax622;
    signed char al623;

    *rax1 = *rax2 + 1;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    *rax9 = reinterpret_cast<signed char>(*rax10 + al11);
    *rax12 = reinterpret_cast<signed char>(*rax13 + al14);
    *rax15 = reinterpret_cast<signed char>(*rax16 + al17);
    *rax18 = reinterpret_cast<signed char>(*rax19 + al20);
    *rax21 = reinterpret_cast<signed char>(*rax22 + al23);
    *rax24 = reinterpret_cast<signed char>(*rax25 + al26);
    *rax27 = reinterpret_cast<signed char>(*rax28 + al29);
    *rax30 = reinterpret_cast<signed char>(*rax31 + al32);
    *rax33 = reinterpret_cast<signed char>(*rax34 + al35);
    *rax36 = reinterpret_cast<signed char>(*rax37 + al38);
    *rax39 = reinterpret_cast<signed char>(*rax40 + al41);
    *rax42 = reinterpret_cast<signed char>(*rax43 + al44);
    *rax45 = reinterpret_cast<signed char>(*rax46 + al47);
    *rax48 = reinterpret_cast<signed char>(*rax49 + al50);
    *rax51 = reinterpret_cast<signed char>(*rax52 + al53);
    *rax54 = reinterpret_cast<signed char>(*rax55 + al56);
    *rax57 = reinterpret_cast<signed char>(*rax58 + al59);
    *rax60 = reinterpret_cast<signed char>(*rax61 + al62);
    *rax63 = reinterpret_cast<signed char>(*rax64 + al65);
    *rax66 = reinterpret_cast<signed char>(*rax67 + al68);
    *rax69 = reinterpret_cast<signed char>(*rax70 + al71);
    *rax72 = reinterpret_cast<signed char>(*rax73 + al74);
    *rax75 = reinterpret_cast<signed char>(*rax76 + al77);
    *rax78 = reinterpret_cast<signed char>(*rax79 + al80);
    *rax81 = reinterpret_cast<signed char>(*rax82 + al83);
    *rax84 = reinterpret_cast<signed char>(*rax85 + al86);
    *rax87 = reinterpret_cast<signed char>(*rax88 + al89);
    *rax90 = reinterpret_cast<signed char>(*rax91 + al92);
    *rax93 = reinterpret_cast<signed char>(*rax94 + al95);
    *rax96 = reinterpret_cast<signed char>(*rax97 + al98);
    *rax99 = reinterpret_cast<signed char>(*rax100 + al101);
    *rax102 = reinterpret_cast<signed char>(*rax103 + al104);
    *rax105 = reinterpret_cast<signed char>(*rax106 + al107);
    *rax108 = reinterpret_cast<signed char>(*rax109 + al110);
    *rax111 = reinterpret_cast<signed char>(*rax112 + al113);
    *rax114 = reinterpret_cast<signed char>(*rax115 + al116);
    *rax117 = reinterpret_cast<signed char>(*rax118 + al119);
    *rax120 = reinterpret_cast<signed char>(*rax121 + al122);
    *rax123 = reinterpret_cast<signed char>(*rax124 + al125);
    *rax126 = reinterpret_cast<signed char>(*rax127 + al128);
    *rax129 = reinterpret_cast<signed char>(*rax130 + al131);
    *rax132 = reinterpret_cast<signed char>(*rax133 + al134);
    *rax135 = reinterpret_cast<signed char>(*rax136 + al137);
    *rax138 = reinterpret_cast<signed char>(*rax139 + al140);
    *rax141 = reinterpret_cast<signed char>(*rax142 + al143);
    *rax144 = reinterpret_cast<signed char>(*rax145 + al146);
    *rax147 = reinterpret_cast<signed char>(*rax148 + al149);
    *rax150 = reinterpret_cast<signed char>(*rax151 + al152);
    *rax153 = reinterpret_cast<signed char>(*rax154 + al155);
    *rax156 = reinterpret_cast<signed char>(*rax157 + al158);
    *rax159 = reinterpret_cast<signed char>(*rax160 + al161);
    *rax162 = reinterpret_cast<signed char>(*rax163 + al164);
    *rax165 = reinterpret_cast<signed char>(*rax166 + al167);
    *rax168 = reinterpret_cast<signed char>(*rax169 + al170);
    *rax171 = reinterpret_cast<signed char>(*rax172 + al173);
    *rax174 = reinterpret_cast<signed char>(*rax175 + al176);
    *rax177 = reinterpret_cast<signed char>(*rax178 + al179);
    *rax180 = reinterpret_cast<signed char>(*rax181 + al182);
    *rax183 = reinterpret_cast<signed char>(*rax184 + al185);
    *rax186 = reinterpret_cast<signed char>(*rax187 + al188);
    *rax189 = reinterpret_cast<signed char>(*rax190 + al191);
    *rax192 = reinterpret_cast<signed char>(*rax193 + al194);
    *rax195 = reinterpret_cast<signed char>(*rax196 + al197);
    *rax198 = reinterpret_cast<signed char>(*rax199 + al200);
    *rax201 = reinterpret_cast<signed char>(*rax202 + al203);
    *rax204 = reinterpret_cast<signed char>(*rax205 + al206);
    *rax207 = reinterpret_cast<signed char>(*rax208 + al209);
    *rax210 = reinterpret_cast<signed char>(*rax211 + al212);
    *rax213 = reinterpret_cast<signed char>(*rax214 + al215);
    *rax216 = reinterpret_cast<signed char>(*rax217 + al218);
    *rax219 = reinterpret_cast<signed char>(*rax220 + al221);
    *rax222 = reinterpret_cast<signed char>(*rax223 + al224);
    *rax225 = reinterpret_cast<signed char>(*rax226 + al227);
    *rax228 = reinterpret_cast<signed char>(*rax229 + al230);
    *rax231 = reinterpret_cast<signed char>(*rax232 + al233);
    *rax234 = reinterpret_cast<signed char>(*rax235 + al236);
    *rax237 = reinterpret_cast<signed char>(*rax238 + al239);
    *rax240 = reinterpret_cast<signed char>(*rax241 + al242);
    *rax243 = reinterpret_cast<signed char>(*rax244 + al245);
    *rax246 = reinterpret_cast<signed char>(*rax247 + al248);
    *rax249 = reinterpret_cast<signed char>(*rax250 + al251);
    *rax252 = reinterpret_cast<signed char>(*rax253 + al254);
    *rax255 = reinterpret_cast<signed char>(*rax256 + al257);
    *rax258 = reinterpret_cast<signed char>(*rax259 + al260);
    *rax261 = reinterpret_cast<signed char>(*rax262 + al263);
    *rax264 = reinterpret_cast<signed char>(*rax265 + al266);
    *rax267 = reinterpret_cast<signed char>(*rax268 + al269);
    *rax270 = reinterpret_cast<signed char>(*rax271 + al272);
    *rax273 = reinterpret_cast<signed char>(*rax274 + al275);
    *rax276 = reinterpret_cast<signed char>(*rax277 + al278);
    *rax279 = reinterpret_cast<signed char>(*rax280 + al281);
    *rax282 = reinterpret_cast<signed char>(*rax283 + al284);
    *rax285 = reinterpret_cast<signed char>(*rax286 + al287);
    *rax288 = reinterpret_cast<signed char>(*rax289 + al290);
    *rax291 = reinterpret_cast<signed char>(*rax292 + al293);
    *rax294 = reinterpret_cast<signed char>(*rax295 + al296);
    *rax297 = reinterpret_cast<signed char>(*rax298 + al299);
    *rax300 = reinterpret_cast<signed char>(*rax301 + al302);
    *rax303 = reinterpret_cast<signed char>(*rax304 + al305);
    *rax306 = reinterpret_cast<signed char>(*rax307 + al308);
    *rax309 = reinterpret_cast<signed char>(*rax310 + al311);
    *rax312 = reinterpret_cast<signed char>(*rax313 + al314);
    *rax315 = reinterpret_cast<signed char>(*rax316 + al317);
    *rax318 = reinterpret_cast<signed char>(*rax319 + al320);
    *rax321 = reinterpret_cast<signed char>(*rax322 + al323);
    *rax324 = reinterpret_cast<signed char>(*rax325 + al326);
    *rax327 = reinterpret_cast<signed char>(*rax328 + al329);
    *rax330 = reinterpret_cast<signed char>(*rax331 + al332);
    *rax333 = reinterpret_cast<signed char>(*rax334 + al335);
    *rax336 = reinterpret_cast<signed char>(*rax337 + al338);
    *rax339 = reinterpret_cast<signed char>(*rax340 + al341);
    *rax342 = reinterpret_cast<signed char>(*rax343 + al344);
    *rax345 = reinterpret_cast<signed char>(*rax346 + al347);
    *rax348 = reinterpret_cast<signed char>(*rax349 + al350);
    *rax351 = reinterpret_cast<signed char>(*rax352 + al353);
    *rax354 = reinterpret_cast<signed char>(*rax355 + al356);
    *rax357 = reinterpret_cast<signed char>(*rax358 + al359);
    *rax360 = reinterpret_cast<signed char>(*rax361 + al362);
    *rax363 = reinterpret_cast<signed char>(*rax364 + al365);
    *rax366 = reinterpret_cast<signed char>(*rax367 + al368);
    *rax369 = reinterpret_cast<signed char>(*rax370 + al371);
    *rax372 = reinterpret_cast<signed char>(*rax373 + al374);
    *rax375 = reinterpret_cast<signed char>(*rax376 + al377);
    *rax378 = reinterpret_cast<signed char>(*rax379 + al380);
    *rax381 = reinterpret_cast<signed char>(*rax382 + al383);
    *rax384 = reinterpret_cast<signed char>(*rax385 + al386);
    *rax387 = reinterpret_cast<signed char>(*rax388 + al389);
    *rax390 = reinterpret_cast<signed char>(*rax391 + al392);
    *rax393 = reinterpret_cast<signed char>(*rax394 + al395);
    *rax396 = reinterpret_cast<signed char>(*rax397 + al398);
    *rax399 = reinterpret_cast<signed char>(*rax400 + al401);
    *rax402 = reinterpret_cast<signed char>(*rax403 + al404);
    *rax405 = reinterpret_cast<signed char>(*rax406 + al407);
    *rax408 = reinterpret_cast<signed char>(*rax409 + al410);
    *rax411 = reinterpret_cast<signed char>(*rax412 + al413);
    *rax414 = reinterpret_cast<signed char>(*rax415 + al416);
    *rax417 = reinterpret_cast<signed char>(*rax418 + al419);
    *rax420 = reinterpret_cast<signed char>(*rax421 + al422);
    *rax423 = reinterpret_cast<signed char>(*rax424 + al425);
    *rax426 = reinterpret_cast<signed char>(*rax427 + al428);
    *rax429 = reinterpret_cast<signed char>(*rax430 + al431);
    *rax432 = reinterpret_cast<signed char>(*rax433 + al434);
    *rax435 = reinterpret_cast<signed char>(*rax436 + al437);
    *rax438 = reinterpret_cast<signed char>(*rax439 + al440);
    *rax441 = reinterpret_cast<signed char>(*rax442 + al443);
    *rax444 = reinterpret_cast<signed char>(*rax445 + al446);
    *rax447 = reinterpret_cast<signed char>(*rax448 + al449);
    *rax450 = reinterpret_cast<signed char>(*rax451 + al452);
    *rax453 = reinterpret_cast<signed char>(*rax454 + al455);
    *rax456 = reinterpret_cast<signed char>(*rax457 + al458);
    *rax459 = reinterpret_cast<signed char>(*rax460 + al461);
    *rax462 = reinterpret_cast<signed char>(*rax463 + al464);
    *rax465 = reinterpret_cast<signed char>(*rax466 + al467);
    *rax468 = reinterpret_cast<signed char>(*rax469 + al470);
    *rax471 = reinterpret_cast<signed char>(*rax472 + al473);
    *rax474 = reinterpret_cast<signed char>(*rax475 + al476);
    *rax477 = reinterpret_cast<signed char>(*rax478 + al479);
    *rax480 = reinterpret_cast<signed char>(*rax481 + al482);
    *rax483 = reinterpret_cast<signed char>(*rax484 + al485);
    *rax486 = reinterpret_cast<signed char>(*rax487 + al488);
    *rax489 = reinterpret_cast<signed char>(*rax490 + al491);
    *rax492 = reinterpret_cast<signed char>(*rax493 + al494);
    *rax495 = reinterpret_cast<signed char>(*rax496 + al497);
    *rax498 = reinterpret_cast<signed char>(*rax499 + al500);
    *rax501 = reinterpret_cast<signed char>(*rax502 + al503);
    *rax504 = reinterpret_cast<signed char>(*rax505 + al506);
    *rax507 = reinterpret_cast<signed char>(*rax508 + al509);
    *rax510 = reinterpret_cast<signed char>(*rax511 + al512);
    *rax513 = reinterpret_cast<signed char>(*rax514 + al515);
    *rax516 = reinterpret_cast<signed char>(*rax517 + al518);
    *rax519 = reinterpret_cast<signed char>(*rax520 + al521);
    *rax522 = reinterpret_cast<signed char>(*rax523 + al524);
    *rax525 = reinterpret_cast<signed char>(*rax526 + al527);
    *rax528 = reinterpret_cast<signed char>(*rax529 + al530);
    *rax531 = reinterpret_cast<signed char>(*rax532 + al533);
    *rax534 = reinterpret_cast<signed char>(*rax535 + al536);
    *rax537 = reinterpret_cast<signed char>(*rax538 + al539);
    *rax540 = reinterpret_cast<signed char>(*rax541 + al542);
    *rax543 = reinterpret_cast<signed char>(*rax544 + al545);
    *rax546 = reinterpret_cast<signed char>(*rax547 + al548);
    *rax549 = reinterpret_cast<signed char>(*rax550 + al551);
    *rax552 = reinterpret_cast<signed char>(*rax553 + al554);
    *rax555 = reinterpret_cast<signed char>(*rax556 + al557);
    *rax558 = reinterpret_cast<signed char>(*rax559 + al560);
    *rax561 = reinterpret_cast<signed char>(*rax562 + al563);
    *rax564 = reinterpret_cast<signed char>(*rax565 + al566);
    *rax567 = reinterpret_cast<signed char>(*rax568 + al569);
    *rax570 = reinterpret_cast<signed char>(*rax571 + al572);
    *rax573 = reinterpret_cast<signed char>(*rax574 + al575);
    *rax576 = reinterpret_cast<signed char>(*rax577 + al578);
    *rax579 = reinterpret_cast<signed char>(*rax580 + al581);
    *rax582 = reinterpret_cast<signed char>(*rax583 + al584);
    *rax585 = reinterpret_cast<signed char>(*rax586 + al587);
    *rax588 = reinterpret_cast<signed char>(*rax589 + al590);
    *rax591 = reinterpret_cast<signed char>(*rax592 + al593);
    *rax594 = reinterpret_cast<signed char>(*rax595 + al596);
    *rax597 = reinterpret_cast<signed char>(*rax598 + al599);
    *rax600 = reinterpret_cast<signed char>(*rax601 + al602);
    *rax603 = reinterpret_cast<signed char>(*rax604 + al605);
    *rax606 = reinterpret_cast<signed char>(*rax607 + al608);
    *rax609 = reinterpret_cast<signed char>(*rax610 + al611);
    *rax612 = reinterpret_cast<signed char>(*rax613 + al614);
    *rax615 = reinterpret_cast<signed char>(*rax616 + al617);
    *rax618 = reinterpret_cast<signed char>(*rax619 + al620);
    *rax621 = reinterpret_cast<signed char>(*rax622 + al623);
}

/* .refptr.mingw_initltsdrot_force */
int32_t* refptr_mingw_initltsdrot_force = reinterpret_cast<int32_t*>(0x41cb878);

/* .refptr.mingw_initltsdyn_force */
int32_t* refptr_mingw_initltsdyn_force = reinterpret_cast<int32_t*>(0x41cb874);

/* .refptr.mingw_initltssuo_force */
int32_t* refptr_mingw_initltssuo_force = reinterpret_cast<int32_t*>(0x41cb870);

/* .refptr.mingw_initcharmax */
int32_t* refptr_mingw_initcharmax = reinterpret_cast<int32_t*>(0x41cb2d0);

struct s41 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f24;
    signed char[90] pad116;
    uint32_t f116;
    signed char[12] pad132;
    uint32_t f132;
    signed char[96] pad232;
    int32_t f232;
    signed char[12] pad248;
    int32_t f248;
};

/* .refptr._fmode */
int32_t* refptr__fmode = reinterpret_cast<int32_t*>(0x41cb8b0);

/* .refptr._MINGW_INSTALL_DEBUG_MATHERR */
int32_t* refptr__MINGW_INSTALL_DEBUG_MATHERR = reinterpret_cast<int32_t*>(0x411190);

void _matherr(uint32_t* rcx);

int64_t pre_c_init() {
    int32_t* rax1;
    int32_t edx2;
    int32_t* rax3;
    int32_t* rax4;
    int32_t* rax5;
    struct s2* rax6;
    struct s41* rax7;
    uint32_t ecx8;
    int32_t* rax9;
    int64_t rcx10;
    int32_t* rax11;
    int32_t* rdx12;
    int32_t* rax13;

    rax1 = refptr_mingw_initltsdrot_force;
    edx2 = 0;
    *rax1 = 1;
    rax3 = refptr_mingw_initltsdyn_force;
    *rax3 = 1;
    rax4 = refptr_mingw_initltssuo_force;
    *rax4 = 1;
    rax5 = refptr_mingw_initcharmax;
    *rax5 = 1;
    rax6 = refptr___image_base__;
    if (rax6->f0 == 0x5a4d && (rax7 = reinterpret_cast<struct s41*>(reinterpret_cast<uint64_t>(rax6) + static_cast<int64_t>(rax6->f60)), rax7->f0 == 0x4550)) {
        ecx8 = rax7->f24;
        if (*reinterpret_cast<int16_t*>(&ecx8) == 0x10b) {
            if (rax7->f116 > 14) {
                edx2 = 0;
                *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<uint1_t>(!!rax7->f232);
            }
        } else {
            if (*reinterpret_cast<int16_t*>(&ecx8) == 0x20b && rax7->f132 > 14) {
                edx2 = 0;
                *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<uint1_t>(!!rax7->f248);
            }
        }
    }
    rax9 = refptr_mingw_app_type;
    managedapp = edx2;
    if (!*rax9) {
        *reinterpret_cast<int32_t*>(&rcx10) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        __set_app_type(1);
    } else {
        *reinterpret_cast<int32_t*>(&rcx10) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        __set_app_type(2);
    }
    rax11 = text(rcx10);
    rdx12 = refptr__fmode;
    *rax11 = *rdx12;
    text(rcx10);
    rax13 = refptr__MINGW_INSTALL_DEBUG_MATHERR;
    if (*rax13 == 1) {
        __mingw_setusermatherr(_matherr);
        return 0;
    } else {
        return 0;
    }
}

/* .refptr._newmode */
int32_t* refptr__newmode = reinterpret_cast<int32_t*>(0x41cb860);

int32_t __bss_start__;

/* .refptr._dowildcard */
int32_t* refptr__dowildcard = reinterpret_cast<int32_t*>(0x411160);

void pre_cpp_init() {
    int32_t* rax1;
    int32_t* rax2;
    int64_t r9_3;

    rax1 = refptr__newmode;
    __bss_start__ = *rax1;
    rax2 = refptr__dowildcard;
    *reinterpret_cast<int32_t*>(&r9_3) = *rax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_3) + 4) = 0;
    __getmainargs(0x416020, 0x416018, 0x416010, r9_3);
    return;
}

/* .text */
int64_t text(int64_t rcx, void** rdx, void** r8, void** r9) {
    if (*reinterpret_cast<int32_t*>(&rdx) == 3 || !*reinterpret_cast<int32_t*>(&rdx)) {
        __mingw_TLScallback(rcx, rdx, r8, r9);
        return 1;
    } else {
        return 1;
    }
}

void fun_4030de() {
    int64_t* rbx1;
    int64_t v2;
    int64_t rax3;
    int64_t v4;

    rbx1 = reinterpret_cast<int64_t*>(0x41ce060);
    if (1) {
        goto v2;
    } else {
        do {
            rax3 = *rbx1;
            if (rax3) {
                rax3();
            }
            ++rbx1;
        } while (!reinterpret_cast<int1_t>(0x41ce060 == rbx1));
        goto v4;
    }
}

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    signed char[8] pad8;
    struct s43* f8;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    signed char[4] pad4;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f4;
};

void fun_4031d1(struct s42* rcx, void** rdx, void** r8, void** r9) {
    struct s43* rsi5;
    int32_t* rdi6;
    struct s44* rdi7;
    struct s45* rdi8;
    struct s46* rsi9;
    struct s47* rdi10;
    struct s48* rsi11;
    struct s49* rdi12;
    struct s50* rsi13;
    void** rax14;
    struct s51* rdi15;
    struct s0* rsi16;
    int64_t v17;

    rsi5 = rcx->f8;
    *rdi6 = rsi5->f0;
    rdi7 = reinterpret_cast<struct s44*>(&rdi8->f4);
    rsi9 = reinterpret_cast<struct s46*>(&rsi5->f4);
    rdi7->f0 = rsi9->f0;
    rdi10 = reinterpret_cast<struct s47*>(&rdi7->f4);
    rsi11 = reinterpret_cast<struct s48*>(&rsi9->f4);
    rdi10->f0 = rsi11->f0;
    rdi12 = reinterpret_cast<struct s49*>(&rdi10->f4);
    rsi13 = reinterpret_cast<struct s50*>(&rsi11->f4);
    rax14 = text(2, rdx, r8, r9, __return_address());
    rdi12->f0 = rsi13->f0;
    rdi15 = reinterpret_cast<struct s51*>(&rdi12->f4);
    rsi16 = reinterpret_cast<struct s0*>(&rsi13->f4);
    rdi15->f0 = rsi16->f0;
    rdi15->f4 = rsi16->f4;
    fprintf(rax14, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", "Argument domain error (DOMAIN)", rsi16, __return_address());
    __asm__("movaps xmm6, [rsp+0x40]");
    __asm__("movaps xmm7, [rsp+0x50]");
    __asm__("movaps xmm8, [rsp+0x60]");
    goto v17;
}

void fun_403240() {
    goto 0x4031d8;
}

int64_t __mingw_oldexcpt_handler;

void fun_403a7c() {
    int32_t eax1;
    int64_t rax2;
    int64_t rax3;
    uint32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int64_t v8;
    int32_t eax9;
    int64_t rax10;
    int64_t v11;

    if (eax1 == 0xc0000094) {
        rax2 = signal(8);
        if (rax2 != 1) {
            addr_403ab1_4:
            if (!rax2) {
                addr_403a61_5:
                rax3 = __mingw_oldexcpt_handler;
                if (rax3) {
                    goto rax3;
                }
            } else {
                rax2(8);
            }
        } else {
            signal(8, 8);
        }
    } else {
        if (eax4 <= 0xc0000094) {
            if (eax5 != 0xc0000092) {
                if (eax6 != 0xc0000093) 
                    goto addr_403a61_5;
                rax2 = signal(8);
                if (rax2 != 1) 
                    goto addr_403ab1_4;
                signal(8, 8);
                text(8, 1);
                goto addr_403ada_15;
            }
        }
        if (eax7 == 0xc0000095) {
            addr_403ada_15:
            goto v8;
        } else {
            if (eax9 != 0xc0000096) 
                goto addr_403a61_5;
            rax10 = signal(4);
            if (rax10 == 1) 
                goto addr_403bc0_19; else 
                goto addr_403b0d_20;
        }
    }
    addr_403ac2_21:
    goto v11;
    addr_403bc0_19:
    signal(4, 4);
    goto addr_403ac2_21;
    addr_403b0d_20:
    if (!rax10) 
        goto addr_403a61_5;
    rax10(4);
    goto addr_403ac2_21;
}

struct s52 {
    signed char[4] pad4;
    unsigned char f4;
};

void fun_403ac8() {
    struct s52* rdx1;
    uint32_t eax2;
    uint32_t eax3;
    int32_t eax4;
    uint32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int64_t rax10;

    if (!(rdx1->f4 & 1)) 
        goto "???";
    if (eax2 > 0xc0000091) 
        goto 0x403a80;
    if (eax3 >= 0xc000008d) 
        goto 0x403a9b;
    if (eax4 == 0xc0000008) 
        goto 0x403ada;
    if (eax5 > 0xc0000008) {
        if (eax6 == 0xc000001d) 
            goto 0x403af7;
        if (eax7 != 0xc000008c) 
            goto 0x403a61;
        goto 0x403ada;
    }
    if (eax8 == 0x80000002) 
        goto 0x403ada;
    if (eax9 != 0xc0000005) 
        goto 0x403a61;
    rax10 = signal(11);
    if (rax10 != 1) 
        goto addr_403a58_13;
    signal(11, 11);
    goto 0x403ac2;
    addr_403a58_13:
    if (!rax10) 
        goto "???";
    rax10(11);
    goto 0x403ac2;
}

int64_t ___w64_mingwthr_add_key_dtor(void** ecx, void** rdx) {
    int32_t eax3;
    int32_t esi4;
    void** rax5;
    void** rax6;
    int64_t rax7;

    eax3 = __mingwthr_cs_init;
    esi4 = 0;
    if (eax3) {
        rax5 = calloc(1, 24);
        if (!rax5) {
            esi4 = -1;
        } else {
            *reinterpret_cast<void***>(rax5) = ecx;
            *reinterpret_cast<void***>(rax5 + 8) = rdx;
            EnterCriticalSection(0x41cbb80, 24);
            rax6 = bss;
            bss = rax5;
            *reinterpret_cast<void***>(rax5 + 16) = rax6;
            LeaveCriticalSection(0x41cbb80, 24);
            return 0;
        }
    }
    *reinterpret_cast<int32_t*>(&rax7) = esi4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

void fun_403ce9() {
    int64_t v1;
    void** rax2;
    void** ebx3;
    void** rcx4;
    void** ebx5;
    void** rdx6;
    int64_t v7;
    void** r8_8;
    void** r9_9;

    v1 = reinterpret_cast<int64_t>(__return_address());
    EnterCriticalSection(0x41cbb80);
    rax2 = bss;
    if (!rax2) {
        addr_403d23_3:
        LeaveCriticalSection(0x41cbb80);
    } else {
        if (ebx3 != *reinterpret_cast<void***>(rax2)) {
            while (rcx4 = *reinterpret_cast<void***>(rax2 + 16), !!rcx4) {
                if (*reinterpret_cast<void***>(rcx4) == ebx5) 
                    goto addr_403d40_7;
                rax2 = rcx4;
            }
            goto addr_403d23_3;
        } else {
            rdx6 = *reinterpret_cast<void***>(rax2 + 16);
            rcx4 = rax2;
            bss = rdx6;
            goto addr_403d48_11;
        }
    }
    addr_403d30_12:
    goto v7;
    addr_403d40_7:
    rdx6 = *reinterpret_cast<void***>(rcx4 + 16);
    *reinterpret_cast<void***>(rax2 + 16) = rdx6;
    addr_403d48_11:
    free(rcx4, rdx6, r8_8, r9_9, v1);
    LeaveCriticalSection(0x41cbb80);
    goto addr_403d30_12;
}

void fun_403e7a() {
    goto text;
}

struct s53 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s54 {
    signed char[60] pad60;
    int32_t f60;
};

struct s55 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

void fun_4040fd() {
    struct s2* r8_1;
    int32_t eax2;
    int64_t v3;
    uint64_t rcx4;
    int64_t rdx5;
    int64_t r8_6;
    struct s53* r8_7;
    int64_t r8_8;
    struct s54* r8_9;
    uint32_t edx10;
    int64_t rax11;
    struct s55* rax12;
    int64_t v13;
    int64_t rdx14;
    struct s55* r9_15;
    uint64_t r8_16;
    uint64_t rdx17;
    uint64_t rdx18;
    int64_t v19;

    eax2 = text(r8_1);
    if (!eax2) {
        goto v3;
    }
    rcx4 = reinterpret_cast<uint64_t>(rdx5 - r8_6);
    r8_7 = reinterpret_cast<struct s53*>(r8_8 + r8_9->f60);
    edx10 = r8_7->f6;
    *reinterpret_cast<uint32_t*>(&rax11) = r8_7->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    rax12 = reinterpret_cast<struct s55*>(reinterpret_cast<int64_t>(r8_7) + rax11 + 24);
    if (!edx10) {
        addr_40415d_5:
        goto v13;
    } else {
        *reinterpret_cast<uint32_t*>(&rdx14) = edx10 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
        r9_15 = reinterpret_cast<struct s55*>(reinterpret_cast<int64_t>(rax12) + (rdx14 + rdx14 * 4) * 8 + 40);
        do {
            *reinterpret_cast<int32_t*>(&r8_16) = rax12->f12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = 0;
            rdx17 = r8_16;
            if (rcx4 < r8_16) 
                continue;
            *reinterpret_cast<int32_t*>(&rdx18) = *reinterpret_cast<int32_t*>(&rdx17) + rax12->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
            if (rcx4 < rdx18) 
                break;
            rax12 = reinterpret_cast<struct s55*>(reinterpret_cast<int64_t>(rax12) + 40);
        } while (rax12 != r9_15);
        goto addr_40415d_5;
    }
    goto v19;
}

struct s56 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    int32_t f12;
};

void fun_4041fc() {
    int32_t r9d1;
    struct s56* rdx2;
    struct s56* tmp64_3;
    int64_t v4;
    int64_t v5;

    do {
        --r9d1;
        rdx2 = tmp64_3;
        if (rdx2->f4) 
            continue;
        if (!rdx2->f12) 
            break;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(r9d1 < 0) | reinterpret_cast<uint1_t>(r9d1 == 0)));
    goto addr_40421b_6;
    goto v4;
    addr_40421b_6:
    goto v5;
}

void fun_405593() {
    uint32_t r13d1;
    int64_t rax2;
    int64_t v3;
    unsigned char r13b4;
    uint32_t r13d5;
    unsigned char r13b6;
    uint32_t r13d7;
    int32_t v8;
    int64_t rdi9;
    int32_t v10;
    int32_t** rdx11;
    int32_t** v12;
    int64_t rdx13;
    void* v14;
    int32_t* rdx15;
    int32_t** v16;
    int32_t v17;
    int64_t rdi18;
    int32_t v19;
    signed char** rdx20;
    signed char** v21;
    int64_t rdx22;
    void* v23;
    signed char* rdx24;
    signed char** v25;
    int32_t v26;
    int64_t rdi27;
    int32_t v28;
    int16_t** rdx29;
    int16_t** v30;
    int64_t rdx31;
    void* v32;
    int16_t* rdx33;
    int16_t** v34;
    int32_t v35;
    int64_t rdi36;
    int32_t v37;
    int32_t** rdx38;
    int32_t** v39;
    int64_t rdx40;
    void* v41;
    int32_t* rdx42;
    int32_t** v43;
    int32_t v44;
    int64_t rdi45;
    int32_t v46;
    int64_t** rdx47;
    int64_t** v48;
    int64_t rdx49;
    void* v50;
    int64_t* rdx51;
    int64_t** v52;

    if (r13d1 & 0x80) 
        goto 0x404ad0;
    rax2 = v3;
    if (!(r13b4 & 8)) {
        if (!(r13d5 & 4)) {
            if (!(r13b6 & 2)) {
                if (!(r13d7 & 1)) {
                    if (v8) {
                        *reinterpret_cast<int32_t*>(&rdi9) = v10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = 0;
                        rdx11 = v12;
                        if (*reinterpret_cast<int32_t*>(&rdi9) != 1) {
                            *reinterpret_cast<int32_t*>(&rdx13) = static_cast<int32_t>(rdi9 - 2);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
                            rdx11 = reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(v14) + rdx13 * 8 + 8);
                        }
                        **rdx11 = *reinterpret_cast<int32_t*>(&rax2);
                        goto 0x4049b9;
                    } else {
                        rdx15 = *v16;
                        *rdx15 = *reinterpret_cast<int32_t*>(&rax2);
                        goto 0x4049b9;
                    }
                } else {
                    if (v17) {
                        *reinterpret_cast<int32_t*>(&rdi18) = v19;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = 0;
                        rdx20 = v21;
                        if (*reinterpret_cast<int32_t*>(&rdi18) != 1) {
                            *reinterpret_cast<int32_t*>(&rdx22) = static_cast<int32_t>(rdi18 - 2);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = 0;
                            rdx20 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(v23) + rdx22 * 8 + 8);
                        }
                        rdx24 = *rdx20;
                    } else {
                        rdx24 = *v25;
                    }
                    *rdx24 = *reinterpret_cast<signed char*>(&rax2);
                    goto 0x4049b9;
                }
            } else {
                if (v26) {
                    *reinterpret_cast<int32_t*>(&rdi27) = v28;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
                    rdx29 = v30;
                    if (*reinterpret_cast<int32_t*>(&rdi27) != 1) {
                        *reinterpret_cast<int32_t*>(&rdx31) = static_cast<int32_t>(rdi27 - 2);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
                        rdx29 = reinterpret_cast<int16_t**>(reinterpret_cast<int64_t>(v32) + rdx31 * 8 + 8);
                    }
                    rdx33 = *rdx29;
                } else {
                    rdx33 = *v34;
                }
                *rdx33 = *reinterpret_cast<int16_t*>(&rax2);
                goto 0x4049b9;
            }
        } else {
            if (v35) {
                *reinterpret_cast<int32_t*>(&rdi36) = v37;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = 0;
                rdx38 = v39;
                if (*reinterpret_cast<int32_t*>(&rdi36) != 1) {
                    *reinterpret_cast<int32_t*>(&rdx40) = static_cast<int32_t>(rdi36 - 2);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx40) + 4) = 0;
                    rdx38 = reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(v41) + rdx40 * 8 + 8);
                }
                rdx42 = *rdx38;
            } else {
                rdx42 = *v43;
            }
            *rdx42 = *reinterpret_cast<int32_t*>(&rax2);
            goto 0x4049b9;
        }
    } else {
        if (v44) {
            *reinterpret_cast<int32_t*>(&rdi45) = v46;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = 0;
            rdx47 = v48;
            if (*reinterpret_cast<int32_t*>(&rdi45) != 1) {
                *reinterpret_cast<int32_t*>(&rdx49) = static_cast<int32_t>(rdi45 - 2);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = 0;
                rdx47 = reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(v50) + rdx49 * 8 + 8);
            }
            rdx51 = *rdx47;
        } else {
            rdx51 = *v52;
        }
        *rdx51 = rax2;
        goto 0x4049b9;
    }
}

struct s57 {
    signed char[1] pad1;
    unsigned char f1;
    unsigned char f2;
};

void fun_4055dc() {
    void* rsp1;
    int64_t v2;
    uint32_t eax3;
    uint32_t r13d4;
    uint32_t r14d5;
    uint32_t r13d6;
    uint32_t v7;
    uint32_t eax8;
    struct s57* v9;
    unsigned char v10;
    unsigned char* rbx11;
    uint32_t r13d12;
    int32_t v13;
    int64_t rdi14;
    int32_t v15;
    void*** rax16;
    void*** v17;
    int64_t rax18;
    void* v19;
    void** v20;
    void** rdi21;
    void*** v22;
    int32_t v23;
    int64_t rdi24;
    int32_t v25;
    void**** rax26;
    void**** v27;
    int64_t rax28;
    void* v29;
    void*** v30;
    void*** rdi31;
    void**** v32;
    void** rax33;
    uint32_t r13d34;
    void** rdx35;
    void** v36;
    int32_t esi37;
    uint64_t rsi38;
    uint64_t v39;
    void** r8_40;
    void** r9_41;
    void** rax42;
    void** v43;
    int64_t rcx44;
    void** rdi45;
    void* rax46;
    uint32_t edx47;
    uint32_t ecx48;
    void* rax49;
    int64_t v50;
    int64_t v51;
    void** r15_52;
    void** r12_53;
    void** r8_54;
    void** r9_55;
    int64_t rax56;
    uint32_t edi57;
    void** rbx58;
    uint32_t v59;
    uint32_t r13d60;
    uint32_t r13d61;
    uint32_t ebp62;
    uint32_t v63;
    uint32_t r13d64;
    void** rax65;
    void** rcx66;
    void** v67;
    void** rbx68;
    uint32_t r12d69;
    int32_t ebp70;
    void** rsi71;
    void** r14_72;
    void** r12_73;
    void** r8_74;
    void** rax75;
    void** rbx76;
    void** r8_77;
    void** r9_78;
    int64_t rax79;
    void** r15_80;
    void** r12_81;
    void** r8_82;
    void** r9_83;
    int64_t rax84;
    void* rsp85;
    void** rbx86;
    void** v87;
    void** v88;
    uint32_t v89;
    uint32_t r13d90;
    uint32_t r13d91;
    void** v92;
    uint32_t r14d93;
    int64_t rbp94;
    uint32_t edi95;
    uint32_t v96;
    uint32_t r13d97;
    void** r9_98;
    void** r8_99;
    int64_t rax100;
    void** r12_101;
    int64_t rax102;
    void** rcx103;
    void** rbp104;
    void** v105;
    void** rbx106;
    void** rax107;
    int64_t v108;
    int64_t rdi109;
    void** r12_110;
    int64_t v111;
    void** rax112;
    void** v113;
    void** rdx114;
    void** r8_115;
    int32_t v116;
    int64_t rdi117;
    int32_t v118;
    void*** rax119;
    void*** v120;
    int64_t rax121;
    void* v122;
    void** rdi123;
    void*** v124;
    int32_t v125;
    int64_t rdi126;
    int32_t v127;
    void**** rax128;
    void**** v129;
    int64_t rax130;
    void* v131;
    void*** rdi132;
    void**** v133;
    void** rax134;

    rsp1 = __zero_stack_offset();
    v2 = reinterpret_cast<int64_t>(__return_address());
    eax3 = r13d4 & 0x80;
    r14d5 = r13d6 & 4;
    v7 = eax3;
    if (!r14d5) {
        if (v7) {
            addr_40569d_3:
            eax8 = v9->f1;
            v10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax8) == 94);
            if (*reinterpret_cast<signed char*>(&eax8) == 94) {
                rbx11 = &v9->f2;
            }
        } else {
            if (!(r13d12 & 0x600)) {
                if (v13) {
                    *reinterpret_cast<int32_t*>(&rdi14) = v15;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
                    rax16 = v17;
                    if (*reinterpret_cast<int32_t*>(&rdi14) != 1) {
                        *reinterpret_cast<int32_t*>(&rax18) = static_cast<int32_t>(rdi14 - 2);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
                        rax16 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(v19) + rax18 * 8 + 8);
                    }
                    v20 = *rax16;
                } else {
                    rdi21 = *v22;
                    v20 = rdi21;
                }
                if (!v20) {
                    goto 0x404970;
                }
            } else {
                if (v23) {
                    *reinterpret_cast<int32_t*>(&rdi24) = v25;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = 0;
                    rax26 = v27;
                    if (*reinterpret_cast<int32_t*>(&rdi24) != 1) {
                        *reinterpret_cast<int32_t*>(&rax28) = static_cast<int32_t>(rdi24 - 2);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
                        rax26 = reinterpret_cast<void****>(reinterpret_cast<int64_t>(v29) + rax28 * 8 + 8);
                    }
                    v30 = *rax26;
                } else {
                    rdi31 = *v32;
                    v30 = rdi31;
                }
                if (!v30) 
                    goto 0x407387;
                rax33 = malloc(100);
                rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
                v20 = rax33;
                *v30 = rax33;
                if (rax33) 
                    goto addr_40565a_20; else 
                    goto "???";
            }
        }
    } else {
        if (eax3) 
            goto addr_40569d_3;
        if (!(r13d34 & 0x600)) 
            goto addr_406f70_23; else 
            goto addr_40560a_24;
    }
    rdx35 = v36;
    if (esi37 < 0) {
        *reinterpret_cast<int32_t*>(&rsi38) = 0x7fffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = 0;
    }
    if (v39 <= 0xff) {
        if (rdx35) {
            free(rdx35, rdx35, r8_40, r9_41, v2);
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        rax42 = malloc(0x100);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        rdx35 = rax42;
        v43 = rax42;
    }
    *reinterpret_cast<int32_t*>(&rcx44) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx44) + 4) = 0;
    rdi45 = rdx35;
    while (rcx44) {
        --rcx44;
        *reinterpret_cast<void***>(rdi45) = reinterpret_cast<void**>(0);
        rdi45 = rdi45 + 8;
        rsi38 = rsi38 + 8;
    }
    *reinterpret_cast<uint32_t*>(&rax46) = *rbx11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0;
    if (*reinterpret_cast<signed char*>(&rax46) == 93) {
        addr_406694_35:
        ++rbx11;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v43) + reinterpret_cast<uint64_t>(rax46)) = 1;
        *reinterpret_cast<uint32_t*>(&rax46) = *rbx11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0;
        goto addr_405742_36;
    } else {
        if (*reinterpret_cast<signed char*>(&rax46) != 45) {
            while (1) {
                addr_405742_36:
                ++rbx11;
                if (!*reinterpret_cast<signed char*>(&rax46)) 
                    goto 0x404970;
                if (*reinterpret_cast<signed char*>(&rax46) == 93) 
                    break;
                if (*reinterpret_cast<signed char*>(&rax46) != 45 || ((edx47 = *rbx11, *reinterpret_cast<unsigned char*>(&edx47) == 0) || (*reinterpret_cast<unsigned char*>(&edx47) == 93 || (ecx48 = *(rbx11 - 2), *reinterpret_cast<unsigned char*>(&ecx48) > *reinterpret_cast<unsigned char*>(&edx47))))) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v43) + reinterpret_cast<uint64_t>(rax46)) = 1;
                } else {
                    if (*reinterpret_cast<unsigned char*>(&ecx48) >= *reinterpret_cast<unsigned char*>(&edx47)) {
                        addr_40573f_42:
                        *reinterpret_cast<uint32_t*>(&rax46) = *reinterpret_cast<unsigned char*>(&edx47);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0;
                        continue;
                    } else {
                        do {
                            *reinterpret_cast<uint32_t*>(&rax49) = *reinterpret_cast<unsigned char*>(&ecx48);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax49) + 4) = 0;
                            ++ecx48;
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v43) + reinterpret_cast<uint64_t>(rax49)) = 1;
                        } while (*rbx11 > *reinterpret_cast<unsigned char*>(&ecx48));
                    }
                }
                edx47 = *rbx11;
                goto addr_40573f_42;
            }
        } else {
            goto addr_406694_35;
        }
    }
    v50 = v51;
    if (!r14d5) {
        r15_52 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp1) + 0xf0);
        rax56 = in_ch(r12_53, r15_52, r8_54, r9_55, v2);
        if (*reinterpret_cast<uint32_t*>(&rax56) == 0xffffffff) 
            goto 0x405ee4;
        edi57 = v10;
        rbx58 = v20;
        v59 = r13d60;
        r13d61 = *reinterpret_cast<uint32_t*>(&rax56);
        ebp62 = v7;
        v63 = r13d64 & 0x600;
        do {
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v43) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r13d61)))) == *reinterpret_cast<signed char*>(&edi57)) 
                break;
            if (!ebp62) {
                rax65 = rbx58 + 1;
                *reinterpret_cast<void***>(rbx58) = *reinterpret_cast<void***>(&r13d61);
                if (v63) {
                    rcx66 = *v30;
                    rbx58 = rax65;
                    if (rax65 == reinterpret_cast<unsigned char>(rcx66) + reinterpret_cast<unsigned char>(v67)) {
                        rbx68 = v67 + 1;
                        r12d69 = ebp62;
                        ebp70 = *reinterpret_cast<int32_t*>(&rsi38);
                        rsi71 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
                        r14_72 = r12_73;
                        while (rax75 = realloc(rcx66, rsi71, r8_74), rax75 == 0) {
                            if (reinterpret_cast<unsigned char>(rbx68) >= reinterpret_cast<unsigned char>(rsi71)) 
                                goto addr_406df8_57;
                            rsi71 = rbx68;
                            rcx66 = *v30;
                        }
                        rbx76 = v67;
                        *reinterpret_cast<int32_t*>(&rsi38) = ebp70;
                        ebp62 = r12d69;
                        r12_73 = r14_72;
                        v67 = rsi71;
                        rbx58 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx76) + reinterpret_cast<unsigned char>(rax75));
                        *v30 = rax75;
                    }
                } else {
                    rbx58 = rax65;
                }
            }
            *reinterpret_cast<int32_t*>(&rsi38) = *reinterpret_cast<int32_t*>(&rsi38) - 1;
        } while (*reinterpret_cast<int32_t*>(&rsi38) && (rax79 = in_ch(r12_73, r15_52, r8_77, r9_78, v2), r13d61 = *reinterpret_cast<uint32_t*>(&rax79), *reinterpret_cast<uint32_t*>(&rax79) != 0xffffffff));
        goto addr_406ad8_62;
    } else {
        r15_80 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp1) + 0xf0);
        rax84 = in_ch(r12_81, r15_80, r8_82, r9_83, v2);
        rsp85 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        if (*reinterpret_cast<uint32_t*>(&rax84) == 0xffffffff) 
            goto 0x405ee4;
        rbx86 = v87;
        v88 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp85) + 0xe3);
        v89 = r13d90;
        r13d91 = v10;
        v92 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp85) + 0xdc);
        r14d93 = *reinterpret_cast<uint32_t*>(&rax84);
        rbp94 = 0;
        edi95 = v7;
        v96 = r13d97 & 0x600;
        while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v43) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r14d93)))) != *reinterpret_cast<signed char*>(&r13d91)) {
            if (!edi95) {
                r9_98 = v92;
                *reinterpret_cast<int32_t*>(&r8_99) = 1;
                *reinterpret_cast<int32_t*>(&r8_99 + 4) = 0;
                ++rbp94;
                rax100 = mbrtowc(rbx86, v88, 1, r9_98, v2);
                if (rax100 == -2) {
                    addr_405fa9_68:
                    rax102 = in_ch(r12_101, r15_80, r8_99, r9_98, v2);
                    r14d93 = *reinterpret_cast<uint32_t*>(&rax102);
                    if (*reinterpret_cast<uint32_t*>(&rax102) == 0xffffffff) 
                        goto addr_406a90_69; else 
                        continue;
                } else {
                    *reinterpret_cast<uint32_t*>(&r9_98) = v96;
                    *reinterpret_cast<int32_t*>(&r9_98 + 4) = 0;
                    rbx86 = rbx86 + 2;
                    if (!*reinterpret_cast<uint32_t*>(&r9_98)) {
                        *reinterpret_cast<int32_t*>(&rbp94) = 0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp94) + 4) = 0;
                    } else {
                        *reinterpret_cast<int32_t*>(&rbp94) = 0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp94) + 4) = 0;
                        rcx103 = *v30;
                        r8_99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
                        if (reinterpret_cast<int1_t>(rbx86 == reinterpret_cast<unsigned char>(rcx103) + reinterpret_cast<unsigned char>(r8_99))) {
                            rbp104 = r8_99;
                            v105 = r8_99;
                            rbx106 = v67 + 1;
                            while (rax107 = realloc(rcx103, reinterpret_cast<unsigned char>(rbp104) + reinterpret_cast<unsigned char>(rbp104), r8_99), rax107 == 0) {
                                if (reinterpret_cast<unsigned char>(rbx106) >= reinterpret_cast<unsigned char>(rbp104)) 
                                    goto addr_4072ec_76;
                                rbp104 = rbx106;
                                rcx103 = *v30;
                            }
                            r8_99 = v105;
                            v67 = rbp104;
                            *reinterpret_cast<int32_t*>(&rbp94) = 0;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp94) + 4) = 0;
                            rbx86 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax107) + reinterpret_cast<unsigned char>(r8_99));
                            *v30 = rax107;
                        }
                    }
                }
            }
            *reinterpret_cast<int32_t*>(&rsi38) = *reinterpret_cast<int32_t*>(&rsi38) - 1;
            if (!*reinterpret_cast<int32_t*>(&rsi38)) 
                goto addr_406a90_69; else 
                goto addr_405fa9_68;
        }
        goto addr_406fe0_80;
    }
    back_ch(r13d61, r12_73, r15_52, 1, v2);
    addr_406af0_82:
    if (v108 == v50) 
        goto 0x404970;
    if (v7) 
        goto 0x4049b9;
    goto 0x40646c;
    addr_406ad8_62:
    goto addr_406af0_82;
    addr_406df8_57:
    if (!(v59 & 0x400)) 
        goto 0x406d9d; else 
        goto "???";
    addr_406fe0_80:
    rdi109 = rbp94;
    back_ch(r14d93, r12_110, r15_80, 1, v2);
    addr_406aa3_85:
    if (rdi109) 
        goto 0x4054d0;
    if (v111 == v50) 
        goto 0x404970;
    if (v7) 
        goto 0x4049b9;
    goto 0x40617c;
    addr_406a90_69:
    rdi109 = rbp94;
    goto addr_406aa3_85;
    addr_4072ec_76:
    if (v89 & 0x400) 
        goto 0x406e06;
    *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(*v30) + reinterpret_cast<unsigned char>(v105) + 0xfffffffffffffffe) = 0;
    goto 0x406dbf;
    addr_40565a_20:
    rax112 = v113;
    if (!rax112 || (rdx114 = *reinterpret_cast<void***>(rax112), reinterpret_cast<unsigned char>(rdx114) > reinterpret_cast<unsigned char>(31))) {
        rax112 = resize_gcollect_part_0(rax112, rdx114, r8_115);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        rdx114 = *reinterpret_cast<void***>(rax112);
    }
    *reinterpret_cast<void***>(rax112) = rdx114 + 1;
    *reinterpret_cast<void****>(reinterpret_cast<uint64_t>(rax112 + reinterpret_cast<unsigned char>(rdx114) * 8) + 16) = v30;
    v67 = reinterpret_cast<void**>(100);
    goto addr_40569d_3;
    addr_406f70_23:
    if (v116) {
        *reinterpret_cast<int32_t*>(&rdi117) = v118;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi117) + 4) = 0;
        rax119 = v120;
        if (*reinterpret_cast<int32_t*>(&rdi117) != 1) {
            *reinterpret_cast<int32_t*>(&rax121) = static_cast<int32_t>(rdi117 - 2);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax121) + 4) = 0;
            rax119 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(v122) + rax121 * 8 + 8);
        }
        v87 = *rax119;
    } else {
        rdi123 = *v124;
        v87 = rdi123;
    }
    if (!v87) {
        goto 0x404970;
    }
    addr_40560a_24:
    if (v125) {
        *reinterpret_cast<int32_t*>(&rdi126) = v127;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi126) + 4) = 0;
        rax128 = v129;
        if (*reinterpret_cast<int32_t*>(&rdi126) != 1) {
            *reinterpret_cast<int32_t*>(&rax130) = static_cast<int32_t>(rdi126 - 2);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax130) + 4) = 0;
            rax128 = reinterpret_cast<void****>(reinterpret_cast<int64_t>(v131) + rax130 * 8 + 8);
        }
        v30 = *rax128;
    } else {
        rdi132 = *v133;
        v30 = rdi132;
    }
    if (!v30) 
        goto 0x407387;
    rax134 = malloc(0xc8);
    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    v87 = rax134;
    *v30 = rax134;
    if (!rax134) 
        goto 0x40654d; else 
        goto addr_40565a_20;
}

struct s58 {
    unsigned char f0;
    unsigned char f1;
};

void fun_405788() {
    int64_t v1;
    int32_t edi2;
    int32_t edi3;
    int64_t rdi4;
    void** r15_5;
    void** rdx6;
    void** r12_7;
    void** r8_8;
    void** r9_9;
    int64_t rax10;
    void* rsp11;
    int64_t rbp12;
    void** v13;
    int64_t rax14;
    int32_t esi15;
    uint32_t eax16;
    void** rdx17;
    uint32_t v18;
    int32_t v19;
    void** r8_20;
    void** v21;
    void** r14_22;
    void** r9_23;
    void** rax24;
    void** r12_25;
    void** r9_26;
    int64_t rax27;
    void** r9_28;
    void** rax29;
    void** r12_30;
    void** r9_31;
    int64_t rax32;
    int64_t rcx33;
    void** r9_34;
    uint32_t eax35;
    unsigned char v36;
    int32_t eax37;
    void** r12_38;
    void** r9_39;
    int64_t rax40;
    int32_t v41;
    uint32_t r13d42;
    int64_t rcx43;
    void** r9_44;
    uint32_t eax45;
    void* rsp46;
    unsigned char* rsi47;
    uint32_t edi48;
    void** r12_49;
    int64_t rax50;
    int64_t rcx51;
    uint32_t eax52;
    uint32_t eax53;
    int32_t r14d54;
    void** rdi55;
    uint32_t v56;
    uint32_t r13d57;
    uint32_t v58;
    uint32_t r13d59;
    void** v60;
    void** rax61;
    void** v62;
    void** rax63;
    void* rsp64;
    uint32_t esi65;
    void** rax66;
    void*** rdx67;
    int64_t r8_68;
    uint32_t edi69;
    int32_t eax70;
    uint64_t rax71;
    uint64_t v72;
    uint64_t v73;
    uint64_t rax74;
    uint64_t rax75;
    void** v76;
    int32_t v77;
    int64_t rdi78;
    int32_t v79;
    uint64_t** rax80;
    uint64_t** v81;
    int64_t rax82;
    void* v83;
    uint64_t* rax84;
    uint64_t** v85;
    int32_t eax86;
    int32_t v87;
    int64_t rdi88;
    int32_t v89;
    int32_t** rdx90;
    int32_t** v91;
    int64_t rdx92;
    void* v93;
    int32_t* rdx94;
    int32_t** v95;
    int32_t v96;
    int64_t rdi97;
    int32_t v98;
    int16_t** rdx99;
    int16_t** v100;
    int64_t rdx101;
    void* v102;
    int16_t* rdx103;
    int16_t** v104;
    int32_t v105;
    int32_t ecx106;
    int32_t edx107;
    int32_t v108;
    int32_t v109;
    signed char* rdx110;
    signed char** v111;
    int32_t ecx112;
    int32_t edx113;
    int32_t v114;
    int64_t rdi115;
    int32_t v116;
    int64_t rdx117;
    int32_t** v118;
    int64_t rdi119;
    int32_t v120;
    int64_t rdx121;
    signed char** rdx122;
    signed char** v123;
    int32_t v124;
    int32_t edx125;
    int32_t v126;
    int32_t v127;
    int32_t edx128;
    int32_t v129;
    void** r12_130;
    int32_t r13d131;
    int64_t rcx132;
    int32_t eax133;
    struct s58* v134;
    uint32_t eax135;
    unsigned char* rbx136;
    unsigned char* v137;
    void** r12_138;
    void** r9_139;
    int64_t rax140;
    uint32_t ecx141;
    void** rbx142;
    void** r9_143;
    void** rax144;
    int32_t eax145;
    void** r12_146;
    void** r9_147;
    int64_t rax148;
    unsigned char* r14_149;
    unsigned char* v150;
    void** r12_151;
    unsigned char* rsi152;
    unsigned char* v153;
    unsigned char* rbp154;
    uint32_t ecx155;
    void** r12_156;
    unsigned char* v157;
    void* v158;
    void** v159;
    void** r9_160;
    void** rax161;
    int32_t eax162;
    int32_t esi163;
    int32_t esi164;
    int32_t esi165;
    void** r12_166;
    void** r9_167;

    v1 = reinterpret_cast<int64_t>(__return_address());
    edi2 = edi3 - 88;
    if (*reinterpret_cast<unsigned char*>(&edi2) <= 32) {
        *reinterpret_cast<uint32_t*>(&rdi4) = *reinterpret_cast<unsigned char*>(&edi2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = 0;
        goto *reinterpret_cast<int32_t*>(0x4128a4 + rdi4 * 4) + 0x4128a4;
    }
    r15_5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 0xf0);
    rdx6 = r15_5;
    rax10 = in_ch(r12_7, rdx6, r8_8, r9_9, v1);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax10);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax10) == 0xffffffff) 
        goto 0x405ee4;
    v13 = reinterpret_cast<void**>(0);
    *reinterpret_cast<uint32_t*>(&rax14) = static_cast<uint32_t>(rax10 - 43) & 0xfffffffd;
    if (!*reinterpret_cast<uint32_t*>(&rax14)) 
        goto addr_405a1d_5;
    addr_405a61_6:
    *reinterpret_cast<unsigned char*>(&rdx6) = reinterpret_cast<uint1_t>(!!esi15);
    if (*reinterpret_cast<uint32_t*>(&rbp12) != 48 || !*reinterpret_cast<unsigned char*>(&rdx6)) {
        *reinterpret_cast<unsigned char*>(&rax14) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp12) != 0xffffffff);
        eax16 = *reinterpret_cast<uint32_t*>(&rax14) & *reinterpret_cast<uint32_t*>(&rdx6);
        *reinterpret_cast<uint32_t*>(&rdx17) = v18;
        *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
        if (!*reinterpret_cast<uint32_t*>(&rdx17)) {
            v19 = 10;
        }
    } else {
        r8_20 = v21;
        r14_22 = v13 + 1;
        if (reinterpret_cast<uint1_t>(esi15 < 0) | reinterpret_cast<uint1_t>(esi15 == 0)) {
            rax24 = resize_wbuf(v13, reinterpret_cast<int64_t>(rsp11) + 0xf8, r8_20, r9_23, v1);
            rdx17 = r15_5;
            v21 = rax24;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax24) + reinterpret_cast<unsigned char>(v13)) = 48;
            rax27 = in_ch(r12_25, rdx17, r8_20, r9_26, v1);
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8 - 8 + 8);
            *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax27);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = 0;
            goto addr_406d2f_11;
        } else {
            --esi15;
            rax29 = resize_wbuf(v13, reinterpret_cast<int64_t>(rsp11) + 0xf8, r8_20, r9_28, v1);
            rdx17 = r15_5;
            v21 = rax29;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax29) + reinterpret_cast<unsigned char>(v13)) = 48;
            rax32 = in_ch(r12_30, rdx17, r8_20, r9_31, v1);
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8 - 8 + 8);
            *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax32);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = 0;
            eax16 = 0;
            if (esi15) {
                addr_406d2f_11:
                *reinterpret_cast<uint32_t*>(&rcx33) = *reinterpret_cast<uint32_t*>(&rbp12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = 0;
                eax35 = tolower(rcx33, rdx17, r8_20, r9_34, v1);
                rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
                if (eax35 == 0x78) {
                    if (v36 & 10) {
                        *reinterpret_cast<unsigned char*>(&eax35) = reinterpret_cast<uint1_t>(!!esi15);
                        *reinterpret_cast<unsigned char*>(&rdx17) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp12) != 0xffffffff);
                        eax16 = eax35 & *reinterpret_cast<uint32_t*>(&rdx17);
                        goto addr_406cd8_15;
                    } else {
                        eax37 = 0;
                        rdx17 = r15_5;
                        *reinterpret_cast<unsigned char*>(&eax37) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi15 < 0) | reinterpret_cast<uint1_t>(esi15 == 0)));
                        esi15 = esi15 - eax37;
                        rax40 = in_ch(r12_38, rdx17, r8_20, r9_39, v1);
                        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
                        v13 = r14_22;
                        v19 = 16;
                        *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax40);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = 0;
                        *reinterpret_cast<unsigned char*>(&rax40) = reinterpret_cast<uint1_t>(!!esi15);
                        *reinterpret_cast<unsigned char*>(&rdx17) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp12) != 0xffffffff);
                        eax16 = *reinterpret_cast<uint32_t*>(&rax40) & *reinterpret_cast<uint32_t*>(&rdx17);
                    }
                } else {
                    *reinterpret_cast<unsigned char*>(&eax35) = reinterpret_cast<uint1_t>(!!esi15);
                    *reinterpret_cast<unsigned char*>(&rdx17) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbp12) != 0xffffffff);
                    eax16 = eax35 & *reinterpret_cast<uint32_t*>(&rdx17);
                    goto addr_405acc_18;
                }
            } else {
                addr_405acc_18:
                if (v41) {
                    addr_406cd8_15:
                    v13 = r14_22;
                    if (!*reinterpret_cast<signed char*>(&eax16)) {
                        goto addr_405bc3_20;
                    }
                } else {
                    v13 = r14_22;
                    v19 = 8;
                }
            }
        }
    }
    if (!*reinterpret_cast<signed char*>(&eax16)) {
        addr_405bb7_23:
        if (!v13) {
            if (!(*reinterpret_cast<unsigned char*>(&r13d42) & 32)) 
                goto 0x404955;
            *reinterpret_cast<uint32_t*>(&rcx43) = *reinterpret_cast<uint32_t*>(&rbp12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx43) + 4) = 0;
            eax45 = tolower(rcx43, rdx17, r8_20, r9_44, v1);
            rsp46 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
            if (*reinterpret_cast<signed char*>(&eax45) != 40) 
                goto 0x404955;
            rsi47 = reinterpret_cast<unsigned char*>("nil)");
            edi48 = 0x6e;
            do {
                rax50 = in_ch(r12_49, r15_5, r8_20, r9_44, v1);
                if (*reinterpret_cast<int32_t*>(&rax50) == -1) 
                    break;
                *reinterpret_cast<int32_t*>(&rcx51) = *reinterpret_cast<int32_t*>(&rax50);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx51) + 4) = 0;
                eax52 = tolower(rcx51, r15_5, r8_20, r9_44, v1);
                rsp46 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp46) - 8 + 8 - 8 + 8);
                if (*reinterpret_cast<signed char*>(&edi48) != *reinterpret_cast<signed char*>(&eax52)) 
                    goto 0x404955;
                ++rsi47;
                edi48 = *rsi47;
            } while (*reinterpret_cast<signed char*>(&edi48));
            goto addr_4064ac_30;
        } else {
            addr_405bc3_20:
            if (reinterpret_cast<int1_t>(v13 == 1)) {
                eax53 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v21) - 43);
                if (!(*reinterpret_cast<unsigned char*>(&eax53) & 0xfd)) 
                    goto 0x404955; else 
                    goto addr_405be1_32;
            }
        }
    } else {
        r14d54 = v19;
        rdi55 = v13;
        v56 = r13d57;
        v58 = r13d59 & 0x100;
        v60 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp11) + 0xf8);
        goto addr_405b91_34;
    }
    goto 0x404955;
    addr_4064ac_30:
    rax61 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp46) + 0xf8);
    v62 = rax61;
    rax63 = resize_wbuf(0, rax61, v21, r9_44, v1, 0, rax61, v21);
    rsp64 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp46) - 8 + 8);
    v13 = reinterpret_cast<void**>(1);
    v21 = rax63;
    *reinterpret_cast<void***>(rax63) = reinterpret_cast<void**>(48);
    addr_405bfe_36:
    esi65 = r13d42 & 16;
    rax66 = resize_wbuf(v13, v62, v21, r9_44, v1, v13, v62, v21);
    rdx67 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp64) - 8 + 8 + 0x108);
    *reinterpret_cast<int32_t*>(&r8_68) = v19;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_68) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax66) + reinterpret_cast<unsigned char>(v13)) = 0;
    edi69 = r13d42 & 8;
    if (!edi69) {
        if (!esi65) {
            eax70 = strtoul(rax66, rdx67, r8_68, r9_44, v1);
        } else {
            eax70 = strtol(rax66, rdx67, r8_68, r9_44, v1);
        }
        *reinterpret_cast<int32_t*>(&rax71) = eax70;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax71) + 4) = 0;
        v72 = 0xffffffff00000000 & v73 | rax71;
    } else {
        if (!esi65) {
            rax74 = text(rax66, rdx67, *reinterpret_cast<int32_t*>(&r8_68), r9_44, v1);
            v72 = rax74;
        } else {
            rax75 = text(rax66, rdx67, *reinterpret_cast<int32_t*>(&r8_68), r9_44, v1);
            v72 = rax75;
        }
    }
    if (rax66 == v76) 
        goto 0x404970;
    if (r13d42 & 0x80) 
        goto 0x404ad0;
    if (!esi65) {
        if (edi69) {
            addr_406b52_48:
            if (v77) {
                *reinterpret_cast<int32_t*>(&rdi78) = v79;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi78) + 4) = 0;
                rax80 = v81;
                if (*reinterpret_cast<int32_t*>(&rdi78) != 1) {
                    *reinterpret_cast<int32_t*>(&rax82) = static_cast<int32_t>(rdi78 - 2);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax82) + 4) = 0;
                    rax80 = reinterpret_cast<uint64_t**>(reinterpret_cast<int64_t>(v83) + rax82 * 8 + 8);
                }
                rax84 = *rax80;
            } else {
                rax84 = *v85;
            }
        } else {
            eax86 = *reinterpret_cast<int32_t*>(&v72);
            if (*reinterpret_cast<unsigned char*>(&r13d42) & 4) {
                addr_407103_54:
                if (v87) {
                    *reinterpret_cast<int32_t*>(&rdi88) = v89;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi88) + 4) = 0;
                    rdx90 = v91;
                    if (*reinterpret_cast<int32_t*>(&rdi88) != 1) {
                        *reinterpret_cast<int32_t*>(&rdx92) = static_cast<int32_t>(rdi88 - 2);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx92) + 4) = 0;
                        rdx90 = reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(v93) + rdx92 * 8 + 8);
                        goto addr_407481_57;
                    }
                } else {
                    addr_40710f_58:
                    rdx94 = *v95;
                    *rdx94 = eax86;
                    goto addr_405cdc_59;
                }
            } else {
                if (*reinterpret_cast<unsigned char*>(&r13d42) & 2) {
                    addr_40748b_61:
                    if (v96) {
                        *reinterpret_cast<int32_t*>(&rdi97) = v98;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi97) + 4) = 0;
                        rdx99 = v100;
                        if (*reinterpret_cast<int32_t*>(&rdi97) != 1) {
                            *reinterpret_cast<int32_t*>(&rdx101) = static_cast<int32_t>(rdi97 - 2);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx101) + 4) = 0;
                            rdx99 = reinterpret_cast<int16_t**>(reinterpret_cast<int64_t>(v102) + rdx101 * 8 + 8);
                        }
                        rdx103 = *rdx99;
                        goto addr_4074a8_65;
                    } else {
                        rdx103 = *v104;
                        goto addr_4074a8_65;
                    }
                } else {
                    if (!(*reinterpret_cast<unsigned char*>(&r13d42) & 1)) {
                        if (!v105) 
                            goto addr_40710f_58;
                        ecx106 = 0;
                        edx107 = v108;
                        while (--edx107, !!edx107) {
                            ecx106 = 1;
                        }
                        goto addr_407770_73;
                    } else {
                        if (!v109) {
                            addr_405cc9_75:
                            rdx110 = *v111;
                            goto addr_405cda_76;
                        } else {
                            ecx112 = 0;
                            edx113 = v114;
                            while (--edx113, !!edx113) {
                                ecx112 = 1;
                            }
                            goto addr_406bc7_80;
                        }
                    }
                }
            }
        }
    } else {
        if (edi69) 
            goto addr_406b52_48;
        eax86 = *reinterpret_cast<int32_t*>(&v72);
        if (*reinterpret_cast<unsigned char*>(&r13d42) & 4) 
            goto addr_407103_54;
        if (*reinterpret_cast<unsigned char*>(&r13d42) & 2) 
            goto addr_40748b_61;
        if (!(*reinterpret_cast<unsigned char*>(&r13d42) & 1)) 
            goto addr_407753_85; else 
            goto addr_405cbe_86;
    }
    *rax84 = v72;
    addr_405cdc_59:
    goto 0x4049b9;
    addr_407481_57:
    **rdx90 = eax86;
    goto addr_405cdc_59;
    addr_4074a8_65:
    *rdx103 = *reinterpret_cast<int16_t*>(&eax86);
    goto addr_405cdc_59;
    addr_407770_73:
    *reinterpret_cast<int32_t*>(&rdi115) = v116;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi115) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx117) = static_cast<int32_t>(rdi115 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx117) + 4) = 0;
    rdx90 = v118 + rdx117;
    if (!*reinterpret_cast<signed char*>(&ecx106)) {
        rdx90 = v118;
    }
    goto addr_407481_57;
    addr_405cda_76:
    *rdx110 = *reinterpret_cast<signed char*>(&eax86);
    goto addr_405cdc_59;
    addr_406bc7_80:
    *reinterpret_cast<int32_t*>(&rdi119) = v120;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi119) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx121) = static_cast<int32_t>(rdi119 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx121) + 4) = 0;
    rdx122 = v123 + rdx121;
    if (!*reinterpret_cast<signed char*>(&ecx112)) {
        rdx122 = v123;
    }
    rdx110 = *rdx122;
    goto addr_405cda_76;
    addr_407753_85:
    if (!v124) 
        goto addr_40710f_58;
    ecx106 = 0;
    edx125 = v126;
    while (--edx125, !!edx125) {
        ecx106 = 1;
    }
    goto addr_407770_73;
    addr_405cbe_86:
    if (!v127) 
        goto addr_405cc9_75;
    ecx112 = 0;
    edx128 = v129;
    while (--edx128, !!edx128) {
        ecx112 = 1;
    }
    goto addr_406bc7_80;
    addr_405be1_32:
    *reinterpret_cast<uint32_t*>(&r9_44) = 0;
    *reinterpret_cast<int32_t*>(&r9_44 + 4) = 0;
    back_ch(*reinterpret_cast<uint32_t*>(&rbp12), r12_130, r15_5, 0, v1);
    rsp64 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
    v62 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp64) + 0xf8);
    goto addr_405bfe_36;
    do {
        addr_405b91_34:
        if (r14d54 != 16) {
            if (static_cast<uint32_t>(rbp12 - 48) > 9) {
                if (r14d54 != 10) 
                    break;
                if (!v58) 
                    break;
                r13d131 = 0x7fffffff;
                if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi15 < 0) | reinterpret_cast<uint1_t>(esi15 == 0))) 
                    goto addr_405d7a_103;
            } else {
                if (static_cast<int32_t>(rbp12 - 47) > r14d54) 
                    break; else 
                    goto addr_405b44_105;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rcx132) = *reinterpret_cast<uint32_t*>(&rbp12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx132) + 4) = 0;
            eax133 = isxdigit(rcx132);
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
            if (eax133) 
                goto addr_405b44_105; else 
                break;
        }
        r13d131 = esi15;
        addr_405d7a_103:
        *reinterpret_cast<uint32_t*>(&rdx17) = v134->f0;
        *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
        eax135 = *reinterpret_cast<uint32_t*>(&rdx17);
        if (*reinterpret_cast<uint32_t*>(&rdx17) != *reinterpret_cast<uint32_t*>(&rbp12)) {
            rbx136 = v137;
        } else {
            rbx136 = &v134->f1;
            if (v134->f1) {
                do {
                    rdx17 = r15_5;
                    rax140 = in_ch(r12_138, rdx17, r8_20, r9_139, v1);
                    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
                    if (*reinterpret_cast<uint32_t*>(&rax140) == 0xffffffff) 
                        goto addr_406104_111;
                    ecx141 = *rbx136;
                    --r13d131;
                    if (*reinterpret_cast<uint32_t*>(&rax140) != ecx141) 
                        goto addr_405dc8_113;
                    ++rbx136;
                    if (!*rbx136) 
                        goto addr_4061b8_115;
                } while (r13d131);
                goto addr_4061bf_117;
            } else {
                goto addr_405dd4_119;
            }
        }
        addr_405dcc_120:
        if (*reinterpret_cast<signed char*>(&eax135)) 
            goto addr_40794f_121;
        addr_405dd4_119:
        rbx142 = rdi55 + 0xffffffffffffffff;
        if (reinterpret_cast<uint1_t>(esi15 < 0) | reinterpret_cast<uint1_t>(esi15 == 0)) {
            r13d131 = esi15;
        }
        esi15 = r13d131;
        continue;
        addr_406104_111:
        *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax140);
        eax135 = *rbx136;
        goto addr_405dcc_120;
        addr_405dc8_113:
        *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax140);
        eax135 = ecx141;
        goto addr_405dcc_120;
        addr_4061b8_115:
        *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax140);
        goto addr_405dd4_119;
        addr_405b44_105:
        rbx142 = rdi55;
        r8_20 = v21;
        rdi55 = rbx142 + 1;
        rax144 = resize_wbuf(rbx142, v60, r8_20, r9_143, v1);
        rdx17 = r15_5;
        v21 = rax144;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax144) + reinterpret_cast<unsigned char>(rbx142)) = *reinterpret_cast<void***>(&rbp12);
        eax145 = 0;
        *reinterpret_cast<unsigned char*>(&eax145) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi15 < 0) | reinterpret_cast<uint1_t>(esi15 == 0)));
        esi15 = esi15 - eax145;
        rax148 = in_ch(r12_146, rdx17, r8_20, r9_147, v1);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8 - 8 + 8);
        *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax148);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = 0;
        *reinterpret_cast<unsigned char*>(&rdx17) = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax148) != 0xffffffff);
    } while (*reinterpret_cast<unsigned char*>(&rdx17) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!esi15)));
    v13 = rdi55;
    r13d42 = v56;
    goto addr_405bb7_23;
    addr_40794f_121:
    r14_149 = rbx136;
    v13 = rdi55;
    r13d42 = v56;
    addr_4061d9_126:
    if (reinterpret_cast<uint64_t>(v150) < reinterpret_cast<uint64_t>(r14_149)) {
        *reinterpret_cast<uint32_t*>(&r9_44) = 0;
        *reinterpret_cast<int32_t*>(&r9_44 + 4) = 0;
        r8_20 = r15_5;
        rdx17 = r12_151;
        rsi152 = r14_149 - 1;
        back_ch(*reinterpret_cast<uint32_t*>(&rbp12), rdx17, r8_20, 0, v1);
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        if (reinterpret_cast<uint64_t>(v153) < reinterpret_cast<uint64_t>(rsi152)) {
            rbp154 = rsi152;
            do {
                ecx155 = *rbp154;
                *reinterpret_cast<uint32_t*>(&r9_44) = 1;
                *reinterpret_cast<int32_t*>(&r9_44 + 4) = 0;
                r8_20 = r15_5;
                rdx17 = r12_156;
                --rbp154;
                back_ch(ecx155, rdx17, r8_20, 1, v1);
                rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
            } while (rbp154 != v157);
            rsi152 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rsi152) + (reinterpret_cast<int64_t>(v158) - reinterpret_cast<uint64_t>(r14_149)) + 1);
        }
        *reinterpret_cast<uint32_t*>(&rbp12) = *rsi152;
        goto addr_405bb7_23;
    }
    addr_4061bf_117:
    r14_149 = rbx136;
    r13d42 = v56;
    v13 = rdi55;
    *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax140);
    goto addr_4061d9_126;
    addr_405a1d_5:
    r8_20 = v159;
    rax161 = resize_wbuf(0, reinterpret_cast<int64_t>(rsp11) + 0xf8, r8_20, r9_160, v1);
    rdx6 = r15_5;
    v21 = rax161;
    *reinterpret_cast<void***>(rax161) = *reinterpret_cast<void***>(&rbp12);
    eax162 = 0;
    *reinterpret_cast<unsigned char*>(&eax162) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi163 < 0) | reinterpret_cast<uint1_t>(esi164 == 0)));
    esi15 = esi165 - eax162;
    rax14 = in_ch(r12_166, rdx6, r8_20, r9_167, v1);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8 - 8 + 8);
    v13 = reinterpret_cast<void**>(1);
    *reinterpret_cast<uint32_t*>(&rbp12) = *reinterpret_cast<uint32_t*>(&rax14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = 0;
    goto addr_405a61_6;
}

struct s59 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

struct s60 {
    signed char[8] pad8;
    int32_t f8;
};

struct s61 {
    signed char[1] pad1;
    void** f1;
};

struct s62 {
    signed char[1] pad1;
    void** f1;
};

void fun_4057a9() {
    int64_t v1;
    void** r15_2;
    int32_t eax3;
    int32_t esi4;
    int32_t esi5;
    void** rdx6;
    int32_t esi7;
    int32_t esi8;
    void** r12_9;
    void** r8_10;
    void** r9_11;
    int64_t rax12;
    void* rsp13;
    uint32_t v14;
    uint32_t edi15;
    uint32_t v16;
    void** v17;
    int64_t rdi18;
    void** r12_19;
    void** r8_20;
    void** r9_21;
    int64_t rax22;
    uint32_t ebp23;
    int64_t rcx24;
    void** r8_25;
    void** r9_26;
    uint32_t eax27;
    void* rsp28;
    int64_t rcx29;
    void** r8_30;
    void** r9_31;
    void** r8_32;
    void** v33;
    void** rax34;
    void** v35;
    void** r9_36;
    void** rax37;
    void** v38;
    void** r14_39;
    unsigned char v40;
    void** r8_41;
    void** v42;
    void** rax43;
    void** r9_44;
    void** rax45;
    void** r12_46;
    void** r9_47;
    int64_t rax48;
    int64_t rcx49;
    void** r9_50;
    uint32_t eax51;
    uint32_t r13d52;
    uint32_t r13d53;
    void** r9_54;
    void** rax55;
    void** r12_56;
    void** r9_57;
    int64_t rax58;
    int32_t edi59;
    int64_t rcx60;
    void** r9_61;
    uint32_t eax62;
    uint32_t r13d63;
    void** r9_64;
    void** rax65;
    void** r12_66;
    void** r9_67;
    int64_t rax68;
    void** r8_69;
    void** v70;
    void** rax71;
    void** r9_72;
    void** rax73;
    void** rdi74;
    void** r12_75;
    void** r9_76;
    int64_t rax77;
    int32_t ebp78;
    int64_t rcx79;
    void** r9_80;
    uint32_t eax81;
    int32_t eax82;
    void** r9_83;
    void** rax84;
    int1_t zf85;
    struct s59* rsi86;
    uint32_t r13d87;
    void** rax88;
    void* rsp89;
    void** rdx90;
    void** v91;
    void** rax92;
    int32_t v93;
    int32_t v94;
    void** v95;
    void** v96;
    void** v97;
    int32_t v98;
    int32_t v99;
    int32_t v100;
    int32_t* rdi101;
    int32_t v102;
    int32_t* v103;
    struct s60* v104;
    uint32_t v105;
    void** v106;
    int64_t r13_107;
    uint32_t ebp108;
    signed char v109;
    uint32_t eax110;
    uint32_t eax111;
    unsigned char* v112;
    void** v113;
    int64_t rbx114;
    void** r10_115;
    void** v116;
    unsigned char* rdx117;
    unsigned char* v118;
    void** v119;
    void** rax120;
    uint32_t eax121;
    void** rcx122;
    uint32_t eax123;
    void** v124;
    struct s61* v125;
    void** r12_126;
    void** r9_127;
    int64_t rax128;
    uint32_t ecx129;
    void** rbp130;
    signed char* v131;
    int32_t v132;
    void** rbx133;
    void** r9_134;
    void** rax135;
    uint32_t edx136;
    void** v137;
    void** v138;
    struct s62* v139;
    void** v140;
    int64_t rcx141;
    int32_t eax142;
    int64_t rcx143;
    void** r9_144;
    uint32_t eax145;
    void** r9_146;
    void** rax147;
    void* rdx148;
    void** r10_149;
    void** r12_150;
    void** r9_151;
    int64_t rax152;
    void** r12_153;
    void** r9_154;
    int64_t rax155;
    int32_t eax156;
    void** r9_157;
    void** rax158;
    void** r12_159;
    void** r12_160;
    void** r9_161;
    int64_t rax162;
    int32_t ebp163;
    int64_t rcx164;
    void** r9_165;
    uint32_t eax166;
    int32_t eax167;
    void** r9_168;
    void** rax169;
    int1_t zf170;
    void** r12_171;
    void** r9_172;
    int64_t rax173;
    uint32_t ebp174;
    int64_t rcx175;
    void** r9_176;
    uint32_t eax177;
    void* rsp178;
    void** r8_179;
    void** r9_180;
    void** rax181;
    uint32_t r14d182;
    uint32_t r13d183;
    void** rbx184;
    void** r12_185;
    void** r9_186;
    int64_t rax187;
    int32_t ebp188;
    int64_t rcx189;
    void** r9_190;
    uint32_t eax191;
    void** r9_192;
    void** rax193;
    void** rdx194;
    int1_t zf195;
    void** r12_196;
    void** v197;
    void** rax198;
    void** r9_199;
    void** rax200;
    void** v201;
    void** rax202;
    void** r9_203;
    void** rax204;

    v1 = reinterpret_cast<int64_t>(__return_address());
    r15_2 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 0xf0);
    eax3 = 0;
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi4 < 0) | reinterpret_cast<uint1_t>(esi5 == 0)));
    rdx6 = r15_2;
    esi7 = esi8 - eax3;
    rax12 = in_ch(r12_9, rdx6, r8_10, r9_11, v1);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    v14 = *reinterpret_cast<uint32_t*>(&rax12);
    if (*reinterpret_cast<uint32_t*>(&rax12) == 0xffffffff) {
        edi15 = v14;
        if (v16) {
            edi15 = v16;
        }
        cleanup_return(edi15, reinterpret_cast<int64_t>(rsp13) + 0xe8, v17, reinterpret_cast<int64_t>(rsp13) + 0x100, v1);
        goto 0x40498f;
    }
    *reinterpret_cast<uint32_t*>(&rdi18) = v14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = 0;
    if (!(static_cast<uint32_t>(rdi18 - 43) & 0xfffffffd)) {
        if (!esi7) 
            goto 0x404970;
        rdx6 = r15_2;
        rax22 = in_ch(r12_19, rdx6, r8_20, r9_21, v1);
        ebp23 = *reinterpret_cast<uint32_t*>(&rax22);
        if (*reinterpret_cast<uint32_t*>(&rax22) == 0xffffffff) 
            goto 0x404970;
        *reinterpret_cast<uint32_t*>(&rcx24) = *reinterpret_cast<uint32_t*>(&rax22);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
        eax27 = tolower(rcx24, rdx6, r8_25, r9_26, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8);
        if (!(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0))) 
            goto addr_406739_9;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx29) = *reinterpret_cast<uint32_t*>(&rdi18);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0;
        ebp23 = *reinterpret_cast<uint32_t*>(&rdi18);
        eax27 = tolower(rcx29, rdx6, r8_30, r9_31, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
        goto addr_4057f1_11;
    }
    if (eax27 == 0x6e) {
        r8_32 = v33;
        rax34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xf8);
        v35 = rax34;
        rax37 = resize_wbuf(0, rax34, r8_32, r9_36, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        v38 = rax37;
        *reinterpret_cast<void***>(rax37) = *reinterpret_cast<void***>(&ebp23);
    } else {
        if (eax27 != 0x69) {
            addr_405803_15:
            *reinterpret_cast<int32_t*>(&r14_39) = 0;
            *reinterpret_cast<int32_t*>(&r14_39 + 4) = 0;
            v40 = 0x65;
            if (esi7 && ebp23 == 48) {
                r8_41 = v42;
                rax43 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xf8);
                rax45 = resize_wbuf(0, rax43, r8_41, r9_44, v1);
                rdx6 = r15_2;
                v38 = rax45;
                *reinterpret_cast<void***>(rax45) = reinterpret_cast<void**>(48);
                rax48 = in_ch(r12_46, rdx6, r8_41, r9_47, v1);
                rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8);
                ebp23 = *reinterpret_cast<uint32_t*>(&rax48);
                if (reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0)) {
                    *reinterpret_cast<uint32_t*>(&rcx49) = *reinterpret_cast<uint32_t*>(&rax48);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
                    eax51 = tolower(rcx49, rdx6, r8_41, r9_50, v1);
                    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                    if (eax51 == 0x78) {
                        *reinterpret_cast<int32_t*>(&r14_39) = 2;
                        *reinterpret_cast<int32_t*>(&r14_39 + 4) = 0;
                        r8_41 = v38;
                        r13d52 = r13d53 & 0xfffffeff | 64;
                        rax55 = resize_wbuf(1, rax43, r8_41, r9_54, v1);
                        rdx6 = r15_2;
                        v38 = rax55;
                        *reinterpret_cast<void***>(rax55 + 1) = *reinterpret_cast<void***>(&ebp23);
                        rax58 = in_ch(r12_56, rdx6, r8_41, r9_57, v1);
                        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8);
                        v40 = 0x70;
                        ebp23 = *reinterpret_cast<uint32_t*>(&rax58);
                        goto addr_405818_19;
                    } else {
                        *reinterpret_cast<int32_t*>(&r14_39) = 1;
                        *reinterpret_cast<int32_t*>(&r14_39 + 4) = 0;
                        goto addr_405818_19;
                    }
                } else {
                    edi59 = esi7 - 1;
                    if (edi59) {
                        *reinterpret_cast<uint32_t*>(&rcx60) = *reinterpret_cast<uint32_t*>(&rax48);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx60) + 4) = 0;
                        eax62 = tolower(rcx60, rdx6, r8_41, r9_61, v1);
                        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                        if (eax62 == 0x78) {
                            r8_41 = v38;
                            r13d52 = r13d63 & 0xfffffeff | 64;
                            rax65 = resize_wbuf(1, rax43, r8_41, r9_64, v1);
                            rdx6 = r15_2;
                            v38 = rax65;
                            *reinterpret_cast<void***>(rax65 + 1) = *reinterpret_cast<void***>(&ebp23);
                            rax68 = in_ch(r12_66, rdx6, r8_41, r9_67, v1);
                            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8);
                            ebp23 = *reinterpret_cast<uint32_t*>(&rax68);
                            if (reinterpret_cast<uint1_t>(edi59 < 0) | reinterpret_cast<uint1_t>(edi59 == 0)) {
                                esi7 = edi59;
                                v40 = 0x70;
                                *reinterpret_cast<int32_t*>(&r14_39) = 2;
                                *reinterpret_cast<int32_t*>(&r14_39 + 4) = 0;
                                goto addr_405818_19;
                            } else {
                                esi7 = esi7 - 2;
                                v40 = 0x70;
                                *reinterpret_cast<int32_t*>(&r14_39) = 2;
                                *reinterpret_cast<int32_t*>(&r14_39 + 4) = 0;
                                goto addr_405818_19;
                            }
                        } else {
                            esi7 = edi59;
                            *reinterpret_cast<int32_t*>(&r14_39) = 1;
                            *reinterpret_cast<int32_t*>(&r14_39 + 4) = 0;
                            goto addr_405818_19;
                        }
                    } else {
                        esi7 = 0;
                        *reinterpret_cast<int32_t*>(&r14_39) = 1;
                        *reinterpret_cast<int32_t*>(&r14_39 + 4) = 0;
                        goto addr_405818_19;
                    }
                }
            }
        } else {
            r8_69 = v70;
            rax71 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xf8);
            v35 = rax71;
            rax73 = resize_wbuf(0, rax71, r8_69, r9_72, v1);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
            v38 = rax73;
            *reinterpret_cast<void***>(rax73) = *reinterpret_cast<void***>(&ebp23);
            goto addr_406eab_29;
        }
    }
    addr_407240_30:
    *reinterpret_cast<uint32_t*>(&rdi74) = 1;
    *reinterpret_cast<int32_t*>(&rdi74 + 4) = 0;
    while (rax77 = in_ch(r12_75, r15_2, r8_32, r9_76, v1), ebp78 = *reinterpret_cast<int32_t*>(&rax77), *reinterpret_cast<int32_t*>(&rax77) != -1) {
        *reinterpret_cast<int32_t*>(&rcx79) = *reinterpret_cast<int32_t*>(&rax77);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx79) + 4) = 0;
        eax81 = tolower(rcx79, r15_2, r8_32, r9_80, v1);
        if (eax81 != static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>("nan") + reinterpret_cast<unsigned char>(rdi74)))) 
            goto 0x404970;
        r14_39 = rdi74 + 1;
        eax82 = 0;
        r8_32 = v38;
        *reinterpret_cast<unsigned char*>(&eax82) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0)));
        esi7 = esi7 - eax82;
        rax84 = resize_wbuf(rdi74, v35, r8_32, r9_83, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8 - 8 + 8);
        zf85 = *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>("nan") + reinterpret_cast<unsigned char>(rdi74)) + 1) == 0;
        v38 = rax84;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax84) + reinterpret_cast<unsigned char>(rdi74)) = *reinterpret_cast<signed char*>(&ebp78);
        if (zf85) 
            goto addr_4065b6_34;
        if (!esi7) 
            goto 0x404970;
        rdi74 = r14_39;
    }
    goto 0x404970;
    addr_4065b6_34:
    *reinterpret_cast<uint32_t*>(&rsi86) = r13d87 & 0x80;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi86) + 4) = 0;
    rax88 = resize_wbuf(r14_39, v35, v38, 0, v1);
    rsp89 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax88) + reinterpret_cast<unsigned char>(r14_39)) = 0;
    if (*reinterpret_cast<unsigned char*>(&r13d87) & 8) {
        text(reinterpret_cast<int64_t>(rsp89) + 0xc0, rax88, reinterpret_cast<int64_t>(rsp89) + 0x108);
        __asm__("fld tword [rsp+0xc0]");
        if (*reinterpret_cast<uint32_t*>(&rsi86)) {
            __asm__("fstp st0");
            goto addr_404ab1_40;
        } else {
            rdx90 = v91;
            rax92 = rax88;
            if (rdx90 == rax92) {
                __asm__("fstp st0");
            } else {
                if (v14 == 45) {
                    __asm__("fchs ");
                }
                if (v93) {
                    if (v94 != 1) {
                    }
                    __asm__("fstp tword [rcx]");
                } else {
                    __asm__("fstp tword [rcx]");
                }
            }
        }
    } else {
        if (!(r13d87 & 4)) {
            text(rax88, reinterpret_cast<int64_t>(rsp89) + 0x108, v38);
            if (*reinterpret_cast<uint32_t*>(&rsi86)) {
                addr_404ab1_40:
                if (v95 == rax88) 
                    goto 0x404970; else 
                    goto addr_404ac7_52;
            } else {
                rdx90 = v96;
                rax92 = rax88;
                if (rdx90 == rax92) 
                    goto 0x404970;
                if (v14 != 45) 
                    goto addr_406c2e_55; else 
                    goto addr_406c2b_56;
            }
        } else {
            text(reinterpret_cast<int64_t>(rsp89) + 0xc0, rax88, reinterpret_cast<int64_t>(rsp89) + 0x108);
            __asm__("fld tword [rsp+0xc0]");
            if (*reinterpret_cast<uint32_t*>(&rsi86)) {
                __asm__("fstp st0");
                goto addr_404ab1_40;
            }
            rdx90 = v97;
            rax92 = rax88;
            if (rdx90 == rax92) {
                __asm__("fstp st0");
                goto 0x404970;
            }
            __asm__("fstp qword [rsp+0xb8]");
            *reinterpret_cast<void***>(rdi74) = rsi86->f0;
            if (v14 != 45) 
                goto addr_40665b_65; else 
                goto addr_406657_66;
        }
    }
    addr_40667e_67:
    if (rdx90 == rax92) 
        goto 0x404970;
    goto 0x4049b9;
    addr_404ac7_52:
    addr_406c2e_55:
    if (v98) {
        if (v99 != 1) {
        }
    }
    __asm__("movss [rcx], xmm0");
    goto addr_40667e_67;
    addr_406c2b_56:
    __asm__("xorps xmm0, xmm7");
    goto addr_406c2e_55;
    addr_40665b_65:
    if (v100) {
        *reinterpret_cast<int32_t*>(&rdi101) = v102;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi101) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rdi101) != 1) {
            rdi101 = v103;
        }
    } else {
        rdi101 = &v104->f8;
    }
    *rdi101 = rsi86->f4;
    goto addr_40667e_67;
    addr_406657_66:
    __asm__("xorpd xmm0, xmm6");
    goto addr_40665b_65;
    addr_405818_19:
    *reinterpret_cast<uint32_t*>(&rdi74) = 0;
    *reinterpret_cast<int32_t*>(&rdi74 + 4) = 0;
    v105 = r13d52;
    v106 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xf8);
    *reinterpret_cast<uint32_t*>(&r13_107) = ebp23;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_107) + 4) = 0;
    ebp108 = 0;
    v109 = 0;
    while (1) {
        if (static_cast<uint32_t>(r13_107 - 48) <= 9) 
            goto addr_405de6_82;
        if (v109) {
            r8_41 = v38;
            eax110 = v40;
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r8_41) + reinterpret_cast<unsigned char>(r14_39) + 0xffffffffffffffff) != *reinterpret_cast<signed char*>(&eax110) || static_cast<uint32_t>(r13_107 - 43) & 0xfffffffd) {
                addr_40586d_85:
                eax111 = *v112;
                if (reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0)) {
                    if (!*reinterpret_cast<signed char*>(&ebp108)) {
                        rdi74 = v113;
                        *reinterpret_cast<int32_t*>(&rbx114) = 0x7fffffff;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx114) + 4) = 0;
                        if (*reinterpret_cast<uint32_t*>(&r13_107) != static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax111))) {
                            addr_406cf1_88:
                            if (*reinterpret_cast<unsigned char*>(&eax111)) {
                                addr_4062a1_89:
                                r10_115 = v116;
                                if (1) {
                                    addr_405891_90:
                                    if (!r10_115) 
                                        goto addr_40637a_91; else 
                                        goto addr_40589a_92;
                                } else {
                                    rdx117 = v118;
                                    rdi74 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi74) - reinterpret_cast<uint64_t>(rdx117));
                                    r8_41 = rdi74;
                                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdi74) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdi74 == 0)) {
                                        r10_115 = v119;
                                        *reinterpret_cast<int32_t*>(&rax120) = 0;
                                        *reinterpret_cast<int32_t*>(&rax120 + 4) = 0;
                                    } else {
                                        eax121 = *rdx117;
                                        rcx122 = r10_115;
                                        if (*reinterpret_cast<void***>(r10_115) == *reinterpret_cast<void***>(&eax121)) {
                                            do {
                                                ++r10_115;
                                                rax120 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r10_115) - reinterpret_cast<unsigned char>(rcx122));
                                                if (reinterpret_cast<signed char>(rax120) >= reinterpret_cast<signed char>(r8_41)) 
                                                    break;
                                                eax123 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdx117) + reinterpret_cast<unsigned char>(rax120));
                                            } while (*reinterpret_cast<void***>(r10_115) == *reinterpret_cast<void***>(&eax123));
                                            goto addr_40589a_92;
                                        } else {
                                            r10_115 = v124;
                                            goto addr_40589a_92;
                                        }
                                    }
                                    if (r8_41 != rax120) 
                                        goto addr_405891_90;
                                }
                            } else {
                                goto addr_406924_102;
                            }
                        } else {
                            *reinterpret_cast<int32_t*>(&rbx114) = 0x7fffffff;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx114) + 4) = 0;
                            rdi74 = reinterpret_cast<void**>(&v125->f1);
                            if (*reinterpret_cast<void***>(&v125->f1)) {
                                do {
                                    addr_406285_104:
                                    rax128 = in_ch(r12_126, r15_2, r8_41, r9_127, v1);
                                    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                                    if (*reinterpret_cast<uint32_t*>(&rax128) == 0xffffffff) 
                                        goto addr_406295_105;
                                    ecx129 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi74));
                                    *reinterpret_cast<int32_t*>(&rbx114) = *reinterpret_cast<int32_t*>(&rbx114) - 1;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx114) + 4) = 0;
                                    if (*reinterpret_cast<uint32_t*>(&rax128) != ecx129) 
                                        goto addr_406dee_107;
                                    ++rdi74;
                                    if (!*reinterpret_cast<void***>(rdi74)) 
                                        goto addr_406de6_109;
                                } while (*reinterpret_cast<int32_t*>(&rbx114));
                                goto addr_406dde_111;
                            } else {
                                addr_406924_102:
                                rbp130 = r14_39;
                                rdi74 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v131) - reinterpret_cast<unsigned char>(r14_39));
                                if (*v131) {
                                    v132 = *reinterpret_cast<int32_t*>(&rbx114);
                                    rbx133 = rdi74;
                                    rdi74 = v106;
                                    do {
                                        r8_41 = v38;
                                        r14_39 = rbp130 + 1;
                                        rax135 = resize_wbuf(rbp130, rdi74, r8_41, r9_134, v1);
                                        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                                        v38 = rax135;
                                        edx136 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbx133) + reinterpret_cast<unsigned char>(r14_39) + 0xffffffffffffffff);
                                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax135) + reinterpret_cast<unsigned char>(rbp130)) = *reinterpret_cast<signed char*>(&edx136);
                                        rbp130 = r14_39;
                                    } while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rbx133) + reinterpret_cast<unsigned char>(r14_39)));
                                    *reinterpret_cast<int32_t*>(&rbx114) = v132;
                                    goto addr_406989_115;
                                }
                            }
                        }
                    } else {
                        if (*reinterpret_cast<unsigned char*>(&eax111)) {
                            r10_115 = v137;
                            *reinterpret_cast<int32_t*>(&rbx114) = 0x7fffffff;
                            goto addr_405891_90;
                        }
                    }
                } else {
                    if (!*reinterpret_cast<signed char*>(&ebp108)) {
                        if (*reinterpret_cast<uint32_t*>(&r13_107) != static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax111))) {
                            rdi74 = v138;
                            *reinterpret_cast<int32_t*>(&rbx114) = esi7;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx114) + 4) = 0;
                            goto addr_406cf1_88;
                        } else {
                            *reinterpret_cast<int32_t*>(&rbx114) = esi7;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx114) + 4) = 0;
                            rdi74 = reinterpret_cast<void**>(&v139->f1);
                            if (*reinterpret_cast<void***>(&v139->f1)) 
                                goto addr_406285_104;
                            goto addr_406924_102;
                        }
                    } else {
                        if (*reinterpret_cast<unsigned char*>(&eax111)) {
                            r10_115 = v140;
                            *reinterpret_cast<int32_t*>(&rbx114) = esi7;
                            goto addr_405891_90;
                        }
                    }
                }
            } else {
                goto addr_405dee_126;
            }
        } else {
            if (static_cast<int1_t>(*reinterpret_cast<uint32_t*>(&rcx141) = *reinterpret_cast<uint32_t*>(&r13_107), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx141) + 4) = 0, eax142 = isxdigit(rcx141, rcx141), rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8), !eax142)) {
                if (!r14_39) 
                    goto addr_40586d_85;
                *reinterpret_cast<uint32_t*>(&rcx143) = *reinterpret_cast<uint32_t*>(&r13_107);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx143) + 4) = 0;
                eax145 = tolower(rcx143, rdx6, r8_41, r9_144, v1);
                rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                if (v40 != *reinterpret_cast<unsigned char*>(&eax145)) 
                    goto addr_40586d_85;
                r8_41 = v38;
                ebp108 = 1;
                rax147 = resize_wbuf(r14_39, v106, r8_41, r9_146, v1);
                rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                *reinterpret_cast<uint32_t*>(&rdi74) = v40;
                *reinterpret_cast<int32_t*>(&rdi74 + 4) = 0;
                v109 = 1;
                v38 = rax147;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax147) + reinterpret_cast<unsigned char>(r14_39)) = *reinterpret_cast<signed char*>(&rdi74);
                ++r14_39;
                goto addr_4058a9_131;
            } else {
                addr_405de6_82:
                r8_41 = v38;
                goto addr_405dee_126;
            }
        }
        if (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_115))) != *reinterpret_cast<uint32_t*>(&r13_107)) {
            addr_40589a_92:
            if (*reinterpret_cast<void***>(r10_115)) 
                goto addr_40637a_91; else 
                goto addr_4058a4_133;
        } else {
            if (!*reinterpret_cast<void***>(r10_115 + 1)) {
                addr_4058a4_133:
                if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0))) {
                    esi7 = *reinterpret_cast<int32_t*>(&rbx114);
                }
            } else {
                if (!*reinterpret_cast<int32_t*>(&rbx114)) 
                    goto addr_40637a_91;
                *reinterpret_cast<int32_t*>(&rdx148) = static_cast<int32_t>(rbx114 - 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx148) + 4) = 0;
                rdi74 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r10_115) + reinterpret_cast<uint64_t>(rdx148) + 2);
                r10_149 = r10_115 + 1;
                do {
                    rax152 = in_ch(r12_150, r15_2, r8_41, r9_151, v1);
                    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
                    r10_115 = r10_149;
                    *reinterpret_cast<uint32_t*>(&r13_107) = *reinterpret_cast<uint32_t*>(&rax152);
                    if (*reinterpret_cast<uint32_t*>(&rax152) == 0xffffffff) 
                        goto addr_40589a_92;
                    *reinterpret_cast<int32_t*>(&rbx114) = *reinterpret_cast<int32_t*>(&rbx114) - 1;
                    if (*reinterpret_cast<uint32_t*>(&r13_107) != static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_115)))) 
                        goto addr_40589a_92;
                    r10_149 = r10_115 + 1;
                    if (!*reinterpret_cast<void***>(r10_149)) 
                        goto addr_4058a4_133;
                } while (rdi74 != r10_149);
                goto addr_40637a_91;
            }
        }
        addr_4058a9_131:
        if (!esi7) 
            break;
        rdx6 = r15_2;
        rax155 = in_ch(r12_153, rdx6, r8_41, r9_154, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        *reinterpret_cast<uint32_t*>(&r13_107) = *reinterpret_cast<uint32_t*>(&rax155);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_107) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax155) == 0xffffffff) 
            break;
        eax156 = 0;
        *reinterpret_cast<unsigned char*>(&eax156) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0)));
        esi7 = esi7 - eax156;
        continue;
        addr_406295_105:
        *reinterpret_cast<uint32_t*>(&r13_107) = *reinterpret_cast<uint32_t*>(&rax128);
        if (!*reinterpret_cast<void***>(rdi74)) 
            goto addr_406924_102; else 
            goto addr_4062a1_89;
        addr_406dee_107:
        *reinterpret_cast<uint32_t*>(&r13_107) = *reinterpret_cast<uint32_t*>(&rax128);
        eax111 = ecx129;
        goto addr_406cf1_88;
        addr_406de6_109:
        goto addr_406924_102;
        addr_406dde_111:
        *reinterpret_cast<uint32_t*>(&r13_107) = *reinterpret_cast<uint32_t*>(&rax128);
        goto addr_4062a1_89;
        addr_406989_115:
        if (!(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0))) {
            esi7 = *reinterpret_cast<int32_t*>(&rbx114);
        }
        ebp108 = 1;
        goto addr_4058a9_131;
        addr_405dee_126:
        rax158 = resize_wbuf(r14_39, v106, r8_41, r9_157, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        v38 = rax158;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax158) + reinterpret_cast<unsigned char>(r14_39)) = *reinterpret_cast<signed char*>(&r13_107);
        ++r14_39;
        goto addr_4058a9_131;
    }
    r13d87 = v105;
    addr_406590_147:
    if (!r14_39) 
        goto 0x404970;
    if (!0) {
        if (r14_39 == 2) 
            goto 0x404970;
    }
    v35 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xf8);
    goto addr_4065b6_34;
    addr_40637a_91:
    r13d87 = v105;
    back_ch(*reinterpret_cast<uint32_t*>(&r13_107), r12_159, r15_2, 0, v1);
    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
    goto addr_406590_147;
    addr_406eab_29:
    *reinterpret_cast<uint32_t*>(&rdi74) = 1;
    *reinterpret_cast<int32_t*>(&rdi74 + 4) = 0;
    while (1) {
        rax162 = in_ch(r12_160, r15_2, r8_69, r9_161, v1);
        ebp163 = *reinterpret_cast<int32_t*>(&rax162);
        if (*reinterpret_cast<int32_t*>(&rax162) == -1) 
            goto 0x404970;
        *reinterpret_cast<int32_t*>(&rcx164) = *reinterpret_cast<int32_t*>(&rax162);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx164) + 4) = 0;
        eax166 = tolower(rcx164, r15_2, r8_69, r9_165, v1);
        if (eax166 != static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>("inf") + reinterpret_cast<unsigned char>(rdi74)))) 
            goto 0x404970;
        r14_39 = rdi74 + 1;
        eax167 = 0;
        r8_69 = v38;
        *reinterpret_cast<unsigned char*>(&eax167) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0)));
        esi7 = esi7 - eax167;
        rax169 = resize_wbuf(rdi74, v35, r8_69, r9_168, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8 - 8 + 8);
        zf170 = *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>("inf") + reinterpret_cast<unsigned char>(rdi74)) + 1) == 0;
        v38 = rax169;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax169) + reinterpret_cast<unsigned char>(rdi74)) = *reinterpret_cast<signed char*>(&ebp163);
        if (zf170) 
            break;
        if (!esi7) 
            goto 0x404970;
        rdi74 = r14_39;
    }
    if (esi7 && (rax173 = in_ch(r12_171, r15_2, r8_69, r9_172, v1), rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8), ebp174 = *reinterpret_cast<uint32_t*>(&rax173), *reinterpret_cast<uint32_t*>(&rax173) != 0xffffffff)) {
        *reinterpret_cast<uint32_t*>(&rcx175) = *reinterpret_cast<uint32_t*>(&rax173);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx175) + 4) = 0;
        eax177 = tolower(rcx175, r15_2, r8_69, r9_176, v1);
        rsp178 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        if (eax177 == 0x69) {
            if (!(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0))) {
                --esi7;
            }
            r8_179 = v38;
            rax181 = resize_wbuf(r14_39, v35, r8_179, r9_180, v1);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp178) - 8 + 8);
            v38 = rax181;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax181) + reinterpret_cast<unsigned char>(r14_39)) = *reinterpret_cast<signed char*>(&ebp174);
            r14d182 = r13d183;
            rbx184 = rdi74 + 2;
            rdi74 = reinterpret_cast<void**>(reinterpret_cast<int64_t>("inity") - reinterpret_cast<unsigned char>(rdi74));
            while (1) {
                if (!esi7) 
                    goto 0x404970;
                rax187 = in_ch(r12_185, r15_2, r8_179, r9_186, v1);
                ebp188 = *reinterpret_cast<int32_t*>(&rax187);
                if (*reinterpret_cast<int32_t*>(&rax187) == -1) 
                    goto 0x404970;
                *reinterpret_cast<int32_t*>(&rcx189) = *reinterpret_cast<int32_t*>(&rax187);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx189) + 4) = 0;
                eax191 = tolower(rcx189, r15_2, r8_179, r9_190, v1);
                if (eax191 != static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi74) + reinterpret_cast<unsigned char>(rbx184) + 0xffffffffffffffff))) 
                    goto 0x404970;
                if (!(reinterpret_cast<uint1_t>(esi7 < 0) | reinterpret_cast<uint1_t>(esi7 == 0))) {
                    --esi7;
                }
                r8_179 = v38;
                rax193 = resize_wbuf(rbx184, v35, r8_179, r9_192, v1);
                rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8 - 8 + 8);
                rdx194 = rbx184 + 1;
                zf195 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi74) + reinterpret_cast<unsigned char>(rdx194) + 0xffffffffffffffff) == 0;
                v38 = rax193;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax193) + reinterpret_cast<unsigned char>(rbx184)) = *reinterpret_cast<signed char*>(&ebp188);
                if (zf195) 
                    break;
                rbx184 = rdx194;
            }
            r13d87 = r14d182;
            r14_39 = rdx194;
            goto addr_4065b6_34;
        } else {
            back_ch(ebp174, r12_196, r15_2, 0, v1);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp178) - 8 + 8);
            goto addr_4065b6_34;
        }
    }
    addr_406739_9:
    --esi7;
    addr_4057f1_11:
    if (eax27 == 0x6e) {
        r8_32 = v197;
        rax198 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xf8);
        v35 = rax198;
        rax200 = resize_wbuf(0, rax198, r8_32, r9_199, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        v38 = rax200;
        *reinterpret_cast<void***>(rax200) = *reinterpret_cast<void***>(&ebp23);
        if (!esi7) 
            goto 0x404970; else 
            goto addr_407240_30;
    } else {
        if (eax27 != 0x69) 
            goto addr_405803_15;
        r8_69 = v201;
        rax202 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp28) + 0xf8);
        v35 = rax202;
        rax204 = resize_wbuf(0, rax202, r8_69, r9_203, v1);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        v38 = rax204;
        *reinterpret_cast<void***>(rax204) = *reinterpret_cast<void***>(&ebp23);
        if (!esi7) {
            goto 0x404970;
        }
    }
}

void fun_40595a() {
    void** r15_1;
    void** r12_2;
    void** r8_3;
    void** r9_4;
    int64_t rax5;
    void** r12_6;

    r15_1 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 0xf0);
    rax5 = in_ch(r12_2, r15_1, r8_3, r9_4, __return_address());
    if (*reinterpret_cast<uint32_t*>(&rax5) == 0xffffffff) 
        goto 0x405ee4;
    if (*reinterpret_cast<uint32_t*>(&rax5) == 37) 
        goto 0x404ad0;
    back_ch(*reinterpret_cast<uint32_t*>(&rax5), r12_6, r15_1, 1, __return_address());
    goto 0x404970;
}

void fun_4059e3() {
}

void fun_405ce6() {
    goto 0x4059ee;
}

void fun_407ae0() {
}

void fun_407b00() {
    goto 0x407ae5;
}

void fun_407ba0() {
}

void fun_407bd0() {
    goto 0x407bb0;
}

void* mbsrtowcs(void** rcx, void*** rdx, void* r8, void** r9) {
    void** rdi5;
    void*** r14_6;
    void** rsi7;
    void* rbp8;
    void* rbx9;
    int32_t eax10;
    void** rdx11;
    void** rsi12;
    void** rbp13;
    int32_t eax14;
    void* rax15;
    int32_t eax16;
    void* rax17;

    rdi5 = r9;
    r14_6 = rdx;
    if (!r9) {
        rdi5 = reinterpret_cast<void**>(0x41cbbd4);
    }
    rsi7 = rcx;
    rbp8 = r8;
    ___lc_codepage_func();
    *reinterpret_cast<int32_t*>(&rbx9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx9) + 4) = 0;
    eax10 = ___mb_cur_max_func();
    if (!r14_6 || (rdx11 = *r14_6, rdx11 == 0)) {
        addr_407e99_4:
        return rbx9;
    } else {
        if (!rsi7) {
            rsi12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 64 - 8 + 8 - 8 + 8 + 62);
            *reinterpret_cast<int32_t*>(&rbp13) = eax10;
            *reinterpret_cast<int32_t*>(&rbp13 + 4) = 0;
            while (eax14 = text(rsi12, rdx11, rbp13, rdi5), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax14 < 0) | reinterpret_cast<uint1_t>(eax14 == 0))) {
                rax15 = reinterpret_cast<void*>(static_cast<int64_t>(eax14));
                rbx9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx9) + reinterpret_cast<uint64_t>(rax15));
                rdx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r14_6) + reinterpret_cast<uint64_t>(rax15));
                *r14_6 = rdx11;
            }
            goto addr_407e99_4;
        } else {
            if (rbp8) {
                do {
                    eax16 = text(rsi7, rdx11, reinterpret_cast<uint64_t>(rbp8) - reinterpret_cast<uint64_t>(rbx9), rdi5);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0))) 
                        break;
                    rax17 = reinterpret_cast<void*>(static_cast<int64_t>(eax16));
                    rsi7 = rsi7 + 2;
                    rbx9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx9) + reinterpret_cast<uint64_t>(rax17));
                    rdx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r14_6) + reinterpret_cast<uint64_t>(rax17));
                    *r14_6 = rdx11;
                } while (reinterpret_cast<uint64_t>(rbp8) > reinterpret_cast<uint64_t>(rbx9));
                goto addr_407e99_4;
            } else {
                goto addr_407e99_4;
            }
        }
    }
    if (reinterpret_cast<uint64_t>(rbp8) > reinterpret_cast<uint64_t>(rbx9) && !eax16) {
        *r14_6 = reinterpret_cast<void**>(0);
        goto addr_407e99_4;
    }
}

void fun_409cb0() {
    void** rcx1;
    void*** r15_2;
    int32_t r10d3;
    uint16_t* rdi4;
    uint16_t** r15_5;
    int32_t v6;
    void** eax7;
    void** r13_8;
    void** r9_9;
    void** r13_10;

    rcx1 = *r15_2;
    if (reinterpret_cast<uint32_t>(r10d3 - 2) <= 1) {
        rdi4 = *r15_5;
        if (!rdi4) {
            rdi4 = reinterpret_cast<uint16_t*>("(");
        }
        if (v6 < 0) {
            eax7 = wcslen(rdi4);
        } else {
            eax7 = text(rdi4, static_cast<int64_t>(v6));
        }
        __pformat_wputchars(rdi4, eax7, r13_8, r9_9, __return_address());
        goto 0x409cd0;
    } else {
        __pformat_puts(rcx1, r13_10);
    }
}

void fun_409ce0() {
    int32_t r10d1;
    void** r13_2;
    void** r9_3;
    void** r13_4;

    if (reinterpret_cast<uint32_t>(r10d1 - 2) <= 1) {
        __pformat_wputchars(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, 1, r13_2, r9_3, __return_address());
        goto 0x409cd0;
    } else {
        __pformat_putchars(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, 1, r13_4);
        goto 0x409cd0;
    }
}

void fun_409d20() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x40a250;
}

void fun_409d40() {
    uint32_t eax1;
    uint32_t v2;
    void** r13_3;
    void** r13_4;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) {
        __asm__("fld qword [rsp+0x28]");
        __asm__("fstp tword [rsp+0x40]");
        __pformat_float(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, r13_3);
        goto 0x409cd0;
    } else {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        __pformat_float(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, r13_4);
        goto 0x409cd0;
    }
}

void fun_409d73() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x40a250;
    goto 0x409d32;
}

struct s63 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s64 {
    signed char[2] pad2;
    signed char f2;
};

struct s65 {
    signed char[2] pad2;
    signed char f2;
};

void fun_409d90() {
    uint32_t eax1;
    struct s63* rdi2;
    struct s64* rdi3;
    struct s65* rdi4;

    eax1 = rdi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 54) {
        if (rdi3->f2 != 52) 
            goto 0x40a339;
        goto 0x409d32;
    } else {
        if (*reinterpret_cast<signed char*>(&eax1) == 51) {
            if (rdi4->f2 == 50) {
                goto 0x409d32;
            } else {
                goto 0x409c90;
            }
        } else {
            goto 0x409d32;
        }
    }
}

void fun_409db2() {
    goto 0x409d32;
}

void fun_409e14() {
    int32_t r10d1;
    void** rcx2;
    void*** r15_3;
    uint32_t* r15_4;
    int32_t r10d5;
    int32_t r10d6;
    int32_t r10d7;
    int32_t r9d8;
    void** r13_9;
    void** r8_10;
    uint32_t r9d11;
    void** r13_12;

    if (r10d1 == 3) {
        rcx2 = *r15_3;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx2) = *r15_4;
        *reinterpret_cast<int32_t*>(&rcx2 + 4) = 0;
        if (r10d5 == 2) {
            addr_409e3e_4:
        } else {
            if (r10d6 == 1) {
                *reinterpret_cast<uint32_t*>(&rcx2) = *reinterpret_cast<uint16_t*>(&rcx2);
                *reinterpret_cast<int32_t*>(&rcx2 + 4) = 0;
            } else {
                if (r10d7 == 5) {
                    *reinterpret_cast<uint32_t*>(&rcx2) = *reinterpret_cast<unsigned char*>(&rcx2);
                    *reinterpret_cast<int32_t*>(&rcx2 + 4) = 0;
                    goto addr_409e3e_4;
                }
            }
        }
    }
    if (r9d8 == 0x75) {
        __pformat_int_isra_0(rcx2, r13_9, r8_10);
        goto 0x409cd0;
    } else {
        __pformat_xint_isra_1(r9d11, rcx2, r13_12);
        goto 0x409cd0;
    }
}

void fun_409e60() {
    int32_t r10d1;
    int32_t r10d2;
    int32_t r10d3;
    int32_t r10d4;

    if (r10d1 != 3) {
        if (r10d2 == 2) {
            addr_409e93_4:
        } else {
            if (r10d3 != 1) {
                if (r10d4 == 5) {
                    goto addr_409e93_4;
                }
            }
        }
    }
}

void fun_409ef0() {
    uint32_t eax1;
    uint32_t v2;
    void** r13_3;
    void** r13_4;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) {
        __asm__("fld qword [rsp+0x28]");
        __asm__("fstp tword [rsp+0x40]");
        __pformat_efloat(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, r13_3);
        goto 0x409cd0;
    } else {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        __pformat_efloat(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, r13_4);
        goto 0x409cd0;
    }
}

struct s66 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_409f23() {
    uint32_t eax1;
    struct s66* rdi2;

    eax1 = rdi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) != 0x6c) 
        goto 0x409d32;
    goto 0x409d32;
}

struct s67 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_409f50() {
    uint32_t eax1;
    struct s67* rdi2;

    eax1 = rdi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) != 0x68) 
        goto 0x409d32;
    goto 0x409d32;
}

void fun_409f80() {
    goto 0x409d32;
}

void fun_409fd0() {
    signed char rax1;
    int32_t v2;
    int32_t r10d3;
    signed char** r15_4;
    int32_t r10d5;
    int32_t r10d6;
    int32_t r10d7;

    rax1 = reinterpret_cast<signed char>(static_cast<int64_t>(v2));
    if (r10d3 == 5) {
        **r15_4 = rax1;
        goto 0x409cd0;
    } else {
        if (r10d5 == 1) {
            **r15_4 = rax1;
            goto 0x409cd0;
        } else {
            if (r10d6 == 2 || r10d7 != 3) {
                **r15_4 = rax1;
                goto 0x409cd0;
            } else {
                **r15_4 = rax1;
                goto 0x409cd0;
            }
        }
    }
}

void fun_40a010() {
    int64_t rcx1;
    int32_t v2;
    void** rax3;
    void** r13_4;

    *reinterpret_cast<int32_t*>(&rcx1) = v2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    rax3 = strerror(rcx1);
    __pformat_puts(rax3, r13_4);
    goto 0x409cd0;
}

void fun_40a070() {
    void** r13_1;

    __pformat_putc(37, r13_1);
    goto 0x409cd0;
}

void fun_40a0f0() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x409d5b; else 
        goto "???";
}

void fun_40a123() {
    int32_t eax1;
    int32_t v2;
    void** r13_3;
    void** r13_4;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        __pformat_gfloat(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, r13_3);
        goto 0x409cd0;
    } else {
        __asm__("fld qword [rsp+0x28]");
        __asm__("fstp tword [rsp+0x40]");
        __pformat_gfloat(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, r13_4);
        goto 0x409cd0;
    }
}

void fun_40a160() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x40a250;
    goto 0x409d32;
}

void fun_40a180() {
    int32_t r14d1;
    uint32_t r14d2;

    if (r14d1) {
        if (r14d2 > 3) 
            goto 0x40a339; else 
            goto "???";
    } else {
        goto 0x409d32;
    }
}

void fun_40a1a0() {
    int32_t eax1;
    int32_t v2;
    void** r13_3;
    void** r13_4;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        __pformat_xldouble(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, r13_3);
        goto 0x409cd0;
    } else {
        __asm__("fld qword [rsp+0x28]");
        __asm__("fstp tword [rsp+0x40]");
        __pformat_xldouble(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, r13_4);
        goto 0x409cd0;
    }
}

void fun_40a1d3() {
    uint32_t r14d1;

    if (r14d1 <= 1) {
        goto 0x409d32;
    } else {
        goto 0x409d32;
    }
}

void fun_40a1f0() {
    int64_t r11_1;
    uint32_t r14d2;
    int1_t sf3;
    int32_t* r15_4;
    int32_t* r11_5;
    int32_t r14d6;

    if (!r11_1) 
        goto 0x40a1dd;
    if (r14d2 & 0xfffffffd) {
        goto 0x409d32;
    } else {
        sf3 = *r15_4 < 0;
        *r11_5 = *r15_4;
        if (sf3) {
            if (!r14d6) {
                goto 0x409d32;
            }
        }
        goto 0x409d32;
    }
}

void fun_40a223() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x40a250;
    goto 0x409d32;
}

void fun_40a240() {
    int32_t r14d1;
    struct s16* rax2;
    void** rdx3;
    void** v4;
    int64_t rax5;

    if (!r14d1) {
        rax2 = localeconv();
        rdx3 = rax2->f8;
        rax5 = mbrtowc(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 94, rdx3, 16, v4, __return_address());
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax5) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax5) == 0))) {
        }
        goto 0x40a250;
    }
}

struct s68 {
    int32_t f0;
    void** f4;
};

struct s69 {
    signed char[4] pad4;
    void** f4;
};

struct s70 {
    signed char[12] pad12;
    void* f12;
};

struct s71 {
    signed char[20] pad20;
    void** f20;
};

struct s72 {
    signed char[4] pad4;
    void** f4;
};

/* .refptr.__tens_D2A */
void** refptr___tens_D2A = reinterpret_cast<void**>(0xe0);

struct s73 {
    signed char[4] pad4;
    int32_t f4;
};

struct s74 {
    signed char[4] pad4;
    int32_t f4;
};

struct s75 {
    signed char[2] pad2;
    void** f2;
};

struct s76 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s77 {
    signed char[12] pad12;
    void* f12;
};

void fun_40a754(int32_t* rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    int64_t v6;
    struct s68* rsi7;
    void** ecx8;
    int32_t eax9;
    void** rax10;
    void* rsp11;
    void*** rdx12;
    void*** rbx13;
    void** r14_14;
    void** r8_15;
    void*** r10_16;
    void*** rbx17;
    void** rax18;
    int64_t rax19;
    void** rdx20;
    int32_t* rax21;
    int64_t r13_22;
    void** eax23;
    void* rsp24;
    void** r9_25;
    void* v26;
    void* v27;
    int32_t* v28;
    void** v29;
    int64_t r9_30;
    int32_t* rdi31;
    void** rdi32;
    struct s69* rdi33;
    void*** rsi34;
    void** r8_35;
    void* eax36;
    void* edx37;
    void** edx38;
    uint1_t zf39;
    void** v40;
    int32_t v41;
    int1_t below_or_equal42;
    void** v43;
    void* ecx44;
    void** rdx45;
    void** v46;
    void** ecx47;
    void** v48;
    void** v49;
    uint32_t v50;
    uint32_t v51;
    int32_t v52;
    int32_t v53;
    void* v54;
    int64_t rax55;
    void* v56;
    void** ecx57;
    void** v58;
    void** v59;
    uint32_t r8d60;
    void** rax61;
    void** r9_62;
    void** r15_63;
    void** eax64;
    struct s70* rbp65;
    void** v66;
    void** eax67;
    void** v68;
    struct s71* rbp69;
    void** rsi70;
    void** rdi71;
    void** v72;
    struct s72* rbp73;
    int64_t rsi74;
    void** eax75;
    int64_t rsi76;
    void** eax77;
    void** v78;
    int64_t rbx79;
    uint1_t zf80;
    void** eax81;
    void** eax82;
    void** rax83;
    void** eax84;
    void** rax85;
    void** rax86;
    void** rax87;
    void** rcx88;
    void** v89;
    uint32_t r13d90;
    void** rax91;
    int32_t v92;
    struct s73* rbp93;
    void** rax94;
    int32_t v95;
    struct s74* rbp96;
    void** eax97;
    uint32_t ebp98;
    uint32_t ebp99;
    void* ebp100;
    void** rdx101;
    void* eax102;
    void** rax103;
    void** rax104;
    uint32_t eax105;
    void** rax106;
    uint32_t edi107;
    void** rax108;
    void** v109;
    void** ebx110;
    void** r13_111;
    void** rdx112;
    void** rax113;
    void** rax114;
    uint32_t eax115;
    void** ebx116;
    int64_t rax117;
    uint32_t ebp118;
    void** rax119;
    void** r13_120;
    void** rax121;
    uint32_t eax122;
    void** rax123;
    void** eax124;
    void*** v125;
    int64_t v126;
    void*** v127;
    uint32_t* r12_128;
    void** r8_129;
    void** v130;
    void** ecx131;
    void** rax132;
    void** rax133;
    uint32_t* v134;
    uint32_t* r12_135;
    void** r12_136;
    void** v137;
    void** v138;
    unsigned char* v139;
    unsigned char* rbx140;
    int64_t rax141;
    uint32_t eax142;
    uint32_t ebx143;
    void** rax144;
    uint32_t eax145;
    unsigned char edx146;
    void** rax147;
    void** rax148;
    void** rax149;
    void** rax150;
    void** v151;
    void** v152;
    void** eax153;
    void** rax154;
    uint32_t eax155;
    void** rbx156;
    void** eax157;
    void** rbx158;
    uint32_t* v159;
    void** r13_160;
    void** rdi161;
    void** r12_162;
    uint32_t eax163;
    void** rax164;
    void** rax165;
    int64_t rax166;
    uint32_t ebp167;
    void** rax168;
    void** ecx169;
    int32_t eax170;
    void** eax171;
    uint1_t zf172;
    int64_t rax173;
    int32_t eax174;
    void** eax175;
    uint1_t zf176;
    uint1_t below_or_equal177;
    int64_t r11_178;
    int64_t r10_179;
    struct s76* rdi180;
    int1_t pf181;
    uint1_t zf182;
    uint1_t below_or_equal183;
    void*** rsi184;
    void** ecx185;
    void** rdi186;
    void*** rsi187;
    void** v188;
    uint1_t zf189;
    uint1_t below_or_equal190;
    void*** rsi191;
    void** eax192;
    void** v193;
    void** tmp32_194;
    uint1_t below_or_equal195;
    void*** rsi196;
    void** eax197;
    void** rax198;
    void** eax199;
    struct s77* rbp200;
    void** eax201;
    int32_t v202;
    void** v203;

    rsp5 = __zero_stack_offset();
    v6 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rsi7) = *rcx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    ecx8 = reinterpret_cast<void**>(0);
    if (*reinterpret_cast<int32_t*>(&rsi7) > 32) {
        eax9 = 32;
        do {
            eax9 = eax9 + eax9;
            ++ecx8;
        } while (*reinterpret_cast<int32_t*>(&rsi7) > eax9);
    }
    rax10 = __Balloc_D2A(ecx8, rdx, r8, r9, v6);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    rdx12 = rbx13;
    r14_14 = rax10;
    r8_15 = r14_14 + 24;
    r10_16 = rbx17 + (static_cast<int32_t>(reinterpret_cast<int64_t>(rsi7) - 1) >> 5) * 4;
    rax18 = r8_15;
    do {
        rdx12 = rdx12 + 4;
        rax18 = rax18 + 4;
        *reinterpret_cast<void***>(rax18 + 0xfffffffffffffffc) = *rdx12;
    } while (reinterpret_cast<uint64_t>(r10_16) >= reinterpret_cast<uint64_t>(rdx12));
    rax19 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rax18) - reinterpret_cast<unsigned char>(r8_15)) >> 2;
    rdx20 = *reinterpret_cast<void***>(&rax19);
    *reinterpret_cast<int32_t*>(&rdx20 + 4) = 0;
    rax21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_15 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(&rax19)) * 4) - 4);
    do {
        *reinterpret_cast<void***>(&r13_22) = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rdx20 + 0xffffffffffffffff)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = 0;
        if (*rax21) 
            break;
        --rax21;
        rdx20 = *reinterpret_cast<void***>(&r13_22);
        *reinterpret_cast<int32_t*>(&rdx20 + 4) = 0;
    } while (*reinterpret_cast<void***>(&r13_22));
    goto addr_40aca4_9;
    *reinterpret_cast<void***>(r14_14 + 20) = rdx20;
    rdx20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx20) << 5);
    *reinterpret_cast<int32_t*>(&rdx20 + 4) = 0;
    __asm__("bsr eax, [r14+r13*4+0x18]");
    *reinterpret_cast<void***>(&r13_22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx20) - (*reinterpret_cast<uint32_t*>(&rax21) ^ 31));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = 0;
    addr_40a7e7_11:
    eax23 = __trailz_D2A(r14_14);
    rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
    *reinterpret_cast<void**>(&r9_25) = v26;
    *reinterpret_cast<int32_t*>(&r9_25 + 4) = 0;
    if (eax23) {
        rdx20 = eax23;
        *reinterpret_cast<int32_t*>(&rdx20 + 4) = 0;
        text(r14_14, rdx20);
        rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8);
        *reinterpret_cast<void***>(&r13_22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r13_22)) - reinterpret_cast<unsigned char>(eax23));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = 0;
        *reinterpret_cast<void**>(&r9_25) = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v27) + reinterpret_cast<unsigned char>(eax23));
        *reinterpret_cast<int32_t*>(&r9_25 + 4) = 0;
    }
    if (!*reinterpret_cast<void***>(r14_14 + 20)) {
        __Bfree_D2A(r14_14, rdx20, r8_15, r9_25, v6, r14_14);
        *v28 = 1;
        __nrv_alloc_D2A("0", v29, 1, r9_25, v6);
    }
    __b2d_D2A(r14_14, reinterpret_cast<int64_t>(rsp24) + 0x8c, r8_15);
    *reinterpret_cast<void**>(&r9_30) = *reinterpret_cast<void**>(&r9_25);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_30) + 4) = 0;
    __asm__("movd r15, xmm0");
    *rdi31 = rsi7->f0;
    rdi32 = reinterpret_cast<void**>(&rdi33->f4);
    rsi34 = &rsi7->f4;
    r8_35 = reinterpret_cast<void**>(static_cast<uint32_t>(r9_30 + r13_22));
    *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
    eax36 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(r8_35 + 0xffffffffffffffff)));
    __asm__("movd xmm1, r15");
    __asm__("subsd xmm1, [rip+0x8227]");
    edx37 = reinterpret_cast<void*>(1 - reinterpret_cast<unsigned char>(r8_35));
    __asm__("mulsd xmm1, [rip+0x8224]");
    if (reinterpret_cast<int32_t>(eax36) < reinterpret_cast<int32_t>(0)) 
        goto addr_40a931_19;
    edx37 = eax36;
    addr_40a931_19:
    edx38 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx37) - 0x435);
    zf39 = reinterpret_cast<uint1_t>(edx38 == 0);
    __asm__("addsd xmm0, xmm1");
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, eax");
    __asm__("mulsd xmm1, [rip+0x8213]");
    __asm__("addsd xmm1, xmm0");
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx38) < reinterpret_cast<signed char>(0)) | zf39)) {
        __asm__("pxor xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("mulsd xmm0, [rip+0x8205]");
        __asm__("addsd xmm1, xmm0");
    }
    __asm__("cvttsd2si edx, xmm1");
    __asm__("pxor xmm6, xmm6");
    __asm__("ucomisd xmm6, xmm1");
    v40 = edx38;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf39)) && (__intrinsic() || !zf39)) {
        --v40;
    }
    v41 = 1;
    below_or_equal42 = reinterpret_cast<unsigned char>(v40) <= reinterpret_cast<unsigned char>(22);
    if (!below_or_equal42) {
        addr_40a9db_25:
        v43 = reinterpret_cast<void**>(0);
        ecx44 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r13_22)) - reinterpret_cast<uint32_t>(eax36));
        rdx45 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx44) - 1);
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        v46 = rdx45;
        if (reinterpret_cast<signed char>(rdx45) < reinterpret_cast<signed char>(0)) {
            v46 = reinterpret_cast<void**>(0);
            rdx45 = reinterpret_cast<void**>(1 - reinterpret_cast<uint32_t>(ecx44));
            *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
            v43 = rdx45;
        }
    } else {
        __asm__("movd xmm5, r11");
        *reinterpret_cast<void***>(rdi32) = *rsi34;
        rdi32 = rdi32 + 4;
        rsi34 = rsi34 + 4;
        __asm__("ucomisd xmm0, xmm5");
        if (below_or_equal42) 
            goto addr_40ae20_31; else 
            goto addr_40a9ca_32;
    }
    ecx47 = v40;
    if (reinterpret_cast<signed char>(ecx47) < reinterpret_cast<signed char>(0)) {
        v48 = reinterpret_cast<void**>(0);
        v43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v43) - reinterpret_cast<unsigned char>(v40));
        ecx47 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v40));
        v49 = ecx47;
    } else {
        v46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v46) + reinterpret_cast<unsigned char>(ecx47));
        v48 = ecx47;
        v49 = reinterpret_cast<void**>(0);
    }
    if (v50 > 9) {
        v51 = 0;
        goto addr_40ace0_38;
    }
    if (v52 > 5) {
        v51 = v53 - 4;
        r8_35 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
    } else {
        *reinterpret_cast<unsigned char*>(&r8_35) = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax36) + 0x3fe <= 0x7f7);
    }
    if (v51 != 3) 
        goto addr_40aa5a_43;
    v54 = reinterpret_cast<void*>(0);
    addr_40aa84_45:
    *reinterpret_cast<void***>(&rax55) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v40) + reinterpret_cast<uint32_t>(v56));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax55) + 4) = 0;
    ecx57 = reinterpret_cast<void**>(static_cast<uint32_t>(rax55 + 1));
    v58 = *reinterpret_cast<void***>(&rax55);
    v59 = ecx57;
    *reinterpret_cast<unsigned char*>(&rax55) = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx57) <= reinterpret_cast<unsigned char>(14));
    r8d60 = reinterpret_cast<unsigned char>(r8_35) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rax55));
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx57) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx57 == 0)) {
        ecx57 = reinterpret_cast<void**>(1);
    }
    addr_40aab2_48:
    rax61 = text(ecx57);
    *reinterpret_cast<void**>(&r9_62) = *reinterpret_cast<void**>(&r9_30);
    *reinterpret_cast<int32_t*>(&r9_62 + 4) = 0;
    r15_63 = rax61;
    r8_35 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r8d60)));
    *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
    eax64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbp65->f12) - 1);
    v66 = eax64;
    if (!eax64) {
        addr_40ab06_49:
        if (!*reinterpret_cast<unsigned char*>(&r8_35) || (eax67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v40) | reinterpret_cast<unsigned char>(v66)), v68 = eax67, !!eax67)) {
            addr_40ad50_50:
            if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r9_62)) < reinterpret_cast<int32_t>(0) || reinterpret_cast<signed char>(rbp69->f20) < reinterpret_cast<signed char>(v40)) {
                if (!v54) {
                    *reinterpret_cast<int32_t*>(&rsi70) = 0;
                    *reinterpret_cast<int32_t*>(&rsi70 + 4) = 0;
                    rdi71 = v49;
                    v72 = v43;
                } else {
                    rdx45 = rbp73->f4;
                    *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
                    *reinterpret_cast<uint32_t*>(&rsi74) = *reinterpret_cast<int32_t*>(&rsi34) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r13_22));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi74) + 4) = 0;
                    eax75 = reinterpret_cast<void**>(static_cast<uint32_t>(rsi74 + 1));
                    if (reinterpret_cast<signed char>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r9_62)) - *reinterpret_cast<uint32_t*>(&rsi74)) < reinterpret_cast<signed char>(rdx45) && (*reinterpret_cast<uint32_t*>(&rsi76) = v51, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi76) + 4) = 0, !!(static_cast<uint32_t>(rsi76 - 3) & 0xfffffffd))) {
                        eax75 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r9_62)) - reinterpret_cast<unsigned char>(rdx45) + 1);
                        rdx45 = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v59) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v59 == 0)))));
                        if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi76) > reinterpret_cast<int32_t>(1))) & reinterpret_cast<unsigned char>(rdx45))) 
                            goto addr_40aed6_55;
                        if (reinterpret_cast<signed char>(eax75) > reinterpret_cast<signed char>(v59)) 
                            goto addr_40b2de_57; else 
                            goto addr_40aed6_55;
                    }
                    if (reinterpret_cast<int32_t>(v51) <= reinterpret_cast<int32_t>(1)) {
                        addr_40aed6_55:
                        rdi71 = v49;
                        v46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v46) + reinterpret_cast<unsigned char>(eax75));
                        v72 = v43;
                        v43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax75) + reinterpret_cast<unsigned char>(v43));
                        goto addr_40aeec_59;
                    } else {
                        addr_40b2de_57:
                        eax77 = v59 - 1;
                        rdi71 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v49) - reinterpret_cast<unsigned char>(eax77));
                        if (reinterpret_cast<signed char>(v49) < reinterpret_cast<signed char>(eax77)) {
                            rdx45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax77) - reinterpret_cast<unsigned char>(v49));
                            *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
                            rdi71 = reinterpret_cast<void**>(0);
                            v49 = eax77;
                            v48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v48) + reinterpret_cast<unsigned char>(rdx45));
                            goto addr_40b301_61;
                        }
                    }
                }
            } else {
                r8_35 = v78;
                *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
                rdx45 = refptr___tens_D2A;
                rbx79 = reinterpret_cast<int32_t>(v40);
                *reinterpret_cast<void***>(rdi32) = *rsi34;
                if (reinterpret_cast<signed char>(r8_35) >= reinterpret_cast<signed char>(0)) 
                    goto addr_40b480_66;
                if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v59) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v59 == 0))) 
                    goto addr_40b480_66; else 
                    goto addr_40ad94_68;
            }
        } else {
            *reinterpret_cast<void***>(rdi32) = *rsi34;
            rdi32 = rdi32 + 4;
            rsi34 = rsi34 + 4;
            zf80 = reinterpret_cast<uint1_t>(v41 == 0);
            if (zf80) 
                goto addr_40ab4e_73; else 
                goto addr_40ab3c_74;
        }
    } else {
        addr_40aae5_75:
        eax81 = reinterpret_cast<void**>(2);
        if (reinterpret_cast<signed char>(v66) >= reinterpret_cast<signed char>(0)) {
            eax81 = v66;
            goto addr_40aaf3_77;
        }
    }
    addr_40aef9_78:
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v72) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v72 == 0)) && (rdx45 = v46, *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdx45) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdx45 == 0)))) {
        eax82 = rdx45;
        if (reinterpret_cast<signed char>(v72) <= reinterpret_cast<signed char>(rdx45)) {
            eax82 = v72;
        }
        v43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v43) - reinterpret_cast<unsigned char>(eax82));
        rdx45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx45) - reinterpret_cast<unsigned char>(eax82));
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        v72 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v72) - reinterpret_cast<unsigned char>(eax82));
        v46 = rdx45;
    }
    if (!v49) 
        goto addr_40af60_83;
    if (!v54) {
        rdx45 = v49;
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        rax83 = __pow5mult_D2A(r14_14, rdx45);
        r14_14 = rax83;
        goto addr_40af60_83;
    }
    eax84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v49) - reinterpret_cast<unsigned char>(rdi71));
    r8_35 = eax84;
    *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
    if (rdi71) {
        rax85 = __pow5mult_D2A(rsi70, rdi71);
        rdx45 = r14_14;
        rsi70 = rax85;
        rax86 = __mult_D2A(rax85, rdx45, r8_35, r9_62, v6);
        rdi71 = rax86;
        __Bfree_D2A(r14_14, rdx45, r8_35, r9_62, v6, r14_14);
        r8_35 = eax84;
        *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
        r14_14 = rdi71;
        if (!r8_35) {
            addr_40af60_83:
            rax87 = __i2b_D2A(1, rdx45, r8_35, r9_62, v6, 1);
            rcx88 = rax87;
            v89 = rax87;
            *reinterpret_cast<unsigned char*>(&rax87) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r13_22) == 1);
            *reinterpret_cast<unsigned char*>(&r13_22) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v51) <= reinterpret_cast<int32_t>(1));
            r13d90 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r13_22)) & *reinterpret_cast<uint32_t*>(&rax87);
            if (v48) {
                rax91 = __pow5mult_D2A(rcx88, v48);
                v89 = rax91;
                if (!*reinterpret_cast<signed char*>(&r13d90) || v92 <= rbp93->f4 + 1) {
                    v48 = reinterpret_cast<void**>(0);
                    goto addr_40b10e_90;
                }
            }
        } else {
            goto addr_40af48_92;
        }
    } else {
        addr_40af48_92:
        rdx45 = r8_35;
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        rax94 = __pow5mult_D2A(r14_14, rdx45);
        r14_14 = rax94;
        goto addr_40af60_83;
    }
    if (*reinterpret_cast<signed char*>(&r13d90)) {
        if (v95 > rbp96->f4 + 1) {
            eax97 = v48;
            v48 = reinterpret_cast<void**>(1);
            ++v43;
            ++v46;
            if (eax97) {
                addr_40b10e_90:
                rdi71 = v89;
                __asm__("bsr ebp, [rdi+rax*4+0x18]");
                ebp98 = ebp99 ^ 31;
            } else {
                goto addr_40af9d_97;
            }
        } else {
            goto addr_40af9d_97;
        }
    } else {
        addr_40af9d_97:
        ebp98 = 31;
    }
    ebp100 = reinterpret_cast<void*>(ebp98 - reinterpret_cast<unsigned char>(v46) - 4 & 31);
    *reinterpret_cast<void**>(&rdx101) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v43) + reinterpret_cast<uint32_t>(ebp100));
    *reinterpret_cast<int32_t*>(&rdx101 + 4) = 0;
    eax102 = ebp100;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx101)) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rdx101) == 0))) {
        rax103 = __lshift_D2A(r14_14, rdx101, r8_35, r9_62, v6);
        r14_14 = rax103;
        eax102 = ebp100;
    }
    rdx45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v46) + reinterpret_cast<uint32_t>(eax102));
    *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdx45) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdx45 == 0))) {
        rax104 = __lshift_D2A(v89, rdx45, r8_35, r9_62, v6);
        v89 = rax104;
    }
    *reinterpret_cast<unsigned char*>(&rdi71) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v51) > reinterpret_cast<int32_t>(2));
    if (v41 && (rdx45 = v89, eax105 = __cmp_D2A(r14_14, rdx45), reinterpret_cast<int32_t>(eax105) < reinterpret_cast<int32_t>(0))) {
        --v40;
        r8_35 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
        rdx45 = reinterpret_cast<void**>(10);
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        rax106 = __multadd_D2A(r14_14, 10, 0);
        r14_14 = rax106;
        *reinterpret_cast<unsigned char*>(&rax106) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v58) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v58 == 0));
        edi107 = reinterpret_cast<unsigned char>(rdi71) & *reinterpret_cast<uint32_t*>(&rax106);
        if (v54) {
            r8_35 = reinterpret_cast<void**>(0);
            *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
            rdx45 = reinterpret_cast<void**>(10);
            *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
            rax108 = __multadd_D2A(rsi70, 10, 0);
            rsi70 = rax108;
            v59 = v58;
            if (!*reinterpret_cast<signed char*>(&edi107)) {
                goto addr_40b13e_107;
            }
        } else {
            v59 = v58;
            if (!*reinterpret_cast<signed char*>(&edi107)) {
                goto addr_40b390_110;
            }
        }
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v59) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v59 == 0)) || !*reinterpret_cast<unsigned char*>(&rdi71)) {
        *reinterpret_cast<void**>(&r9_62) = v54;
        *reinterpret_cast<int32_t*>(&r9_62 + 4) = 0;
        if (!*reinterpret_cast<void**>(&r9_62)) {
            addr_40b390_110:
            v109 = reinterpret_cast<void**>(1);
            rdi32 = r15_63;
            ebx110 = v59;
            r13_111 = v89;
        } else {
            addr_40b13e_107:
            *reinterpret_cast<void**>(&rdx112) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v72) + reinterpret_cast<uint32_t>(ebp100));
            *reinterpret_cast<int32_t*>(&rdx112 + 4) = 0;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx112)) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rdx112) == 0))) {
                rax113 = __lshift_D2A(rsi70, rdx112, r8_35, r9_62, v6);
                rsi70 = rax113;
                goto addr_40b153_114;
            }
        }
    } else {
        if (v59 || (r8_35 = reinterpret_cast<void**>(0), *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0, rax114 = __multadd_D2A(v89, 5, 0), rdx45 = rax114, v89 = rax114, eax115 = __cmp_D2A(r14_14, rdx45), reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax115) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax115 == 0))) {
            addr_40b027_116:
            rdi32 = r15_63;
            v68 = reinterpret_cast<void**>(16);
            ebx116 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v78));
            goto addr_40add1_117;
        } else {
            ebx116 = v40 + 2;
            goto addr_40adc1_119;
        }
    }
    while (rax117 = __quorem_D2A(r14_14, r13_111), ++rdi32, ebp118 = static_cast<uint32_t>(rax117 + 48), *reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&ebp118), reinterpret_cast<signed char>(v109) < reinterpret_cast<signed char>(ebx110)) {
        r8_35 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
        rax119 = __multadd_D2A(r14_14, 10, 0);
        ++v109;
        r14_14 = rax119;
    }
    *reinterpret_cast<int32_t*>(&r13_120) = 0;
    *reinterpret_cast<int32_t*>(&r13_120 + 4) = 0;
    addr_40b3ed_123:
    if (!v66) {
        rax121 = __lshift_D2A(r14_14, 1, r8_35, r9_62, v6, r14_14, 1, r8_35, r9_62, v6);
        r14_14 = rax121;
        eax122 = __cmp_D2A(rax121, v89);
        rdx45 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff))));
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        if (reinterpret_cast<int32_t>(eax122) > reinterpret_cast<int32_t>(0) || !eax122 && ebp118 & 1) {
            addr_40b424_125:
            while (rax123 = rdi32 + 0xffffffffffffffff, rdx45 == 57) {
                if (rax123 == r15_63) 
                    goto addr_40b6ad_127;
                rdx45 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax123 + 0xffffffffffffffff))));
                *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
                rdi32 = rax123;
            }
        } else {
            eax124 = *reinterpret_cast<void***>(r14_14 + 20);
            goto addr_40b7dd_130;
        }
    } else {
        eax124 = *reinterpret_cast<void***>(r14_14 + 20);
        rdx45 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff))));
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        if (v66 == 2) {
            addr_40b7dd_130:
            v68 = reinterpret_cast<void**>(16);
            if (reinterpret_cast<signed char>(eax124) <= reinterpret_cast<signed char>(1)) {
                v68 = reinterpret_cast<void**>(~(reinterpret_cast<unsigned char>(eax124) - (reinterpret_cast<unsigned char>(eax124) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax124) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax124) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_14 + 24)) < reinterpret_cast<unsigned char>(1)))))) & 16);
            }
        } else {
            if (reinterpret_cast<signed char>(eax124) > reinterpret_cast<signed char>(1)) 
                goto addr_40b424_125;
            if (*reinterpret_cast<void***>(r14_14 + 24)) 
                goto addr_40b424_125;
            v68 = reinterpret_cast<void**>(0);
        }
        while (rdx45 == 48) {
            rdx45 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(rdi32 + 0xfffffffffffffffe)));
            *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
            --rdi32;
        }
        goto addr_40b43a_141;
    }
    ++rdx45;
    *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
    v68 = reinterpret_cast<void**>(32);
    *reinterpret_cast<void***>(rax123) = rdx45;
    addr_40b43a_141:
    __Bfree_D2A(v89, rdx45, r8_35, r9_62, v6, v89, rdx45, r8_35, r9_62, v6);
    ebx116 = v40 + 1;
    if (!rsi70) {
        addr_40ade8_143:
        __Bfree_D2A(r14_14, rdx45, r8_35, r9_62, v6, r14_14, rdx45, r8_35, r9_62, v6);
        *reinterpret_cast<void***>(rdi32) = reinterpret_cast<void**>(0);
        *v125 = ebx116;
        if (v126) {
            *v127 = rdi32;
        }
    } else {
        if (r13_120 && r13_120 != rsi70) {
            __Bfree_D2A(r13_120, rdx45, r8_35, r9_62, v6, r13_120, rdx45, r8_35, r9_62, v6);
            goto addr_40ade0_147;
        }
    }
    *r12_128 = *r12_128 | reinterpret_cast<unsigned char>(v68);
    goto 0x40a846;
    addr_40ade0_147:
    __Bfree_D2A(rsi70, rdx45, r8_35, r9_62, v6, rsi70, rdx45, r8_35, r9_62, v6);
    goto addr_40ade8_143;
    addr_40b6ad_127:
    ++v40;
    *reinterpret_cast<void***>(r15_63) = reinterpret_cast<void**>(49);
    v68 = reinterpret_cast<void**>(32);
    goto addr_40b43a_141;
    addr_40b153_114:
    r8_129 = v48;
    *reinterpret_cast<int32_t*>(&r8_129 + 4) = 0;
    v130 = rsi70;
    if (r8_129) {
        ecx131 = *reinterpret_cast<void***>(rsi70 + 8);
        rax132 = __Balloc_D2A(ecx131, rdx112, r8_129, r9_62, v6);
        r8_129 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rsi70 + 20)) * 4 + 8);
        memcpy(rax132 + 16, rsi70 + 16, r8_129);
        rax133 = __lshift_D2A(rax132, 1, r8_129, r9_62, v6, rax132, 1);
        v130 = rax133;
    }
    v134 = r12_135;
    r12_136 = v130;
    v137 = reinterpret_cast<void**>(1);
    v138 = r15_63;
    v139 = rbx140;
    while (1) {
        rax141 = __quorem_D2A(r14_14, v89, r14_14, v89);
        ebp118 = static_cast<uint32_t>(rax141 + 48);
        eax142 = __cmp_D2A(r14_14, rsi70, r14_14, rsi70);
        rdx45 = r12_136;
        ebx143 = 1;
        rax144 = __diff_D2A(v89, rdx45, r8_129, r9_62, v6);
        r8_35 = rax144;
        if (!*reinterpret_cast<void***>(rax144 + 16)) {
            rdx45 = rax144;
            eax145 = __cmp_D2A(r14_14, rdx45);
            r8_35 = rax144;
            ebx143 = eax145;
        }
        __Bfree_D2A(r8_35, rdx45, r8_35, r9_62, v6, r8_35, rdx45, r8_35, r9_62, v6);
        if (ebx143 | v51) 
            goto addr_40b1c0_154;
        edx146 = *v139;
        rdx45 = reinterpret_cast<void**>(edx146 & 1 | reinterpret_cast<unsigned char>(v66));
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        if (!rdx45) 
            break;
        addr_40b1c0_154:
        if (reinterpret_cast<int32_t>(eax142) < reinterpret_cast<int32_t>(0)) 
            goto addr_40b805_156;
        if (eax142 | v51) 
            goto addr_40b1e4_158;
        if (!(*v139 & 1)) 
            goto addr_40b805_156;
        addr_40b1e4_158:
        rdi32 = r15_63 + 1;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx143) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx143 == 0)) 
            goto addr_40b1f7_160;
        if (!reinterpret_cast<int1_t>(v66 == 2)) 
            goto addr_40ba07_162;
        addr_40b1f7_160:
        *reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&ebp118);
        if (v137 == v59) 
            goto addr_40ba47_163;
        rax147 = __multadd_D2A(r14_14, 10, 0);
        r8_129 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&r8_129 + 4) = 0;
        r14_14 = rax147;
        if (rsi70 == r12_136) {
            rax148 = __multadd_D2A(rsi70, 10, 0);
            rsi70 = rax148;
            r12_136 = rax148;
        } else {
            rax149 = __multadd_D2A(rsi70, 10, 0);
            r8_129 = reinterpret_cast<void**>(0);
            *reinterpret_cast<int32_t*>(&r8_129 + 4) = 0;
            rsi70 = rax149;
            rax150 = __multadd_D2A(r12_136, 10, 0);
            r12_136 = rax150;
        }
        ++v137;
        r15_63 = rdi32;
    }
    v151 = r12_136;
    rdi32 = r15_63 + 1;
    r12_128 = v134;
    v152 = r15_63;
    r15_63 = v138;
    if (ebp118 == 57) {
        addr_40baeb_169:
        r13_120 = rsi70;
        rdx45 = reinterpret_cast<void**>(57);
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        rsi70 = v151;
        *reinterpret_cast<void***>(v152) = reinterpret_cast<void**>(57);
        goto addr_40b424_125;
    } else {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax142) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax142 == 0)) {
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_14 + 20)) <= reinterpret_cast<signed char>(1)) {
                eax153 = reinterpret_cast<void**>(16);
                if (!*reinterpret_cast<void***>(r14_14 + 24)) {
                    eax153 = rdx45;
                }
                v68 = eax153;
            } else {
                v68 = reinterpret_cast<void**>(16);
            }
        } else {
            v68 = reinterpret_cast<void**>(32);
            ebp118 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax141) + 49);
        }
    }
    addr_40b8e3_177:
    r13_120 = rsi70;
    *reinterpret_cast<void***>(v152) = *reinterpret_cast<void***>(&ebp118);
    rsi70 = v151;
    goto addr_40b43a_141;
    addr_40b805_156:
    rdx45 = v66;
    *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
    v151 = r12_136;
    v152 = r15_63;
    r12_128 = v134;
    r15_63 = v138;
    if (!rdx45) {
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx143) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx143 == 0))) {
            addr_40bb20_179:
            rax154 = __lshift_D2A(r14_14, 1, r8_35, r9_62, v6);
            rdx45 = v89;
            r14_14 = rax154;
            eax155 = __cmp_D2A(rax154, rdx45);
            if (reinterpret_cast<int32_t>(eax155) > reinterpret_cast<int32_t>(0) || !eax155 && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&ebp118)) & 1) {
                if (ebp118 == 57) {
                    rdi32 = v152 + 1;
                    goto addr_40baeb_169;
                } else {
                    v66 = reinterpret_cast<void**>(32);
                    ebp118 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax141) + 49);
                    goto addr_40ba96_183;
                }
            } else {
                v66 = reinterpret_cast<void**>(32);
                goto addr_40ba96_183;
            }
        } else {
            addr_40ba96_183:
            v68 = reinterpret_cast<void**>(16);
            rbx156 = v152 + 1;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_14 + 20)) <= reinterpret_cast<signed char>(1)) {
                eax157 = v66;
                if (*reinterpret_cast<void***>(r14_14 + 24)) {
                    eax157 = reinterpret_cast<void**>(16);
                }
                v68 = eax157;
            }
        }
    } else {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_14 + 20)) > reinterpret_cast<signed char>(1) || *reinterpret_cast<void***>(r14_14 + 24)) {
            if (v66 == 2) {
                v68 = reinterpret_cast<void**>(16);
                rbx156 = v152 + 1;
            } else {
                rbx158 = v89;
                v159 = r12_128;
                r13_160 = v151;
                rdi161 = v152;
                while (r12_162 = rdi161 + 1, rdx45 = r13_160, eax163 = __cmp_D2A(rbx158, rdx45), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax163) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax163 == 0))) {
                    *reinterpret_cast<void***>(r12_162 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&ebp118);
                    rax164 = __multadd_D2A(r13_160, 10, 0);
                    if (rsi70 == r13_160) {
                        rsi70 = rax164;
                    }
                    r8_35 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
                    rax165 = __multadd_D2A(r14_14, 10, 0);
                    r13_160 = rax164;
                    r14_14 = rax165;
                    rdi161 = r12_162;
                    rax166 = __quorem_D2A(rax165, rbx158);
                    ebp118 = static_cast<uint32_t>(rax166 + 48);
                }
                v152 = rdi161;
                rbx156 = r12_162;
                rdi32 = r12_162;
                v151 = r13_160;
                r12_128 = v159;
                if (ebp118 == 57) 
                    goto addr_40baeb_169;
                ++ebp118;
                v68 = reinterpret_cast<void**>(32);
            }
        } else {
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx143) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx143 == 0))) 
                goto addr_40bb20_179;
            v68 = reinterpret_cast<void**>(0);
            rbx156 = v152 + 1;
        }
    }
    rdi32 = rbx156;
    goto addr_40b8e3_177;
    addr_40ba07_162:
    v151 = r12_136;
    r12_128 = v134;
    v152 = r15_63;
    r15_63 = v138;
    if (ebp118 == 57) 
        goto addr_40baeb_169;
    ebp167 = ebp118 + 1;
    r13_120 = rsi70;
    v68 = reinterpret_cast<void**>(32);
    rsi70 = v151;
    *reinterpret_cast<void***>(v152) = *reinterpret_cast<void***>(&ebp167);
    goto addr_40b43a_141;
    addr_40ba47_163:
    r13_120 = rsi70;
    r15_63 = v138;
    r12_128 = v134;
    rsi70 = r12_136;
    goto addr_40b3ed_123;
    addr_40add1_117:
    __Bfree_D2A(v89, rdx45, r8_35, r9_62, v6, v89);
    if (!rsi70) 
        goto addr_40ade8_143; else 
        goto addr_40ade0_147;
    addr_40adc1_119:
    rdi32 = r15_63 + 1;
    *reinterpret_cast<void***>(r15_63) = reinterpret_cast<void**>(49);
    v68 = reinterpret_cast<void**>(32);
    goto addr_40add1_117;
    addr_40aeec_59:
    rax168 = __i2b_D2A(1, rdx45, r8_35, r9_62, v6);
    rsi70 = rax168;
    goto addr_40aef9_78;
    addr_40b301_61:
    if (reinterpret_cast<signed char>(v59) < reinterpret_cast<signed char>(0)) {
        v72 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v43) - reinterpret_cast<unsigned char>(v59));
        goto addr_40aeec_59;
    } else {
        v46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v46) + reinterpret_cast<unsigned char>(v59));
        v72 = v43;
        v43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v59) + reinterpret_cast<unsigned char>(v43));
        goto addr_40aeec_59;
    }
    addr_40b480_66:
    __asm__("movd xmm1, r10");
    __asm__("movd xmm0, r10");
    __asm__("divsd xmm1, xmm2");
    rdi32 = r15_63 + 1;
    ecx169 = v40 + 1;
    ebx116 = ecx169;
    __asm__("cvttsd2si edx, xmm1");
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, edx");
    eax170 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rdx45 + 48));
    *reinterpret_cast<void***>(r15_63) = *reinterpret_cast<void***>(&eax170);
    __asm__("mulsd xmm1, xmm2");
    __asm__("subsd xmm0, xmm1");
    __asm__("ucomisd xmm0, xmm6");
    if (__intrinsic() || ecx169) {
        eax171 = reinterpret_cast<void**>(1);
        r8_35 = v59;
        *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
        if (1 == r8_35) {
            addr_40b660_205:
            zf172 = reinterpret_cast<uint1_t>(v66 == 0);
            if (!zf172) {
                v68 = reinterpret_cast<void**>(16);
                if (!reinterpret_cast<int1_t>(v66 == 1)) 
                    goto addr_40ade8_143;
                *reinterpret_cast<void***>(&rax173) = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff))));
                goto addr_40b693_208;
            }
        } else {
            *reinterpret_cast<void***>(rdi32) = rsi34[4];
            rdi32 = rdi32 + 4;
            do {
                __asm__("mulsd xmm0, xmm3");
                ++rdi32;
                __asm__("movapd xmm1, xmm0");
                __asm__("divsd xmm1, xmm2");
                __asm__("cvttsd2si edx, xmm1");
                __asm__("pxor xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, edx");
                eax174 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rdx45 + 48));
                *reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax174);
                __asm__("mulsd xmm1, xmm2");
                __asm__("subsd xmm0, xmm1");
                __asm__("ucomisd xmm0, xmm6");
                if (__intrinsic()) 
                    continue;
                if (!rdi32) 
                    goto addr_40b53c_215;
                ++eax171;
            } while (eax171 != r8_35);
            goto addr_40b660_205;
        }
    } else {
        addr_40b53c_215:
        v68 = reinterpret_cast<void**>(0);
        goto addr_40ade8_143;
    }
    __asm__("addsd xmm0, xmm0");
    *reinterpret_cast<void***>(&rax173) = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff))));
    __asm__("ucomisd xmm0, xmm2");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf172)) || !__intrinsic() && (zf172 && (rdx45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx45) & 1), !!rdx45))) {
        addr_40b693_208:
        while (rdx45 = rdi32 + 0xffffffffffffffff, *reinterpret_cast<void***>(&rax173) == 57) {
            if (rdx45 == r15_63) 
                goto addr_40b9f4_219;
            *reinterpret_cast<void***>(&rax173) = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx45 + 0xffffffffffffffff))));
            rdi32 = rdx45;
        }
    } else {
        v68 = reinterpret_cast<void**>(16);
        goto addr_40b793_222;
    }
    addr_40b69b_223:
    eax175 = *reinterpret_cast<void***>(&rax173) + 1;
    v68 = reinterpret_cast<void**>(32);
    *reinterpret_cast<void***>(rdx45) = eax175;
    goto addr_40ade8_143;
    addr_40b9f4_219:
    *reinterpret_cast<void***>(r15_63) = reinterpret_cast<void**>(48);
    ++ebx116;
    *reinterpret_cast<void***>(&rax173) = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff))));
    rdx45 = r15_63;
    goto addr_40b69b_223;
    addr_40b793_222:
    while (*reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff) == 48) {
        --rdi32;
    }
    ebx116 = ecx169;
    goto addr_40ade8_143;
    addr_40ad94_68:
    if (v59 || 1) {
        addr_40b57f_226:
        v89 = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&rsi70) = 0;
        *reinterpret_cast<int32_t*>(&rsi70 + 4) = 0;
        goto addr_40b027_116;
    } else {
        v89 = reinterpret_cast<void**>(0);
        ebx116 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s75**>(&rbx79))->f2);
        *reinterpret_cast<int32_t*>(&rsi70) = 0;
        *reinterpret_cast<int32_t*>(&rsi70 + 4) = 0;
        goto addr_40adc1_119;
    }
    addr_40ab4e_73:
    __asm__("movapd xmm0, xmm2");
    __asm__("addsd xmm0, xmm2");
    __asm__("addsd xmm0, [rip+0x8032]");
    __asm__("movd rdx, xmm0");
    __asm__("movd rax, xmm0");
    rdx45 = v59;
    *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
    zf176 = reinterpret_cast<uint1_t>(rdx45 == 0);
    below_or_equal177 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf176));
    if (zf176) {
        addr_40b5d1_228:
        __asm__("movapd xmm1, xmm2");
        __asm__("subsd xmm1, [rip+0x75bb]");
        __asm__("movd xmm0, rax");
        __asm__("ucomisd xmm1, xmm0");
        if (!below_or_equal177) {
            v89 = reinterpret_cast<void**>(0);
            ebx116 = reinterpret_cast<void**>(2);
            *reinterpret_cast<int32_t*>(&rsi70) = 0;
            *reinterpret_cast<int32_t*>(&rsi70 + 4) = 0;
            goto addr_40adc1_119;
        } else {
            __asm__("xorpd xmm0, [rip+0x75ac]");
            __asm__("ucomisd xmm0, xmm1");
            if (!below_or_equal177) 
                goto addr_40b57f_226; else 
                goto addr_40b5fa_231;
        }
    } else {
        *reinterpret_cast<void***>(&r11_178) = v59;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_178) + 4) = 0;
        __asm__("movapd xmm0, xmm2");
        *reinterpret_cast<int32_t*>(&r10_179) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_179) + 4) = 0;
    }
    addr_40ab93_233:
    *reinterpret_cast<void**>(&rdi180) = v54;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi180) + 4) = 0;
    __asm__("movd xmm3, rax");
    rdx45 = refptr___tens_D2A;
    rax173 = r11_178 - 1;
    pf181 = __intrinsic();
    zf182 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&rdi180) == 0);
    below_or_equal183 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf182));
    rdi180->f0 = *rsi34;
    rsi184 = rsi34 + 4;
    if (zf182) {
        __asm__("mulsd xmm5, xmm3");
        ecx185 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r15_63) = *rsi184;
        rdi186 = r15_63 + 4;
        rsi187 = rsi184 + 4;
        v188 = reinterpret_cast<void**>(1);
        __asm__("movapd xmm1, xmm0");
        while (1) {
            __asm__("cvttsd2si eax, xmm1");
            if (*reinterpret_cast<void***>(&rax173)) {
                __asm__("pxor xmm4, xmm4");
                __asm__("cvtsi2sd xmm4, eax");
                ecx185 = r8_35;
                __asm__("subsd xmm1, xmm4");
            }
            ++rdi186;
            *reinterpret_cast<void***>(&rax173) = *reinterpret_cast<void***>(&rax173) + 48;
            *reinterpret_cast<void***>(rdi186 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&rax173);
            rdx45 = v188;
            *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
            if (rdx45 == *reinterpret_cast<void***>(&r11_178)) 
                break;
            __asm__("mulsd xmm1, xmm3");
            ecx185 = r8_35;
            v188 = rdx45 + 1;
        }
        zf189 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&ecx185) == 0);
        below_or_equal190 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf189));
        if (zf189) 
            goto addr_40b746_246;
    } else {
        rdi180->f4 = *rsi184;
        rsi191 = rsi184 + 4;
        rdi32 = r15_63 + 1;
        __asm__("cvttsd2si edx, xmm0");
        __asm__("divsd xmm1, xmm5");
        *reinterpret_cast<void***>(&rax173) = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rdx45 + 48)));
        *reinterpret_cast<void***>(r15_63) = *reinterpret_cast<void***>(&rax173);
        __asm__("subsd xmm1, xmm3");
        __asm__("pxor xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, edx");
        __asm__("subsd xmm0, xmm3");
        __asm__("ucomisd xmm1, xmm0");
        if (!below_or_equal183) 
            goto addr_40ac87_251; else 
            goto addr_40abf5_252;
    }
    __asm__("movapd xmm0, xmm1");
    addr_40b746_246:
    *reinterpret_cast<void***>(rdi186) = *rsi187;
    rdi32 = rdi186 + 4;
    rsi34 = rsi187 + 4;
    __asm__("movapd xmm3, xmm5");
    __asm__("addsd xmm3, xmm1");
    __asm__("ucomisd xmm0, xmm3");
    if (!below_or_equal190) {
        addr_40b914_257:
        ebx116 = reinterpret_cast<void**>(static_cast<uint32_t>(r10_179 + 1));
        goto addr_40b693_208;
    } else {
        __asm__("subsd xmm1, xmm5");
        __asm__("ucomisd xmm1, xmm0");
        if (below_or_equal190) {
            addr_40b5fa_231:
            __asm__("movd r10, xmm2");
            v66 = reinterpret_cast<void**>(0);
            goto addr_40ad50_50;
        } else {
            __asm__("ucomisd xmm0, xmm6");
            if (__intrinsic() || !zf189) {
                v68 = reinterpret_cast<void**>(16);
                ecx169 = reinterpret_cast<void**>(static_cast<uint32_t>(r10_179 + 1));
                goto addr_40b793_222;
            } else {
                v68 = reinterpret_cast<void**>(0);
                ecx169 = reinterpret_cast<void**>(static_cast<uint32_t>(r10_179 + 1));
                goto addr_40b793_222;
            }
        }
    }
    addr_40ac87_251:
    __asm__("ucomisd xmm0, xmm6");
    ebx116 = reinterpret_cast<void**>(static_cast<uint32_t>(r10_179 + 1));
    if (pf181 || !zf182) {
        v68 = reinterpret_cast<void**>(16);
        goto addr_40ade8_143;
    }
    addr_40abf5_252:
    *reinterpret_cast<void***>(rdi32) = *rsi191;
    rdi32 = rdi32 + 4;
    rsi34 = rsi191 + 4;
    __asm__("movapd xmm3, xmm5");
    __asm__("subsd xmm3, xmm0");
    __asm__("ucomisd xmm1, xmm3");
    if (!below_or_equal183) 
        goto addr_40b914_257;
    eax192 = reinterpret_cast<void**>(1);
    v193 = reinterpret_cast<void**>(1);
    if (reinterpret_cast<signed char>(1) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r11_178))) 
        goto addr_40b5fa_231;
    *reinterpret_cast<void***>(rdi32) = *rsi34;
    rdi32 = rdi32 + 4;
    rsi34 = rsi34 + 4;
    do {
        __asm__("mulsd xmm0, xmm3");
        __asm__("pxor xmm4, xmm4");
        ++rdi32;
        __asm__("mulsd xmm1, xmm3");
        __asm__("cvttsd2si eax, xmm0");
        __asm__("cvtsi2sd xmm4, eax");
        tmp32_194 = eax192 + 48;
        *reinterpret_cast<void***>(&rax173) = tmp32_194;
        pf181 = __intrinsic();
        zf182 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax173) == 0);
        below_or_equal195 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_194) < reinterpret_cast<unsigned char>(eax192)) | zf182);
        *reinterpret_cast<void***>(rdi32 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&rax173);
        __asm__("subsd xmm0, xmm4");
        __asm__("ucomisd xmm1, xmm0");
        if (!below_or_equal195) 
            goto addr_40ac87_251;
        __asm__("movapd xmm4, xmm5");
        __asm__("subsd xmm4, xmm0");
        __asm__("ucomisd xmm1, xmm4");
        if (!below_or_equal195) 
            goto addr_40b914_257;
        eax192 = v193 + 1;
        v193 = eax192;
    } while (reinterpret_cast<signed char>(eax192) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r11_178)));
    goto addr_40b5fa_231;
    addr_40ab3c_74:
    *reinterpret_cast<void***>(rdi32) = *rsi34;
    rdi32 = rdi32 + 4;
    rsi34 = rsi34 + 4;
    __asm__("ucomisd xmm0, xmm2");
    if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf80))) 
        goto addr_40ab4e_73;
    if (!v59) {
        __asm__("movapd xmm0, xmm2");
        __asm__("addsd xmm0, xmm2");
        __asm__("addsd xmm0, [rip+0x75dc]");
        __asm__("movd rdx, xmm0");
        __asm__("movd rax, xmm0");
        rdx45 = reinterpret_cast<void**>(0xfcc0000000000000);
        below_or_equal177 = 0;
        goto addr_40b5d1_228;
    } else {
        *reinterpret_cast<void***>(&r11_178) = v58;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_178) + 4) = 0;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r11_178)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r11_178) == 0)) 
            goto addr_40b5fa_231;
        *reinterpret_cast<void***>(rdi32) = *rsi34;
        rsi196 = rsi34 + 4;
        *reinterpret_cast<int32_t*>(&r10_179) = -1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_179) + 4) = 0;
        *reinterpret_cast<void***>(rdi32 + 4) = *rsi196;
        rsi34 = rsi196 + 4;
        __asm__("mulsd xmm3, xmm2");
        __asm__("mulsd xmm1, xmm3");
        __asm__("movapd xmm0, xmm3");
        __asm__("addsd xmm1, [rip+0x71be]");
        __asm__("movd rdx, xmm1");
        __asm__("movd rax, xmm1");
        goto addr_40ab93_233;
    }
    addr_40aaf3_77:
    eax197 = reinterpret_cast<void**>(3 - reinterpret_cast<unsigned char>(eax81));
    *reinterpret_cast<uint32_t*>(&rdi32) = *reinterpret_cast<uint32_t*>(&rdi32) & 8;
    *reinterpret_cast<int32_t*>(&rdi32 + 4) = 0;
    if (!*reinterpret_cast<uint32_t*>(&rdi32)) {
        eax197 = eax81;
    }
    v66 = eax197;
    goto addr_40ab06_49;
    addr_40aa5a_43:
    if (reinterpret_cast<int32_t>(v51) <= reinterpret_cast<int32_t>(3)) {
        v54 = reinterpret_cast<void*>(0);
        if (v51 != 2) {
            addr_40ace0_38:
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, esi");
            __asm__("mulsd xmm0, [rip+0x7e7b]");
            __asm__("cvttsd2si ecx, xmm0");
            rax198 = text(ecx47 + 3);
            *reinterpret_cast<void**>(&r9_62) = *reinterpret_cast<void**>(&r9_30);
            *reinterpret_cast<int32_t*>(&r9_62 + 4) = 0;
            r15_63 = rax198;
            eax199 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbp200->f12) - 1);
            v66 = eax199;
            if (eax199) {
                r8_35 = reinterpret_cast<void**>(0);
                *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
                v54 = reinterpret_cast<void*>(1);
                v58 = reinterpret_cast<void**>(0xffffffff);
                v59 = reinterpret_cast<void**>(0xffffffff);
                v78 = reinterpret_cast<void**>(0);
                goto addr_40aae5_75;
            } else {
                v54 = reinterpret_cast<void*>(1);
                v78 = reinterpret_cast<void**>(0);
                v58 = reinterpret_cast<void**>(0xffffffff);
                v59 = reinterpret_cast<void**>(0xffffffff);
                goto addr_40ad50_50;
            }
        } else {
            addr_40b096_292:
            eax201 = reinterpret_cast<void**>(1);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(v202 < 0) | reinterpret_cast<uint1_t>(v202 == 0))) {
                eax201 = v203;
            }
        }
        v78 = eax201;
        ecx57 = v78;
        *reinterpret_cast<unsigned char*>(&eax201) = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax201) <= reinterpret_cast<unsigned char>(14));
        r8d60 = reinterpret_cast<unsigned char>(r8_35) & reinterpret_cast<unsigned char>(eax201);
        v58 = ecx57;
        v59 = ecx57;
        goto addr_40aab2_48;
    } else {
        v54 = reinterpret_cast<void*>(1);
        if (v51 == 4) 
            goto addr_40b096_292;
        if (v51 != 5) 
            goto addr_40ace0_38; else 
            goto addr_40aa84_45;
    }
    addr_40ae20_31:
    v41 = 0;
    goto addr_40a9db_25;
    addr_40a9ca_32:
    v41 = 0;
    --v40;
    goto addr_40a9db_25;
    addr_40aca4_9:
    *reinterpret_cast<void***>(r14_14 + 20) = reinterpret_cast<void**>(0);
    goto addr_40a7e7_11;
}

void fun_40a865() {
    int32_t* v1;
    void** v2;
    void** r9_3;

    *v1 = 0xffff8000;
    __nrv_alloc_D2A("NaN", v2, 3, r9_3, __return_address());
    goto 0x40a846;
}

void fun_40becb() {
    int64_t rbx1;

    rbx1 = DeleteCriticalSection;
    rbx1(0x41cc560);
    goto rbx1;
}

void fun_40cec8() {
    int64_t v1;
    int64_t* v2;
    int64_t rbp3;

    if (!v1) 
        goto 0x40cefd;
    *v2 = rbp3;
}

struct s78 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_40cf30() {
    uint32_t r8d1;
    struct s78* rdx2;

    r8d1 = rdx2->f1;
    if (!*reinterpret_cast<signed char*>(&r8d1)) 
        goto 0x40ced0;
    if (*reinterpret_cast<signed char*>(&r8d1) == 48) 
        goto 0x40d01d; else 
        goto "???";
}

void fun_40cfd1() {
    goto 0x40cf38;
}

uint64_t wcsrtombs(signed char* rcx, uint16_t** rdx, uint64_t r8) {
    uint64_t rsi4;
    uint16_t** r13_5;
    signed char* r14_6;
    uint64_t r12_7;
    int32_t eax8;
    int32_t ebp9;
    int32_t eax10;
    void* rsp11;
    uint16_t* rbx12;
    int32_t edi13;
    signed char* r12_14;
    int64_t rsi15;
    uint32_t edx16;
    int32_t eax17;
    uint32_t edx18;
    int32_t eax19;
    void* rax20;

    *reinterpret_cast<int32_t*>(&rsi4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = 0;
    r13_5 = rdx;
    r14_6 = rcx;
    r12_7 = r8;
    eax8 = ___lc_codepage_func();
    ebp9 = eax8;
    eax10 = ___mb_cur_max_func();
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 48 - 8 + 8 - 8 + 8);
    rbx12 = *r13_5;
    edi13 = eax10;
    if (!rbx12) {
        addr_40ebe4_2:
        return rsi4;
    } else {
        if (!r14_6) {
            r12_14 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp11) + 43);
            *reinterpret_cast<int32_t*>(&rsi15) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
            while (edx16 = *rbx12, eax17 = text(r12_14, *reinterpret_cast<uint16_t*>(&edx16), ebp9, edi13), rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax17 < 0) | reinterpret_cast<uint1_t>(eax17 == 0))) {
                rsi15 = rsi15 + eax17;
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp11) + (eax17 - 1) + 43)) 
                    goto addr_40ec91_7;
                ++rbx12;
            }
        } else {
            if (r12_7) {
                do {
                    edx18 = *rbx12;
                    eax19 = text(r14_6, *reinterpret_cast<uint16_t*>(&edx18), ebp9, edi13);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax19 < 0) | reinterpret_cast<uint1_t>(eax19 == 0))) 
                        goto addr_40ec2d_11;
                    rax20 = reinterpret_cast<void*>(static_cast<int64_t>(eax19));
                    r14_6 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r14_6) + reinterpret_cast<uint64_t>(rax20));
                    rsi4 = rsi4 + reinterpret_cast<uint64_t>(rax20);
                    if (!*(r14_6 - 1)) 
                        goto addr_40ec80_13;
                    ++rbx12;
                } while (r12_7 > rsi4);
                goto addr_40ebe0_15;
            } else {
                goto addr_40ebe0_15;
            }
        }
    }
    addr_40ec2d_11:
    rsi4 = 0xffffffffffffffff;
    goto addr_40ebe4_2;
    addr_40ec91_7:
    rsi4 = reinterpret_cast<uint64_t>(rsi15 - 1);
    goto addr_40ebe4_2;
    addr_40ec80_13:
    *r13_5 = reinterpret_cast<uint16_t*>(0);
    --rsi4;
    goto addr_40ebe4_2;
    addr_40ebe0_15:
    *r13_5 = rbx12;
    goto addr_40ebe4_2;
}

int64_t __lconv_init = 0x3dcd83c;

void __lconv_init() {
    goto __lconv_init;
}

int64_t __C_specific_handler = 0x3dcd7ce;

void __C_specific_handler() {
    goto __C_specific_handler;
}

/* .text */
void text() {
    goto __lconv_init;
}

/* .refptr._CRT_MT */
int32_t* refptr__CRT_MT = reinterpret_cast<int32_t*>(0x411180);

int64_t __dyn_tls_init(int64_t rcx, void** rdx, void** r8, void** r9) {
    int32_t* rax5;

    rax5 = refptr__CRT_MT;
    if (*rax5 != 2) {
        *rax5 = 2;
    }
    if (*reinterpret_cast<int32_t*>(&rdx) == 2) 
        goto 0x4030e0;
    if (*reinterpret_cast<int32_t*>(&rdx) != 1) 
        goto "???";
    __mingw_TLScallback(rcx, rdx, r8, r9);
    return 1;
}

int64_t __tlregdtor() {
    return 0;
}

/* .text */
int64_t text() {
    int64_t rax1;

    rax1 = bss;
    return rax1;
}

void fun_403250() {
    goto 0x4031d8;
}

void _gnu_exception_handler(uint32_t** rcx) {
    if ((**rcx & 0x20ffffff) == 0x20474343) 
        goto 0x403ad0; else 
        goto "???";
}

int64_t ___w64_mingwthr_remove_key_dtor(int32_t ecx) {
    int32_t eax2;

    eax2 = __mingwthr_cs_init;
    if (eax2) 
        goto 0x403cf0;
    return 0;
}

int64_t _ValidateImageBase(int16_t* rcx) {
    if (*rcx == 0x5a4d) 
        goto 0x403e80;
    return 0;
}

struct s79 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

struct s80 {
    signed char[60] pad60;
    int32_t f60;
};

struct s81 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s79* _FindPESection(struct s80* rcx, uint64_t rdx) {
    struct s81* rcx3;
    int64_t rax4;
    struct s79* rax5;
    uint32_t ecx6;
    int64_t rcx7;
    struct s79* r9_8;
    uint64_t r8_9;
    uint64_t rcx10;
    uint64_t rcx11;

    rcx3 = reinterpret_cast<struct s81*>(reinterpret_cast<int64_t>(rcx) + rcx->f60);
    *reinterpret_cast<uint32_t*>(&rax4) = rcx3->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rax5 = reinterpret_cast<struct s79*>(reinterpret_cast<int64_t>(rcx3) + rax4 + 24);
    ecx6 = rcx3->f6;
    if (!ecx6) {
        addr_403ed1_2:
        *reinterpret_cast<int32_t*>(&rax5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx7) = ecx6 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        r9_8 = reinterpret_cast<struct s79*>(reinterpret_cast<int64_t>(rax5) + (rcx7 + rcx7 * 4) * 8 + 40);
        do {
            *reinterpret_cast<int32_t*>(&r8_9) = rax5->f12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
            rcx10 = r8_9;
            if (r8_9 > rdx) 
                continue;
            *reinterpret_cast<int32_t*>(&rcx11) = *reinterpret_cast<int32_t*>(&rcx10) + rax5->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
            if (rcx11 > rdx) 
                break;
            rax5 = reinterpret_cast<struct s79*>(reinterpret_cast<int64_t>(rax5) + 40);
        } while (rax5 != r9_8);
        goto addr_403ed1_2;
    }
    return rax5;
}

struct s82 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
    signed char[122] pad144;
    int32_t f144;
};

struct s83 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

void __mingw_enum_import_library_names(int32_t ecx) {
    struct s2* r11_2;
    int32_t eax3;
    struct s82* rax4;
    uint64_t rdx5;
    void* rcx6;
    struct s83* rcx7;
    uint32_t eax8;
    int64_t rax9;
    struct s83* rax10;
    uint64_t r10_11;
    uint64_t r8_12;
    uint64_t r8_13;

    r11_2 = refptr___image_base__;
    if (r11_2->f0 != 0x5a4d) 
        goto 0x4041ee;
    eax3 = text(r11_2);
    if (!eax3) 
        goto 0x4041ee;
    rax4 = reinterpret_cast<struct s82*>(r11_2->f60 + reinterpret_cast<uint64_t>(r11_2));
    *reinterpret_cast<int32_t*>(&rdx5) = rax4->f144;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    if (!*reinterpret_cast<int32_t*>(&rdx5)) 
        goto 0x4041ee;
    *reinterpret_cast<uint32_t*>(&rcx6) = rax4->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    rcx7 = reinterpret_cast<struct s83*>(reinterpret_cast<uint64_t>(rax4) + reinterpret_cast<uint64_t>(rcx6) + 24);
    eax8 = rax4->f6;
    if (!eax8) 
        goto 0x4041ee;
    *reinterpret_cast<uint32_t*>(&rax9) = eax8 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    rax10 = reinterpret_cast<struct s83*>(reinterpret_cast<uint64_t>(rcx7) + (rax9 + rax9 * 4) * 8 + 40);
    while ((*reinterpret_cast<int32_t*>(&r10_11) = rcx7->f12, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_11) + 4) = 0, r8_12 = r10_11, rdx5 < r10_11) || (*reinterpret_cast<int32_t*>(&r8_13) = *reinterpret_cast<int32_t*>(&r8_12) + rcx7->f8, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0, rdx5 >= r8_13)) {
        rcx7 = reinterpret_cast<struct s83*>(reinterpret_cast<uint64_t>(rcx7) + 40);
        if (rcx7 == rax10) 
            goto "???";
    }
    if (rdx5 + reinterpret_cast<uint64_t>(r11_2)) 
        goto 0x404208;
    goto 0x4041ee;
}

void fun_405cfe() {
    goto 0x4059ee;
}

void fun_407b10() {
    goto 0x407ae5;
}

void fun_407c04() {
    goto 0x407bb0;
}

void fun_409dd0() {
}

void fun_409f95() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) 
        goto 0x40a137; else 
        goto "???";
}

void fun_40a030() {
    int32_t r14d1;
    int32_t v2;
    int32_t r12d3;
    void** rdx4;
    void*** r15_5;
    void** r13_6;

    if (!r14d1 && v2 == r12d3) {
    }
    rdx4 = *r15_5;
    __pformat_xint_isra_1(0x78, rdx4, r13_6);
    goto 0x409cd0;
}

void fun_40a082() {
}

void fun_40a892() {
    int32_t* v1;
    void** v2;
    void** r9_3;

    *v1 = 0xffff8000;
    __nrv_alloc_D2A("Infinity", v2, 8, r9_3, __return_address());
    goto 0x40a846;
}

void dtoa_lock_cleanup() {
    int32_t tmp32_1;

    tmp32_1 = dtoa_CS_init;
    dtoa_CS_init = 3;
    if (tmp32_1 == 2) 
        goto 0x40bed0;
    return;
}

void __strcp_D2A(signed char* rcx, unsigned char* rdx) {
    signed char* rax3;
    void* rcx4;
    uint32_t edx5;
    uint32_t edx6;

    rax3 = rcx;
    rcx4 = reinterpret_cast<void*>(rdx + 1);
    edx5 = *rdx;
    *rax3 = *reinterpret_cast<signed char*>(&edx5);
    if (*reinterpret_cast<signed char*>(&edx5)) {
        do {
            rcx4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx4) + 1);
            edx6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rcx4) - 1);
            ++rax3;
            *rax3 = *reinterpret_cast<signed char*>(&edx6);
        } while (*reinterpret_cast<signed char*>(&edx6));
    }
    return;
}

struct s84 {
    signed char[20] pad20;
    int32_t f20;
    int32_t f24;
};

void __decrement_D2A(struct s84* rcx) {
    int32_t* rax2;
    int32_t* rcx3;

    rax2 = &rcx->f24;
    rcx3 = rax2 + rcx->f20;
    do {
        if (*rax2) 
            break;
        ++rax2;
        *(rax2 - 1) = -1;
    } while (reinterpret_cast<uint64_t>(rcx3) > reinterpret_cast<uint64_t>(rax2));
    goto addr_40cd7b_4;
    *rax2 = *rax2 - 1;
    addr_40cd7b_4:
    return;
}

struct s85 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_40cfe0() {
    uint32_t r8d1;
    struct s85* rdx2;

    r8d1 = rdx2->f1;
    if (*reinterpret_cast<unsigned char*>(&r8d1) <= 45) 
        goto 0x40cebb;
}

void _matherr(uint32_t* rcx) {
    int64_t rax2;

    __asm__("movaps [rsp+0x40], xmm6");
    __asm__("movaps [rsp+0x50], xmm7");
    __asm__("movaps [rsp+0x60], xmm8");
    if (*rcx > 6) {
        goto 0x4031d8;
    } else {
        *reinterpret_cast<uint32_t*>(&rax2) = *rcx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        goto *reinterpret_cast<int32_t*>(0x412524 + rax2 * 4) + 0x412524;
    }
}

int64_t mainCRTStartup(int64_t rcx, void** rdx, void** r8) {
    int32_t* rax4;
    int64_t rax5;

    rax4 = refptr_mingw_app_type;
    *rax4 = 0;
    text(rcx, rdx, r8);
    rax5 = __tmainCRTStartup(rcx, rdx, r8);
    return rax5;
}

/* .text */
int64_t text(int64_t rcx) {
    return rcx;
}

struct s86 {
    signed char[32] pad32;
    void** f32;
    signed char[4103] pad4136;
    signed char f4136;
};

void __mingw_vsscanf(void** rcx, void** rdx, void** r8) {
    int64_t rax4;
    void* rsp5;
    int64_t* rsp6;
    void** rax7;
    struct s86* rsp8;
    int64_t* rsp9;

    rax4 = ___chkstk_ms(rcx);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 + 8 - rax4);
    rsp6 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp5) - 8);
    *rsp6 = 0x407a6e;
    rax7 = memset(reinterpret_cast<int64_t>(rsp5) + 32);
    rsp8 = reinterpret_cast<struct s86*>(rsp6 + 1);
    rsp8->f32 = rcx;
    rsp8->f4136 = 1;
    rsp9 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp8) - 8);
    *rsp9 = 0x407a89;
    __mingw_sformat(rax7, rdx, r8);
    goto (rsp9 + 1 + 0x208 + 1 + 1)[1];
}

void Sleep() {
    goto Sleep;
}

int64_t RtlCaptureContext = 0x3dcd6f0;

int64_t g41cb3d8;

int64_t RtlLookupFunctionEntry = 0x3dcd704;

void* g41cb378;

int64_t g41cb360;

int64_t g41cb7d0;

int64_t GS_ExceptionRecord;

int64_t UnhandledExceptionFilter = 0x3dcd77a;

int64_t GetCurrentProcess = 0x3dcd5c0;

int64_t TerminateProcess = 0x3dcd758;

int64_t RtlVirtualUnwind = 0x3dcd71e;

void __report_gsfailure(int64_t rcx) {
    int64_t v2;
    void* rbp3;
    int64_t rsi4;
    int64_t rbx5;
    void* rdx6;
    int64_t r8_7;
    int64_t rax8;
    int64_t rax9;
    int64_t r9_10;
    int64_t rax11;
    void* v12;

    v2 = reinterpret_cast<int64_t>(__return_address());
    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8);
    rsi4 = rcx;
    RtlCaptureContext(0x41cb2e0);
    rbx5 = g41cb3d8;
    rdx6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp3) - 40);
    *reinterpret_cast<int32_t*>(&r8_7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = 0;
    rax8 = reinterpret_cast<int64_t>(RtlLookupFunctionEntry(rbx5, rdx6));
    if (!rax8) {
        while (1) {
            g41cb3d8 = v2;
            g41cb378 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp3) + 8);
            addr_402ff3_3:
            rax9 = g41cb3d8;
            g41cb360 = rsi4;
            g41cb7d0 = rax9;
            GS_ExceptionRecord = 0x1c0000409;
            SetUnhandledExceptionFilter();
            UnhandledExceptionFilter(0x412380, rdx6, r8_7, r9_10);
            rax11 = reinterpret_cast<int64_t>(GetCurrentProcess(0x412380, rdx6, r8_7, r9_10));
            *reinterpret_cast<int32_t*>(&rdx6) = 0xc0000409;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            TerminateProcess(rax11, 0xc0000409, r8_7, r9_10);
            abort();
        }
    } else {
        r9_10 = rax8;
        r8_7 = rbx5;
        rdx6 = v12;
        RtlVirtualUnwind();
        goto addr_402ff3_3;
    }
}

struct s87 {
    int32_t f0;
    int32_t f4;
};

struct s88 {
    signed char[4] pad4;
    int32_t f4;
};

struct s89 {
    int32_t f0;
    int32_t f4;
};

struct s90 {
    signed char[4] pad4;
    int32_t f4;
};

struct s91 {
    int32_t f0;
    int32_t f4;
};

struct s92 {
    int32_t f0;
    int32_t f4;
};

/* .text */
void text(int32_t ecx, int64_t rdx) {
    int64_t rax3;
    int32_t* rdi4;
    int32_t* rsi5;
    struct s87* rdi6;
    struct s88* rdi7;
    struct s89* rsi8;
    struct s90* rsi9;
    struct s91* rdi10;
    struct s92* rsi11;

    rax3 = bss;
    if (rax3) {
        *rdi4 = *rsi5;
        rdi6 = reinterpret_cast<struct s87*>(&rdi7->f4);
        rsi8 = reinterpret_cast<struct s89*>(&rsi9->f4);
        rdi6->f0 = rsi8->f0;
        rdi10 = reinterpret_cast<struct s91*>(&rdi6->f4);
        rsi11 = reinterpret_cast<struct s92*>(&rsi8->f4);
        rdi10->f0 = rsi11->f0;
        rdi10->f4 = rsi11->f4;
        rax3(reinterpret_cast<int64_t>(__zero_stack_offset()) - 88 + 32);
    }
    return;
}

void MessageBoxW() {
    goto MessageBoxW;
}

void fun_403260() {
    goto 0x4031d8;
}

void _IsNonwritableInCurrentImage(int64_t rcx) {
    struct s2* r8_2;

    r8_2 = refptr___image_base__;
    if (r8_2->f0 == 0x5a4d) 
        goto 0x404100; else 
        goto "???";
}

void __gcc_deregister_frame() {
    return;
}

void fun_405d0e() {
    goto 0x4059ee;
}

void fun_407b30() {
    goto 0x407ae5;
}

void fun_40a0b3() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x409f0b; else 
        goto "???";
}

void fun_409eb4() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) 
        goto 0x40a1b4; else 
        goto "???";
}

int64_t _encode_pointer(int64_t rcx) {
    return rcx;
}

void SetUnhandledExceptionFilter() {
    goto SetUnhandledExceptionFilter;
}

void WideCharToMultiByte() {
    goto WideCharToMultiByte;
}

void fun_403270() {
    goto 0x4031d8;
}

int64_t g416098;

void** flog;

/* .text */
int64_t text(void** rcx, uint32_t* rdx, int32_t* r8, uint32_t r9d) {
    void** r9_4;
    void* rbp5;
    uint32_t* v6;
    int32_t* v7;
    uint32_t v8;
    void** r8_9;
    uint32_t v10;
    int32_t v11;
    int32_t v12;
    int64_t rcx13;
    int32_t v14;
    int64_t rax15;
    int32_t v16;
    int32_t v17;
    int32_t eax18;
    int32_t v19;
    uint32_t v20;
    uint32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    uint32_t eax26;
    uint32_t v27;
    int32_t v28;
    int32_t eax29;
    int32_t v30;
    uint32_t eax31;
    uint32_t eax32;
    void* rdx33;
    void** r8_34;
    void* rax35;
    void** rdx36;
    void* rdx37;
    void* rax38;
    int32_t eax39;
    int64_t rdx40;
    int64_t rax41;
    int64_t rdx42;
    int64_t rax43;
    int64_t rdx44;
    int64_t rdx45;
    int64_t rax46;
    int64_t rdx47;
    int64_t rax48;
    int64_t rdx49;
    int64_t rax50;
    int64_t rax51;
    int64_t rdx52;
    int64_t rax53;
    int64_t rdx54;
    int64_t rdx55;
    int64_t rax56;
    int64_t rax57;
    int64_t rdx58;
    int64_t rax59;
    uint32_t eax60;
    uint32_t v61;
    int32_t v62;
    int32_t v63;
    uint32_t edx64;
    void** rax65;
    void** rcx66;
    int32_t v67;
    void** rax68;
    int32_t v69;
    void** rax70;
    int64_t rcx71;
    int64_t rcx72;
    int64_t rcx73;
    void* rdi74;
    void** rdx75;
    uint32_t v76;
    int32_t v77;
    int32_t v78;
    uint32_t v79;
    int32_t v80;
    int32_t v81;
    int64_t rax82;
    int64_t v83;
    int64_t v84;
    int32_t v85;
    int64_t rax86;
    uint32_t eax87;
    void** rax88;
    int32_t v89;
    int32_t v90;
    int32_t v91;
    int32_t v92;
    int32_t v93;
    int32_t v94;
    uint32_t eax95;
    uint64_t v96;
    int32_t v97;
    int32_t v98;
    int32_t v99;
    uint64_t v100;
    int32_t v101;
    int32_t eax102;
    void** r9_103;
    int64_t rax104;

    *reinterpret_cast<uint32_t*>(&r9_4) = r9d;
    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 0x5d8 + 0x80);
    __asm__("movaps [rbp+0x540], xmm6");
    v6 = rdx;
    v7 = r8;
    v8 = *reinterpret_cast<uint32_t*>(&r9_4);
    clock();
    *reinterpret_cast<int32_t*>(&r8_9) = 0x8c;
    *reinterpret_cast<int32_t*>(&r8_9 + 4) = 0;
    memcpy(reinterpret_cast<int64_t>(rbp5) + 0x3b0, rcx, 0x8c);
    v10 = 0;
    v11 = 0;
    while (v11 <= 33) {
        v10 = v10 + v6[v11];
        ++v11;
    }
    v12 = 0;
    *reinterpret_cast<int32_t*>(&rcx13) = 17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
    while (rcx13) {
        --rcx13;
    }
    v14 = 0;
    while (v14 <= 33) {
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v14 * 4 + 0x3b0) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v14 * 4 + 0x3b0) == 0))) {
            *reinterpret_cast<int32_t*>(&rax15) = v12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
            v12 = static_cast<int32_t>(rax15 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + *reinterpret_cast<int32_t*>(&rax15) * 4 + 0x320) = v14;
        }
        ++v14;
    }
    v16 = 0;
    while (v16 <= 14) {
        v17 = 0;
        while (eax18 = tot, v17 < eax18) {
            *reinterpret_cast<int64_t*>((v17 + v16 * 0x3e80) * 8 + 0x416060) = 0;
            ++v17;
        }
        ++v16;
    }
    g416098 = 1;
    v19 = 1;
    v20 = 1;
    while (reinterpret_cast<int32_t>(v20) <= reinterpret_cast<int32_t>(34)) {
        v21 = v20 & 1;
        v22 = 0;
        while (v22 <= v19) {
            v23 = 0;
            while (v23 <= 14) {
                v24 = 0;
                while (v24 <= 0x3e7f) {
                    r8_9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v21) * 0x3a980);
                    *reinterpret_cast<int64_t*>((v24 + (v23 * 0x3e80 + reinterpret_cast<uint64_t>(r8_9 + v22 * 0x75300))) * 8 + 0x416060) = 0;
                    ++v24;
                }
                ++v23;
            }
            ++v22;
        }
        v25 = 0;
        while (v25 <= v19) {
            eax26 = text(v10, 10, r8_9, r9_4);
            v27 = eax26;
            while (reinterpret_cast<int32_t>(v27) >= reinterpret_cast<int32_t>(0)) {
                v28 = 1;
                while (eax29 = tot, v28 < eax29) {
                    if (v25 == v19 && *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + (v19 - 1) * 4 + 0x320) == v20 - 1 || (r8_9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v21 ^ 1) * 0x3a980), !!*reinterpret_cast<int64_t*>((v28 + (v27 * 0x3e80 + reinterpret_cast<uint64_t>(r8_9 + v25 * 0x75300))) * 8 + 0x416060))) {
                        v30 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v6) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(v20)) << 2) - 4));
                        while (v30 >= 0) {
                            if (reinterpret_cast<int32_t>(v20) > reinterpret_cast<int32_t>(27)) {
                                eax31 = 9;
                            } else {
                                eax32 = (__intrinsic() >> 1) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v20) >> 31);
                                eax31 = v20 - ((eax32 << 3) + eax32);
                            }
                            if (v25 < v19) {
                                rdx33 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v20 - 1) * 4 + 0x3b0) + v30));
                                r8_34 = reinterpret_cast<void**>(v28 * 50);
                                rax35 = reinterpret_cast<void*>((reinterpret_cast<int64_t>(rdx33) << 2) + reinterpret_cast<int64_t>(rdx33));
                                rdx36 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(rax35) + reinterpret_cast<int64_t>(rax35) + reinterpret_cast<unsigned char>(r8_34) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax31)))) * 4);
                                if (*reinterpret_cast<int32_t*>(rdx36 + 0x3eae060) < 0 || (rdx37 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v20 - 1) * 4 + 0x3b0) + v30)), r8_34 = reinterpret_cast<void**>(v28 * 50), rax38 = reinterpret_cast<void*>((reinterpret_cast<int64_t>(rdx37) << 2) + reinterpret_cast<int64_t>(rdx37)), *reinterpret_cast<int32_t*>(&rdx36) = *reinterpret_cast<int32_t*>((reinterpret_cast<int64_t>(rax38) + reinterpret_cast<int64_t>(rax38) + reinterpret_cast<unsigned char>(r8_34) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax31)))) * 4 + 0x3eae060), *reinterpret_cast<int32_t*>(&rdx36 + 4) = 0, eax39 = tot, *reinterpret_cast<int32_t*>(&rdx36) > eax39)) {
                                    _Z6printfPKcz("error!", rdx36, r8_34, r9_4);
                                }
                                *reinterpret_cast<uint32_t*>(&rdx40) = v27;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx40) + 4) = 0;
                                *reinterpret_cast<int32_t*>(&rax41) = v30;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                                rdx42 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v20 - 1) * 4 + 0x3b0) + v30;
                                rax43 = (rdx42 << 2) + rdx42;
                                rdx44 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v6) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(v20)) << 2) - 4));
                                *reinterpret_cast<uint32_t*>(&rdx45) = v27;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = 0;
                                *reinterpret_cast<int32_t*>(&rax46) = v30;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0;
                                rdx47 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v20 - 1) * 4 + 0x3b0) + v30;
                                rax48 = (rdx47 << 2) + rdx47;
                                r9_4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v21) * 0x3a980);
                                r8_9 = r9_4 + v25 * 0x75300;
                                *reinterpret_cast<int64_t*>((*reinterpret_cast<int32_t*>((rax48 + rax48 + v28 * 50 + eax31) * 4 + 0x3eae060) + reinterpret_cast<uint64_t>(r8_9 + static_cast<int32_t>(rdx45 + rax46) * 0x3e80)) * 8 + 0x416060) = *reinterpret_cast<int64_t*>((v28 + (v27 * 0x3e80 + (v25 * 0x75300 + (v21 ^ 1) * 0x3a980))) * 8 + 0x416060) * *reinterpret_cast<int64_t*>(((rdx44 << 2) + rdx44 + v30) * 8 + 0x4120c0) + *reinterpret_cast<int64_t*>((*reinterpret_cast<int32_t*>((rax43 + rax43 + v28 * 50 + eax31) * 4 + 0x3eae060) + (static_cast<int32_t>(rdx40 + rax41) * 0x3e80 + (v25 * 0x75300 + v21 * 0x3a980))) * 8 + 0x416060);
                            }
                            if (v25 == v19) {
                                *reinterpret_cast<uint32_t*>(&rdx49) = v27;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = 0;
                                *reinterpret_cast<int32_t*>(&rax50) = v30;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax50) + 4) = 0;
                                *reinterpret_cast<int32_t*>(&rax51) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v20 - 1) * 4 + 0x3b0);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax51) + 4) = 0;
                                rdx52 = static_cast<int32_t>(rax51 - 1) + v30;
                                rax53 = (rdx52 << 2) + rdx52;
                                rdx54 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v6) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(v20)) << 2) - 4));
                                *reinterpret_cast<uint32_t*>(&rdx55) = v27;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx55) + 4) = 0;
                                *reinterpret_cast<int32_t*>(&rax56) = v30;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax56) + 4) = 0;
                                *reinterpret_cast<int32_t*>(&rax57) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v20 - 1) * 4 + 0x3b0);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax57) + 4) = 0;
                                rdx58 = static_cast<int32_t>(rax57 - 1) + v30;
                                rax59 = (rdx58 << 2) + rdx58;
                                r9_4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v21) * 0x3a980);
                                r8_9 = r9_4 + v25 * 0x75300;
                                *reinterpret_cast<int64_t*>((*reinterpret_cast<int32_t*>((rax59 + rax59 + v28 * 50 + eax31) * 4 + 0x3eae060) + reinterpret_cast<uint64_t>(r8_9 + static_cast<int32_t>(rdx55 + rax56) * 0x3e80)) * 8 + 0x416060) = *reinterpret_cast<int64_t*>((v28 + (v27 * 0x3e80 + (v21 ^ 1) * 0x3a980)) * 8 + 0x416060) * *reinterpret_cast<int64_t*>(((rdx54 << 2) + rdx54 + v30) * 8 + 0x4120c0) + *reinterpret_cast<int64_t*>((*reinterpret_cast<int32_t*>((rax53 + rax53 + v28 * 50 + eax31) * 4 + 0x3eae060) + (static_cast<int32_t>(rdx49 + rax50) * 0x3e80 + (v25 * 0x75300 + v21 * 0x3a980))) * 8 + 0x416060);
                            }
                            --v30;
                        }
                    }
                    ++v28;
                }
                --v27;
            }
            ++v25;
        }
        if (*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + (v19 - 1) * 4 + 0x320) != v20 - 1) {
            eax60 = text(v10, 14, r8_9, r9_4);
            v61 = eax60;
            while (reinterpret_cast<int32_t>(v61) >= reinterpret_cast<int32_t>(0)) {
                v62 = 1;
                while (v62 <= 6) {
                    r8_9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v21) * 0x3a980);
                    if (*reinterpret_cast<int64_t*>((v62 + (v61 * 0x3e80 + reinterpret_cast<uint64_t>(r8_9 + v19 * 0x75300))) * 8 + 0x416060)) {
                        *reinterpret_cast<int32_t*>(&r8_9) = 78;
                        *reinterpret_cast<int32_t*>(&r8_9 + 4) = 0;
                        _assert("f[branch_choice_num][nw][j][k] == 0", "D:\\workspace\\mahjong_old\\calc_xt\\main.cpp", 78, r9_4);
                    }
                    ++v62;
                }
                --v61;
            }
        } else {
            ++v19;
        }
        ++v20;
    }
    v63 = 0;
    while (v63 < v19) {
        if (!v63) {
            edx64 = 0;
        } else {
            edx64 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v63 - 1) * 4 + 0x320) * 4 + 0x3b0);
        }
        if (!v63) {
            rax65 = reinterpret_cast<void**>("   ");
        } else {
            rax65 = *reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v63 - 1) * 4 + 0x320) * 8 + 0x411020);
        }
        rcx66 = flog;
        *reinterpret_cast<uint32_t*>(&r9_4) = edx64;
        *reinterpret_cast<int32_t*>(&r9_4 + 4) = 0;
        r8_9 = rax65;
        _Z7fprintfP6_iobufPKcz(rcx66, "\n%3s,%d", r8_9, r9_4);
        v67 = 1;
        while (v67 <= 6) {
            rax68 = flog;
            *reinterpret_cast<int32_t*>(&r8_9) = v67;
            *reinterpret_cast<int32_t*>(&r8_9 + 4) = 0;
            _Z7fprintfP6_iobufPKcz(rax68, "\n f[%d],", r8_9, r9_4);
            v69 = 1;
            while (v69 <= 10) {
                rax70 = flog;
                r8_9 = *reinterpret_cast<void***>((v67 + (v69 * 0x3e80 + v63 * 0x75300)) * 8 + 0x416060);
                _Z7fprintfP6_iobufPKcz(rax70, "%llu,", r8_9, r9_4);
                ++v69;
            }
            ++v67;
        }
        ++v63;
    }
    *reinterpret_cast<int32_t*>(&rcx71) = 43;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = 0;
    while (rcx71) {
        --rcx71;
    }
    *reinterpret_cast<int32_t*>(&rcx72) = 43;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx72) + 4) = 0;
    while (rcx72) {
        --rcx72;
    }
    *reinterpret_cast<int32_t*>(&rcx73) = 21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx73) + 4) = 0;
    rdi74 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 80);
    while (rcx73) {
        --rcx73;
        rdi74 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdi74) + 8);
    }
    rdx75 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi74) + 4);
    v76 = 100;
    v77 = 1;
    while (v77 < v19) {
        v78 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v77 - 1) * 4 + 0x320);
        v79 = 1;
        while (reinterpret_cast<int32_t>(v79) <= reinterpret_cast<int32_t>(10)) {
            v80 = 0;
            v81 = 0;
            while (v81 <= 33) {
                v80 = v80 + v7[v79];
                ++v81;
            }
            if (v7[v78] >= *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v78 * 4 + 0x3b0)) {
            }
            if (v78 > 26 && *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v78 * 4 + 0x3b0) <= 1) {
            }
            *reinterpret_cast<uint32_t*>(&rax82) = v79;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax82) + 4) = 0;
            text(v8 + static_cast<uint32_t>(rax82 - 1), 18, r8_9, r9_4, v8 + static_cast<uint32_t>(rax82 - 1), 18, r8_9, r9_4);
            text(v8 + v79, 18, r8_9, r9_4);
            __asm__("subsd xmm6, xmm0");
            text(v8, 18, r8_9, r9_4, v8, 18, r8_9, r9_4);
            __asm__("divsd xmm6, xmm0");
            __asm__("movapd xmm0, xmm6");
            v83 = 0;
            v84 = 0;
            v85 = 1;
            while (v85 <= 6) {
                *reinterpret_cast<int32_t*>(&rax86) = v85 + 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax86) + 4) = 0;
                v83 = v83 + (v80 + static_cast<int32_t>(rax86 + rax86)) * *reinterpret_cast<int64_t*>((v85 + (v79 * 0x3e80 + v77 * 0x75300)) * 8 + 0x416060);
                r8_9 = reinterpret_cast<void**>(0);
                v84 = v84 + *reinterpret_cast<int64_t*>((v85 + (v79 * 0x3e80 + v77 * 0x75300)) * 8 + 0x416060);
                ++v85;
            }
            if (v83 && !*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v78 * 4 - 80)) {
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp5) + v78 * 4 - 80) = v79;
            }
            if (v83) {
                eax87 = text(v76, v79, r8_9, r9_4, v76, v79, r8_9, r9_4);
                v76 = eax87;
            }
            if (v83 < 0) {
                __asm__("cvtsi2sd xmm0, rdx");
                __asm__("addsd xmm0, xmm0");
            } else {
                __asm__("cvtsi2sd xmm0, rax");
            }
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm0, xmm2");
            __asm__("divsd xmm0, xmm2");
            __asm__("mulsd xmm0, [rbp+0x458]");
            __asm__("addsd xmm0, xmm1");
            if (v84 < 0) {
                __asm__("cvtsi2sd xmm0, rdx");
                __asm__("addsd xmm0, xmm0");
            } else {
                __asm__("cvtsi2sd xmm0, rax");
            }
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm0, xmm2");
            __asm__("divsd xmm0, xmm2");
            __asm__("mulsd xmm0, [rbp+0x458]");
            __asm__("addsd xmm0, xmm1");
            ++v79;
        }
        rax88 = flog;
        __asm__("movd rdx, xmm1");
        __asm__("movd xmm1, rdx");
        __asm__("movd xmm3, rcx");
        __asm__("movd r9, xmm1");
        *reinterpret_cast<int32_t*>(&r8_9) = v77;
        *reinterpret_cast<int32_t*>(&r8_9 + 4) = 0;
        rdx75 = reinterpret_cast<void**>("%d %lf %lf\n");
        _Z7fprintfP6_iobufPKcz(rax88, "%d %lf %lf\n", r8_9, r9_4);
        ++v77;
    }
    if (v12 != v19 - 1) {
        *reinterpret_cast<int32_t*>(&r8_9) = 0x8d;
        *reinterpret_cast<int32_t*>(&r8_9 + 4) = 0;
        rdx75 = reinterpret_cast<void**>("D:\\workspace\\mahjong_old\\calc_xt\\main.cpp");
        _assert("choice_num == branch_choice_num - 1", "D:\\workspace\\mahjong_old\\calc_xt\\main.cpp", 0x8d, r9_4);
    }
    v89 = 0;
    __asm__("pxor xmm0, xmm0");
    v90 = 1;
    while (v90 < v19) {
        __asm__("pxor xmm0, xmm0");
        v91 = 0;
        v92 = 0;
        v93 = 1;
        while (v93 < v19) {
            v94 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v93 - 1) * 4 + 0x320);
            eax95 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v94 * 4 + 0x3b0) + v6[v94];
            *reinterpret_cast<uint32_t*>(&rdx75) = 4 - eax95;
            *reinterpret_cast<int32_t*>(&rdx75 + 4) = 0;
            __asm__("comisd xmm0, [rbp+0x4b8]");
            if (4 > eax95) {
                v91 = v94;
                v92 = v93;
            }
            ++v93;
        }
        v96 = 0;
        v97 = 1;
        while (v97 <= 6) {
            rdx75 = reinterpret_cast<void**>((v97 + v92 * 0x75300 + 0x3e80) * 8);
            v96 = v96 + *reinterpret_cast<int64_t*>(rdx75 + 0x416060);
            ++v97;
        }
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v91 * 4 - 80) == 1) {
            v98 = 1;
            while (v98 <= v19) {
                v99 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + (v98 - 1) * 4 + 0x320);
                v100 = 0;
                v101 = 1;
                while (v101 <= 6) {
                    rdx75 = reinterpret_cast<void**>((v101 + v98 * 0x75300 + 0x3e80) * 8);
                    v100 = v100 + *reinterpret_cast<int64_t*>(rdx75 + 0x416060);
                    ++v101;
                }
                if (v100 > v96) {
                    v96 = v100;
                    v91 = v99;
                }
                ++v98;
            }
        }
        eax102 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp5) + v91 * 4 - 80);
        *reinterpret_cast<int32_t*>(&r9_103) = eax102;
        *reinterpret_cast<int32_t*>(&r9_103 + 4) = 0;
        __asm__("movd r8, xmm1");
        __asm__("movapd xmm1, xmm3");
        __asm__("movd rdx, xmm0");
        _Z6printfPKcz("%lf %lf %d ", rdx75, r8_9, r9_103);
        rdx75 = *reinterpret_cast<void***>(v91 * 8 + 0x411020);
        _Z6printfPKcz("%3s\n", rdx75, r8_9, r9_103);
        __asm__("pxor xmm0, xmm0");
        __asm__("pxor xmm0, xmm0");
        if (v90 == 1) {
            v89 = v91;
        }
        ++v90;
    }
    *reinterpret_cast<int32_t*>(&rax104) = v89;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax104) + 4) = 0;
    __asm__("movaps xmm6, [rbp+0x540]");
    return rax104;
}

void fun_405d22() {
    goto 0x4059ee;
}

void GetStartupInfoA() {
    goto GetStartupInfoA;
}

void VirtualQuery() {
    goto VirtualQuery;
}

void fun_403280() {
    goto 0x4031d8;
}

void fun_405d32() {
    goto 0x4059ee;
}

struct s93 {
    int64_t f0;
    int64_t f8;
};

/* .data */
struct s93* data = reinterpret_cast<struct s93*>(0x410260);

/* .text */
void text() {
    struct s93* rax1;
    int64_t rax2;
    struct s93* rax3;

    rax1 = data;
    rax2 = rax1->f0;
    if (rax2) {
        do {
            rax2();
            rax3 = data;
            rax2 = rax3->f8;
            data = reinterpret_cast<struct s93*>(&rax3->f8);
        } while (rax2);
    }
    return;
}

void VirtualProtect() {
    goto VirtualProtect;
}

void UnhandledExceptionFilter() {
    goto UnhandledExceptionFilter;
}

void TlsGetValue() {
    goto TlsGetValue;
}

void TerminateProcess() {
    goto TerminateProcess;
}

void RtlVirtualUnwind() {
    goto RtlVirtualUnwind;
}

void RtlLookupFunctionEntry() {
    goto RtlLookupFunctionEntry;
}

void RtlCaptureContext() {
    goto RtlCaptureContext;
}

void RtlAddFunctionTable() {
    goto RtlAddFunctionTable;
}

void QueryPerformanceCounter() {
    goto QueryPerformanceCounter;
}

void MultiByteToWideChar() {
    goto MultiByteToWideChar;
}

void LeaveCriticalSection() {
    goto LeaveCriticalSection;
}

void IsDBCSLeadByteEx() {
    goto IsDBCSLeadByteEx;
}

void InitializeCriticalSection() {
    goto InitializeCriticalSection;
}

void GetTickCount() {
    goto GetTickCount;
}

void GetSystemTimeAsFileTime() {
    goto GetSystemTimeAsFileTime;
}

void GetModuleFileNameW() {
    goto GetModuleFileNameW;
}

void GetLastError() {
    goto GetLastError;
}

void GetCurrentThreadId() {
    goto GetCurrentThreadId;
}

void GetCurrentProcessId() {
    goto GetCurrentProcessId;
}

void GetCurrentProcess() {
    goto GetCurrentProcess;
}

void EnterCriticalSection() {
    goto EnterCriticalSection;
}

void DeleteCriticalSection() {
    goto DeleteCriticalSection;
}

