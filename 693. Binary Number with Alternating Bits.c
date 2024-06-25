
//Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.


bool hasAlternatingBits(int n) {
	int i = 0, test_ = 0;
	
	test_ = n & 1;
	i++;
	
	while((n >> i) > 0){
		if(((n >> i) & 1) == test_)
			return false;
		else{
			test_ ^= 1;
		}
		
		i++;
	}
	
	return true;
}


