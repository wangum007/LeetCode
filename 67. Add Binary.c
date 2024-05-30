
//Given two binary strings a and b, return their sum as a binary string.


char* addBinary(char* a, char* b) {
	int len_a = strlen(a), len_b = strlen(b), hold = 0, i, j, k;
	char* ans;
	int x = len_a > len_b ? len_a : len_b;
	int tmp[x];
	
//	memset(tmp, 0, x);
	for(i = 0; i < x; i++){
		tmp[i] = 0;
	}
	
	i = x - 1;
	j = len_a - 1;
	k = len_b - 1;
	while((j >= 0) || (k >= 0)){
		if(j >= 0){
			tmp[i] += a[j] - '0';
			j--;
		}
		
		if(k >= 0){
			tmp[i] += b[k] - '0';
			k--;
		}
		
		i--;
	}
	
	
	for(i = x - 1; i >= 0; i--){
		tmp[i] += hold;
		hold = 0;
		
		if(tmp[i] >= 2){
			tmp[i] -= 2;
			hold = 1;
		}
	}
	
	if(hold){
		ans = malloc((x + 2) * sizeof(int));
		ans[x + 1] = '\0';
		ans[0] = '1';
		
		for(i = 1; i < x + 1; i++){
			ans[i] = '0' + tmp[i - 1];
		}
	}
	else{
		ans = malloc((x + 1) * sizeof(int));
		ans[x] = '\0';
		
		for(i = 0; i < x; i++){
			ans[i] = '0' + tmp[i];
		}
	}

	return ans;
}

