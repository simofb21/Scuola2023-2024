.model small
.stack 100h    
.data

    str1 Db "stringadialmenodiecicaratteri" 
          
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice
    
              
    mov dl, [str1]      ; carico in dl la prima lettera
    sub dl,32           ; ci tolgo 32, per prendere la stessa lettera maiuscola
    mov ah, 02h         ; funzione dos, per stampa a video 
    int 21h 
    
                                                     
    mov dl, 13          ; stampa di una nuova linea
    mov ah,02h
    int 21h   
    
    mov dl, 10           ; vado nella nuova linea 
    mov ah,02h
    int 21h
    
              
    mov dl, [str1+3]      ; ripeto quanto fatto in precedenza con la 4 lettera
    sub dl,32 
    mov ah, 02h      
    int 21h
    
    mov ah, 4ch     ;fine
    int 21h
    
    
end

