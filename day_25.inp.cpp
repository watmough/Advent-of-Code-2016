        cpy a d
        cpy 4 c
    lbl3    cpy 643 b
        lbl4    inc d
                dec b
            jnz b -2    // lbl4
            dec c
        jnz c -5    // lbl3
    lbl9:   cpy d a
    lbl10:  jnz 0 0
            cpy a b
            cpy 0 a
    lbl13:  cpy 2 c
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
    lbl27:  jnz 0 0     // ???
            out b
            jnz a -19   // lbl10
        jnz 1 -21   // lbl9
        
