.model small
.stack 100h    
.data
           var1 dw ? 
           var2 dw ?
           var3 dw ?
           var4 dw ?
           
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice
    
    mov ax, 01011
    mov bx, 01111
    mov cx, 11011
    mov dx, 11111
  
    mov var1,ax
    mov var2,bx
    mov var3,cx
    mov var4,dx
    
    mov ah, 4ch
    int 21h
    
    
end

