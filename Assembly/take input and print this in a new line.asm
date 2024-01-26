.model small
.stack 100h
.code
main proc
    mov ah,1 ; ah=1 &&char input || ah = 2 && output || ah=9 && stringOutput
    int 21h ;int helps to calling the fucntion 
    mov bl,al ; al is input register  
    
    
    mov ah,2
    mov dl,10
    int 21h   
    mov dl,13
    int 21h
    
    mov ah,2
    mov dl,bl  ; dl && output
    int 21h   
    
    
    
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main