	.data
question: .asciiz "Please enter a number: "
evensum: .asciiz "\nSum of even numbers: "
oddsum: .asciiz "\nSum of odd numbers: "

	.text
MAIN:
	li $v0, 4
	la $a0, question
	syscall
	
	li $v0, 5
	syscall
	move $s0, $v0
	
	beq $s0, $0, EXIT
	srl $t1, $s0, 1
	sll $t2, $t1, 1
	
	bne $t2, $s0, ODD
	
EVEN:
	add $t3, $t3, $s0
	j MAIN
	
ODD: 
	add $t4, $t4, $s0
	j MAIN
EXIT:
	li $v0, 4
	la $a0, evensum
	syscall
	li $v0, 1
	move $a0, $t3
	syscall
	
	li $v0, 4
	la $a0, oddsum
	syscall
	li $v0, 1
	move $a0, $t4
	syscall
	
	li $v0, 10
	syscall
	