
//Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

//For example:

//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28 
//...


int get_len(int x){
	int rt = 1;
	
	x -= 1;
	while(x / 26){
		rt++;
		x /= 26;
		x -= 1;
	}
	
	return rt;
}
char* convertToTitle(int columnNumber) {
	char* ans;
	int len = get_len(columnNumber);
	
	ans = malloc((len + 1) * sizeof(char));
	ans[len] = '\0';
	
	columnNumber -= 1;
	for(int i = 1; i <= len; i++){
		ans[len - i] = (columnNumber % 26) + 'A';
		columnNumber /= 26;
		columnNumber -= 1;
	}
	
	return ans;
}

