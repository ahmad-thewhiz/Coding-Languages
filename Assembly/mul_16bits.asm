.model small
.stack 100h

.data
num1 dw 15h
num2 dw 25h
res dw ?
resHigh dw ?

.code
main:
    mov ax, @data
    mov ds, ax
    
    mov ax, num1
    mov bx, num2
    mul bx ; multiply al by bl, res in ax (al*bl=ax)
    
    mov res, ax     ; lower part
    mov resHigh, dx ; higher part
    
    mov ah, 4ch
    int 21h
    
end main