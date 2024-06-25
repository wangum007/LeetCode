
//Given two integers left and right, return the count of numbers in the inclusive range [left, right] having a prime number of set bits in their binary representation.

//Given a positive integer n, find and return the longest distance between any two adjacent 1's in the binary representation of n. If there are no two adjacent 1's, return 0.

//Two 1's are adjacent if there are only 0's separating them (possibly no 0's). The distance between two 1's is the absolute difference between their bit positions. For example, the two 1's in "1001" have a distance of 3.


int binaryGap(int n) {
    int gap = 0, ans = 0;
	
	while(n){
		if(n & 1){
			if(gap != 0){
				if(ans < gap){
					ans = gap;
					gap = 1;
				}
				else
					gap = 1;
			}
			else{
				gap++;
			}
		}
		else{
			if(gap != 0)
				gap++;
		}
		
		n >>= 1;
	}
	
	return ans;
}


