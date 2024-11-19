.model small
.stack 100h    
.data

.code
    
    mov ax, @data
    mov ds, ax
    
    mov al,05h
    mov ah,03h
    add al,ah       ;con la add salva il valore nel primo registro
    mov bh,al
 
    
    mov ah,4ch
    int 21h
end

