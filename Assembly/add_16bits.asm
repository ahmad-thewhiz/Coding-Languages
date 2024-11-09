.model small
.stack 100h

.data
num1 db 15h
num2 db 25h
result db ?

.code
main:
    mov ax, @data
    mov ds, ax
    
    mov al, num1 ; moving number to al
    add al, num2 ; add num2 to al   
    mov result, al
    
    mov ah, 4ch  ; exit to DOS
    int 21h

end main
 