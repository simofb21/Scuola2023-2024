.model small
.stack
.data
    msg DB "Hello World!$"

.code
mov ax, @data
mov ds, ax

; Stampa il primo carattere della stringa
mov ah, 02h          ; Servizio DOS per stampare un singolo carattere
mov dl, [msg]        ; Carica il primo carattere in dl
int 21h


; Stampa il terzo carattere della stringa
mov dl, [msg+2]      ; Carica il terzo carattere in dl
int 21h

mov ah, 4Ch
int 21h
                       