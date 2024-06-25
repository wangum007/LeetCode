
//You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

//Return the number of consistent strings in the array words.
	

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
	int i, j, k, ans = 0, allowed_len = 0;
	
	k = 0;
	while(allowed[k] != '\0'){
		allowed_len++;
		k++;
	}
	
	for(i = 0; i < wordsSize; i++){
		j = 0;
		while(words[i][j] != '\0'){
			k = 0;
			
			while(k < allowed_len){
				if(allowed[k] == words[i][j])
					break;
				
				k++;
			}
			
			if(k >= allowed_len)
				break;
			
			j++;
		}
		
		if(words[i][j] == '\0')
			ans++;
	}
	
	return ans;
}


