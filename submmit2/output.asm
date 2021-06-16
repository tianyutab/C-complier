extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
func:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov edx,dword [ebp-4]
	mov eax,1
	cmp edx,eax
	je T_1_1
	jmp T_1_2
	mov esp,ebp
	pop ebp
	ret
T_2:
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_3:
	mov ecx,1
	mov dword [ebp-4],ecx
	mov ecx,3
	mov dword [ebp-8],ecx
	mov eax,[ebp-4]
	push eax
	mov eax,[esp]
	mov [esp-12],eax
	call func
	mov edx,eax
	mov dword [ebp-12],edx
	mov ecx,edx
	mov eax,dword [ebp-12]
	call print
	mov esp,ebp
	pop ebp
	ret
section .data
	format db '输出:%d  ',0    ;set the form of int
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
T_1_1:
	mov ecx,1
	mov dword [ebp-8],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
	mov esp,ebp
	pop ebp
	ret
section .data
	format db '输出:%d  ',0    ;set the form of int
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
T_1_1:
	mov ecx,0
	mov dword [ebp-4],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
	mov edx,dword [ebp-4]
	mov eax,3
	cmp edx,eax
	jl T_1_1
	jmp T_1_2
T_1_1:
	mov ecx,0
	mov dword [ebp-8],ecx
extern printf
global main
print:
	push ebp
	mov ebp, esp
	push eax
	push format
	call printf  ; printf(format, 2)
	pop eax
	pop eax
	mov esp, ebp
	pop ebp
	ret
exit:
	mov esp,ebp
	pop ebp
	ret
main:
	push ebp
	mov ebp,esp
	sub esp,0x80
T_1:
	mov ecx,0
	mov dword [ebp-4],ecx
	mov edx,dword [ebp-4]
	mov eax,3
	cmp edx,eax
	jl T_1_1
	jmp T_1_2
T_1_1:
	mov ecx,0
	mov dword [ebp-8],ecx
	mov eax,dword [ebp-4]
	add eax,1
	mov edx,eax
	mov dword [ebp-4],edx
	mov edx,dword [ebp-4]
	mov eax,3
	cmp edx,eax
	jl T_1_1
	jmp T_1_2
T_1_2:
