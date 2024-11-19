.model small
.stack 100h
.data 
    var1 DB 5 
    var2 DW 16 
    var3 DB 7
.code
;inizializzo il DS
mov ax,@data
mov ds, ax
;fine inizializzazione DS

;1. Crea un programma Assembly che esegua le seguenti operazioni:
;scrivi un numero a 8 bit nel registro BL.

MOV BL, var1
;sposta il contenuto di BL nella cella di indirizzo 00FEh usando un indirizzamento base + spiazzamento. 

MOV Byte Ptr[00FEh], BL 

;scrivi un numero a 16 bit nella cella 0100h e spostalo nel registro DX. 
;MOV Word Ptr[0100h], 16h  (oppure ...)
MOV AX, var2
MOV [0100h], AX
MOV DX, [0100h]
;leggi il numero presente nella cella 0101h e scrivilo nel registro AL.
MOV AL, [0101h]
;scrivi un numero a 8 bit nella cella 0200h e spostalo nella cella successiva e precedente. 
MOV Byte Ptr[0200h], 7h

;dovrei fare --> MOV [0201h],[0200h]  ma da memoria a memoria NON SI PUO'
MOV CL, [0200h]
MOV [0201h],CL
MOV [01FFh],CL
;scrivi un numero a 16 bit nella cella 0200h e spostalo nella cella 0100h 
MOV Word Ptr[0200h], 19h
MOV CL, [0200h]
MOV [0100h],CL

mov ah,4ch
int 21h
end