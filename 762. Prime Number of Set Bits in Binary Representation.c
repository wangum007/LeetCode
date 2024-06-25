
//Given two integers left and right, return the count of numbers in the inclusive range [left, right] having a prime number of set bits in their binary representation.

//Recall that the number of set bits an integer has is the number of 1's present when written in binary.

//For example, 21 written in binary is 10101, which has 3 set bits.


int count_1s(int n){
	int rt = 0;
	
	while(n){
		rt++;
		n &= (n - 1);
	}
	
	return rt;
}
int countPrimeSetBits(int left, int right) {
    uint8_t map_[22] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0
	, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0};	//right <= 10^6, just need 21 bit, 1 no more than 21
	int ans = 0, i;
	
	for(i = left; i <= right; i++){
		if(map_[count_1s(i)])
			ans++;
	}
	
	return ans;
}


