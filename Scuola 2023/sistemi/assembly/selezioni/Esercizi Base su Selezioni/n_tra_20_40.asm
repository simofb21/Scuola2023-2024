.model small
.stack 100h    
.data
     
     
     msgSpiega db ' Il programma ti dira se un numero e compreso tra 10 e 20 $'
     msgComp db 'Il numero e  compreso tra 10 e 20 ! $'    
                                                               
     NC db ' Il numero non e compreso tra 10 e 20 $ '
           
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice  
    
    lea dx,msgSpiega
    mov ah,09
    int 21h  
    
    
    mov dl, 10                       ;a capo 
    mov ah,02
    int 21h   
    
    mov dl,13
    mov ah,02
    int 21h
    
    mov [0300h],20  ; ho messo un numero in 0300h 
    mov ax,[0300h]
    
    
    cmp ax,0Ah           ;confronto minore
    jb nonCompreso      ;jump if is belove
    cmp ax,14h              ;confronto maggiore
    ja nonCompreso       ;jump if is above             
    
    lea dx,msgComp                  ;stampa compreso
    mov ah,09
    int 21h
    jmp fine
    
       
nonCompreso:
    lea dx,NC
    mov ah,09                    ;stampa non compreso
    int 21h

    
fine:  
    mov ah, 4ch
    int 21h
    
    
end

