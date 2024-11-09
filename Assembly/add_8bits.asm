.model small
.stack 100h

.data
num1 dw 15h
num2 dw 25h
result dw ?

.code
main:
    mov ax, @data
    mov ds, ax
    
    mov ax, num1 ; moving number to al
    add ax, num2 ; add num2 to al   
    mov result, ax
    
    mov ah, 4ch  ; exit to DOS
    int 21h

end main
 
