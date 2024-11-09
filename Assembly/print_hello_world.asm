.model small
.stack 100h

.data

string db 'hello world!', '$'

.code
main proc far 
mov ax, @data
mov ds, ax

lea dx, string

mov ah, 09h
int 21h

mov ah, 4ch
int 21h
main endp



