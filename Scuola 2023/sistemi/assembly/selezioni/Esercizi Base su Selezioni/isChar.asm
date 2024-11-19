.model small
.stack 100h    
.data
     
     input db ?
     msgSpiega db ' Inserisci qualcosa. Il programma ti dira se l inoput e carattere $'
     msgComp db ' E char $'    
                                                               
     NC db ' Non char $'
           
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice  
    
    lea dx,msgSpiega
    mov ah,09
    int 21h  
    
    mov ah,01
    int 21h
    mov bl, al
    
    mov dl, 10  ;andare a capo 
    mov ah,02
    int 21h   
    
    mov dl,13       ; a capo
    mov ah,02
    int 21h
    
    
    cmp bl,'A'           ;confronto minore
    jb nonCompreso
    cmp bl,'z'                    ;confronto maggiore
    ja nonCompreso                    
    
    lea dx,msgComp                  ;stampa che e carattere
    mov ah,09
    int 21h
    jmp fine
    
       
nonCompreso:
    lea dx,NC
    mov ah,09                    ;stampa non is carattere 
    int 21h  
    jmp fine

    
fine:  
    mov ah, 4ch
    int 21h
    
    
end

