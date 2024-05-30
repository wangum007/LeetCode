
//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

//Given a string s, return true if it is a palindrome, or false otherwise.

char test(char S){
	int t = S - 'A', t1 = S - '0';
		
	if((0 <= t) && (t <= 25))
		return S + 32;
	else if((32 <= t) && (t <= 57))
		return S;
	else{
		if((t1 >= 0) && (t1 <= 9))
			return S;
		else
			return '.';
	}	
}
bool isPalindrome(char* s) {
    int len = strlen(s), end = len - 1, start = 0;
	char a, b;
	
	if(s == NULL)
		return true;
	
	while(end > start){
		while(test(s[start]) == '.'){
			start++;
			
			if(start >= len)
				return true;
		}
			a = test(s[start]);
		
		while(test(s[end]) == '.'){
			end--;
			
//			if(end < 0)
//				return false;
		}
			b = test(s[end]);
		
		if(a != b)
			return false;
		else{
			start++;
			end--;
		}
	}
	
	return true;
}

