
//Given an integer x, return true if x is a palindrome, and false otherwise.
	
int count_10(int x){
	int rt = 0;
	while(x){
		rt++;
		x /= 10;
	}
	return rt;
}
bool isPalindrome(int x) {
	if(x < 0)
		return false;
	
	if(x < 10)
		return true;
	
    int c = count_10(x), i;
	int a[c];
	int b[c];
	
	for(i = 0; i < c; i++){
		a[i] = x % 10;
		b[c - 1 - i] = x % 10;
		x /= 10;
	}
	
	for(i = 0; i < c; i++){
		if(a[i] != b[i])
			return false;
	}
	
	return true;
}

