.model samll
.stack 100h
.data
a db 'Bangladesh is my country $'
.code 
main proc
    mov ax,@data
    mov ds,ax
       
    mov ah,2
    mov dl,10
    int 21h   
       
    mov ah,9
    lea dx,a
    int 21h
    
    exit:
    mov ah,4ch
    int 21
    main endp
end main