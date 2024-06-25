
//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

//Given two integers x and y, return the Hamming distance between them.


int count1(int x){
    int rt = 0;
    while(x){
        x &= (x - 1);
        rt++;
    }
    return rt;
}
int hammingDistance(int x, int y) {
	return count1(x ^ y);
}


