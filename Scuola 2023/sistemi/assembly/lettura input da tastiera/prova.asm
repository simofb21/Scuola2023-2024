.model small
.stack 100h    
.data

    str1 DB "Inserisci il primo numero :  $"
    str2 DB 13,10,"Inserisci il secondo numero: $"
    str3 DB 13,10,"La somma e' :  $"
         
           
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice
    
    lea dx, str1
    mov ah, 9
    int 21h
    
    mov ah,1        ; mette in al , il codice ascii di quello che ho inserito( e' di 1 byte)
    int 21h
    mov bl,al        ; libero al , perche' poi leggo un altro input.
    
    sub bl,48       ; 48 e' il codice ascii di dove iniziano i numeri,    quindi io ce lo tolgo, per ottenere il numero effettivo che ho inserrito
    
    lea dx, str2
    mov ah , 9
    int 21h
   
    mov ah, 1
    int 21h
    mov bh,al  
    
    sub bh,48
    
    lea dx, str3
    mov ah, 9
    int 21h
    add bh,bl
    add bh,48       ; lo risommo per ottenere stampato il numero
    
    mov dl,bh                     ; carico in dl quello che devo stampare
    mov ah,2
    int 21h
    
    mov ah, 4ch
    int 21h
    
    
end

