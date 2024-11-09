.model small
.stack 100h

.data
    dividend db 20h
    divisor db 04h
    quotient db ?
    remainder db ?
    
.code
main:
    mov ax, @data
    mov ds, ax
    
    mov al, dividend   
    xor ah, ah
    
    mov bl, divisor
    div bl ; divide ax (al/bl), quotient in al and remainder in ah
    
    mov quotient, al
    mov remainder, ah
    
    mov ah, 4ch
    int 21h
    
end main    