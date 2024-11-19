.model small
.stack 100h
.data 
.code
mov ax,@data
mov ds, ax
;Dati due numeri a 8 bit memorizzati a partire dalla cella 0100h, 
MOV BX, 0100h    
MOV Word Ptr[BX], 13h
MOV Word Ptr[BX+1], 23h

;copiali, scambiandoli, nelle celle successive tramite indirizzamento indicizzato. MOV [BX+SI],CX  
MOV CL, [BX]
MOV CH, [BX+1]
MOV SI, 2
MOV [BX+SI], CH
INC SI 
MOV [BX+SI], CL

mov ah,4ch
int 21h
end