.model small
.stack 100h

.data
    dividend dw 20h
    divisor dw 04h
    quotient dw ?
    remainder dw ?
    
.code
main:
    mov ax, @data
    mov ds, ax
    
    mov ax, dividend   
    xor dx, dx
    
    mov bx, divisor
    div bx ; divide ax (al/bl), quotient in al and remainder in ah
    
    mov quotient, ax
    mov remainder, dx
    
    mov ah, 4ch
    int 21h
    
end main    