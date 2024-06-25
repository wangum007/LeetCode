
//Given an integer n, return true if it is a power of four. Otherwise, return false.

//An integer n is a power of four, if there exists an integer x such that n == 4x.


bool isPowerOfFour(int n) {
    uint8_t i = 0;
	
	if(n < 1)
		return false;
	
	if(n & 0x2AAAAAAA)
		return false;
	
    if(n & (n - 1))
        return false;
    else
        return true;
}


