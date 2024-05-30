
//Write a function to find the longest common prefix string amongst an array of strings.

//If there is no common prefix, return an empty string "".
	
char* longestCommonPrefix(char** strs, int strsSize) {
    int cmp_size = 0, i, j, rt_size = 0, out = 0;
	char* ans;
	
	i = 0;
	while(strs[0][i]){
		i++;
	}
	cmp_size = i;
	
	for(j = 0; j < cmp_size; j++){
		for(i = 1; i < strsSize; i++){
			if(strs[0][j] != strs[i][j]){
				out = 1;
				break;
			}
		}
		
		if(out)
			break;
		else{
			rt_size++;
		}
	}
	
	
	ans = malloc((rt_size + 1) * sizeof(char));
	
	for(i = 0; i < rt_size; i++){
		ans[i] = strs[0][i];
	}
	ans[rt_size] = '\0';
	
	return ans;
}

