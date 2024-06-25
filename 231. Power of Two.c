
//Given an integer n, return true if it is a power of two. Otherwise, return false.

//An integer n is a power of two, if there exists an integer x such that n == 2x.
	

bool isPowerOfTwo(int n) {
	uint8_t i = 0, j = 0;
	
	if(n <= 0)
		return false;

	while(i < 31){
		if((n >> i) & 1)
			j++;
		
		if(j > 1)
			return false;
		
		i++;
	}
	
	return true;
}



