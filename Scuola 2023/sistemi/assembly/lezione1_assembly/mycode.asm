
Title pari
.Model small
.Data
.Stack
.Code
.Startup
        MOV SI,0100h
        MOV BL,02h
        MOV DX,0
        MOV AL,byte ptr [SI]
        MOV AH,00h
        DIV BL
        CMP AH,00h
        JNE Dispari
        MOV DL,01h
        JMP Pari
Dispari:MOV DL,00h
Pari:   INC SI
        MOV byte ptr[SI],DL
        MOV AX,4ch
        INT 21h
End
        