
//Write a function that takes the binary representation of a positive integer and returns the number of 
//set bits
// it has (also known as the Hamming weight).


int hammingWeight(uint32_t n) {
    int ans = 0;

    while(n != 0){
        ans += n & 0x01;
        n = n >> 1;
    }

	return ans;
}

