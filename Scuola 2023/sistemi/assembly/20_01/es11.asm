.model small
.stack 100h    
.data
           var1 dw 1h 
           var2 dw 2h
           var3 db 3h
           var4 db 4h
           
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice
    
    mov al,var3
    mov ah,var4
    mov var3, ah
    mov var4, al
   
    mov bx,var1
    mov cx,var2
    mov var2, bx
    mov var1, cx
  
    
    mov ah, 4ch
    int 21h
    
    
end

