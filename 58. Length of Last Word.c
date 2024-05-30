
//Given a string s consisting of words and spaces, return the length of the last word in the string.

//A word is a maximal 
//substring
// consisting of non-space characters only.


int lengthOfLastWord(char* s) {
    int c = strlen(s) - 1, ans = 0;
	
	while(s[c] == ' '){
		c--;
	}
	
	while(s[c] != ' '){
		if(!c){
			ans++;
			break;
		}
		else{
			ans++;
			c--;
		}
	}
	
	return ans;
}

