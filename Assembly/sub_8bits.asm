.model small
.stack 100h

.data
num1 db 45h
num2 db 25h

.code
main:
    mov ax, @data
    mov ds, ax
    
    mov al, num1
    sub al, num2
    
    mov ah, 4ch
    int 21h
end main



