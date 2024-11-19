.model small
.stack 100h
.data

    stringa db  'str $'
    msgSpiega db 'Il programma dira  come inizia la stringa $'
    msgMinuscola db 'Inizia con minuscola $'
    msgMaiuscola db 'Inizia con maiuscola $'
    msgNonLettera db 'Non inizia con una lettera $'

.code

    mov ax, @data
    mov ds, ax ; inizio codice

    lea dx, msgSpiega
    mov ah, 09
    int 21h
    
    mov dl, 10  ;andare a capo 
    mov ah,02
    int 21h   
    
    mov dl,13       ; a capo
    mov ah,02
    int 21h

    mov bl, stringa ; carica il primo carattere della stringa in bl

    cmp bl, 'A'           ;confronto se viene prima di A oppure dopo z , salto a iniziaMinuscola
    jb nonLettera
    cmp bl, 'z'
    ja nonLettera
    
    cmp bl, 'Z'               ; a questo punto, so che e' una lettera, quindi, se e' prima di Z e' maiuscola
    jbe iniziaMaiuscola
    
    cmp bl, 'a'                  ; se e' dopo a , inizia con una minuscola
    jae iniziaMinuscola
    
    
    

nonLettera:
    lea dx, msgNonLettera ; stampa non inizia con una lettera
    jmp fine

iniziaMinuscola:
    lea dx, msgMinuscola ; stampa inizia con minuscola
    jmp fine

iniziaMaiuscola:
    lea dx, msgMaiuscola ; stampa inizia con maiuscola
    jmp fine

fine:  
    mov ah, 09
    int 21h
    mov ah, 4ch                    ;end
    int 21h

end
