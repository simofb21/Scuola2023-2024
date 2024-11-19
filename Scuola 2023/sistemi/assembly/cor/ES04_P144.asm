.model small
.stack 100h
.data 
    var1 DW ?
.code
mov ax,@data
mov ds, ax

;4. Dato un numero a 16 bit memorizzato nella cella 0100h, 
MOV BX, 0100h    
MOV Word Ptr[BX], 3447h
;spostalo usando un indirizzamento indiretto tramite registro. MOV [BX], AX  

MOV CX, [BX]
MOV [BX+2], CX 


mov ah,4ch
int 21h
end