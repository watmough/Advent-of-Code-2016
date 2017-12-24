    d=a                     cpy a d
    c=4                     cpy 4 c
    do {
    b=643               lbl3    cpy 643 b
    do {
      d++                     lbl4    inc d
      b--                           dec b
    } while(b!=0)               jnz b -2    // lbl4
    c--                         dec c
    } while(c!=0)           jnz c -5    // lbl3
    a=d                 lbl9:   cpy d a
                        lbl10:  jnz 0 0     // nop??
    b=a                         cpy a b
    a=0                         cpy 0 a
    do {
    c=2                        lbl13:  cpy 2 c
    do {
                                lbl14:  jnz b 2     // lbl16
                                        jnz 1 6     // lbl21 / break
                                lbl16:  dec b
                                        dec c
                                    jnz c -4    // lbl14
                                    inc a
                                jnz 1 -7    // lbl13
                        lbl21:  cpy 2 b     
                        lbl22:  jnz c 2     // lbl24
                                jnz 1 4     // lbl27
                        lbl24:  dec b
                                dec c
                                jnz 1 -4    // lbl22
                        lbl27:  jnz 0 0     // nop??
                                out b
                                jnz a -19   // lbl10
                            jnz 1 -21   // lbl9
        
