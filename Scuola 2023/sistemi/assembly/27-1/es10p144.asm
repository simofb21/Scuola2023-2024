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
    
    mov ax,0101h
    mov bx,0202h
    mov cx,0303h
    mov dx,0404h 
    
    mov word ptr  [var1], ax
    mov word ptr  [var2], bx
    mov word ptr  [var3], cx
    mov word ptr  [var4], dx
    
    mov ah, 4ch
    int 21h
    
    
end

