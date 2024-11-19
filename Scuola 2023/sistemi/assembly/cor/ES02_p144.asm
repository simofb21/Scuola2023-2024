.model small
.stack 100h
.data 
    
.code
;inizializzo il DS
mov ax,@data
mov ds, ax
;fine inizializzazione DS
MOV Byte Ptr[0100H], 34h
;Dato un numero a 8 bit memorizzato nella cella 0100h, spostalo nella cella successiva usando un 
;indirizzamento indiretto tramite registro. (MOV [BX], AL)

MOV BX, 0100h
MOV CX, [BX]
MOV [BX+1], CX

mov ah,4ch
int 21h
end