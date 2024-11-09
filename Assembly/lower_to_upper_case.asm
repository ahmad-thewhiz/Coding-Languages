.model small
.stack 100h
.data
    higher db 'A'
.code
main proc far
    mov ax, @data
    mov ds, ax
           
    mov al, higher
    add al, 20h       
           
    mov ah, 02h
    mov dl, al
    int 21h
    
    mov ah, 4ch
    int 21h
main endp