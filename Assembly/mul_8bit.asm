.model small
.stack 100h

.data
num1 db 15h
num2 db 25h
res dw ?

.code
main:
    mov ax, @data
    mov ds, ax
    
    mov al, num1
    mov bl, num2
    mul bl ; multiply al by bl, res in ax (al*bl=ax)
    
    mov res, ax
   
    mov ah, 4ch
    int 21h
    
end main