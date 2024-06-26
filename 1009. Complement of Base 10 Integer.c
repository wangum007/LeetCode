
//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

//For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
//Given an integer n, return its complement.
	

int bitwiseComplement(int n) {
    int i = 0, ans = 0;
	
	if(!n)
		return 1;
	
	while((n >> i) > 0){
		if(!((n >> i) & 1))
			ans |= 1 << i;
			
		i++;
	}
	
	return ans;
}


