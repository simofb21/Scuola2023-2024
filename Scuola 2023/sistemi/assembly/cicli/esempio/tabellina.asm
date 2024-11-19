.model small
.stack 100h
.data

    nVolteEseguito dw 0       
    numero db 2 
 

.code     

    mov ax, @data
    mov ds, ax ; inizio codice
       
    mov bx, 0300h
              
              
cicloStampa:     
    
    cmp nVolteEseguito, 9
    jg  fine ; confronta se l' ha fattto piu di 10 volte
    
     
    mov ax,nVolteEseguito          ; metto il secondo operando in ax
    
    mul numero                       ;faccio la moltiplicazione tra ax e numero
    

    
    mov [bx], ax ; metto il risultato della moltiplicazione in
    
    inc nVolteEseguito                  ; i = i +1
    inc bx                                      
    jmp cicloStampa                         ; torno indietro 


fine:  
    
    mov ah, 4ch                    ;end
    int 21h

end
