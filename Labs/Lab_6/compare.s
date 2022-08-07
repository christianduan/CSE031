	.data
n:	.word 25
str1: .asciiz "Less than\n" 
str2: .asciiz "Less than or equal to\n" 
str3: .asciiz "Greater than\n" 
str4: .asciiz "Greater than or equal to\n"

	.text
	li $v0, 5
	syscall
	move $s0, $v0
	
	la	$t3, n
	lw	$s1, 0($t3)
	
	#slt $t1, $s0, $s1
	sgt $t1, $s0, $s1
	bne $t1, $zero, GREAT
	beq $t1, $zero, LESSEQUAL
	
	
GREAT:
	li $v0, 4
	la $a0, str3
	syscall
	j END
	
#GREATEQUAL:
	#li $v0, 4
	#la $a0, str4
	#syscall
	#j END
	
#LESS:
	#li $v0, 4
	#la $a0, str1
	#syscall
	#j END

LESSEQUAL:
	li $v0, 4
	la $a0, str2
	syscall
	j END

END:
	li      $v0, 10	
	syscall
