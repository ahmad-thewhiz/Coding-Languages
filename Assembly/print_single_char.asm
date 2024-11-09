.model small
.stack 100h

.data
character db 'A'

.code
main:
    mov ax, @data     ; Initialize data segment
    mov ds, ax
    
    mov ah, 0x0E      ; BIOS teletype output function
    mov al, [character]    ; Load character from memory into AL
    int 0x10          ; Call BIOS to display the character
    
    mov ah, 0x4c      ; DOS terminate function
    int 0x21          ; Call DOS to exit
end main
