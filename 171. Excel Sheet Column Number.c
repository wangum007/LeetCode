
//Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

//For example:

//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28 
//...


int power_26(int x){
	int rt = 1;
	while(x){
		rt *= 26;
		x--;
	}
	return rt;
}
int titleToNumber(char* columnTitle) {
    int len = strlen(columnTitle), ans = 0;
	
	for(int i = 0; i < len; i++){
		ans += (columnTitle[len - 1 - i] - 'A' + 1) * power_26(i);
	}
	
	return ans;
}

