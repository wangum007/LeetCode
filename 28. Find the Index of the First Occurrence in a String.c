
//Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
	
int strStr(char* haystack, char* needle) {
	int ans = 0, len_h = strlen(haystack), len_n = strlen(needle);
	int i, j, rt = 0;
	
	for(i = 0; i <= len_h - len_n; i++){
		rt = 1;
		for(j = 0; j < len_n; j++){
			if(haystack[i + j] != needle[j]){
				rt = 0;
				break;
			}
		}
		
		if(rt)
			return ans;
		else
			ans++;
	}
	
	return -1;
}

