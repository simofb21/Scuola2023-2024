.model small
.stack 100h    
.data

.code
    mov ax, @data
    mov ds, ax

    mov ah,03h
    mov al,06h
    mov bh,04h
    mov bl,08h
    mov ch,02h
    mov cl,04h
    mov dh,01h
    mov dl,02h
    
    mov ah,4ch
    int 21h
end