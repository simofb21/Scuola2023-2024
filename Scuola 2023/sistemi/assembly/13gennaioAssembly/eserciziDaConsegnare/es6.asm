.model small
.stack 100h    
.data

.code
    
    mov ax, @data
    mov ds, ax

    mov ax,01h
    mov bx,02h
    mov cx,ax
    mov ax,bx
    mov bx,cx
    
    
    mov ah,4ch
    int 21h
end

