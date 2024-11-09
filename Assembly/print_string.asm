.model small
.stack 100h

.data
string db 'daysofahmad', '$'

.code
main proc far
    mov ax, @data
    mov ds, ax
    
    lea dx, string ; load address of the string
    
    mov ah, 09h ; output the string loaded in the dx
    int 21h
    
    mov ah, 4ch ; interrupt to exit
    int 21h
    
    main endp
    