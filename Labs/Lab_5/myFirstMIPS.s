	.data
	.word
	
	.text
main:	add $t0, $s0, $zero
	addi $t1, $t0, -1
	add $t2, $t1, $t0
	addi $t3, $t2, -3
	add $t4, $t3, $t2
	addi $t5, $t4, -5
	add $t6, $t5, $t4
	addi $t7, $t6, -7

finish: addi    $a0, $t7, 0
		li      $v0, 1	#You will be asked about what is the purpose of this line for syscall 
		syscall			
		li      $v0, 10		
		syscall	
