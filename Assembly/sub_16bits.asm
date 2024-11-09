.model small
.stack 100h

.data
num1 dw 45h
num2 dw 25h    
result dw ?

.code
main:
    mov ax, @data
    mov ds, ax
    
    mov ax, num1
    sub ax, num2
    mov result, ax
    
    mov ah, 4ch
    int 21h
end main



