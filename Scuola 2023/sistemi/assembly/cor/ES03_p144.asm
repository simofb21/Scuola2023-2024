.model small
.stack 100h
.data 
    var1 DB ?
.code
mov ax,@data
mov ds, ax

;Dato un numero a 8 bit memorizzato nella cella 0100h, spostalo nella cella successiva 
MOV Byte Ptr[0100h], 77h
;usando un indirizzamento diretto.  (MOV variabile1,AX)
MOV BL, [0100h]   
MOV var1, BL 
;dovrei mettere var1 in [0101h]... POSSO FARE MOV [0101h], var1? Motiva se si, motiva se no?

;... quindi?

mov ah,4ch
int 21h
end