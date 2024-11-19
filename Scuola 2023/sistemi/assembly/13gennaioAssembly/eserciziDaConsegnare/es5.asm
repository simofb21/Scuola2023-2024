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
    ; da qui inizia es 5
       mov dl,dh                     ;parto dalla fine
       mov dh,cl
       mov cl,ch
       mov ch,bl 
       mov bl,bh 
       mov bh,al
       mov al,ah
       mov ah,dh   
    
    
    mov ah,4ch
    int 21h
end