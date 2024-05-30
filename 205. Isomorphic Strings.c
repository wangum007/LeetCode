
//Given two strings s and t, determine if they are isomorphic.

//Two strings s and t are isomorphic if the characters in s can be replaced to get t.

//All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.


bool isIsomorphic(char* s, char* t) {
	int len = strlen(s), i, j;
//	struct chk{
//		char t;
//		bool chk;
//	};
//	struct chk C[len];
//	char x;
	bool chk[len];
	
//	for(i = 0; i < len; i++){
//		C[i].t = t[i];
//		C[i].chk = 0;
//	}
	for(i = 0; i < len; i++){
		chk[i] = 0;
	}
	
	for(i = 0; i < len; i++){
//		x = s[i];
		if(chk[i])
			continue;
		
		chk[i] = 1;
		
		for(j = i; j < len; j++){
			if(s[i] == s[j]){
				if(t[i] == t[j])
					chk[j] = 1;
				else
					return false;
			}
			else if(t[i] == t[j])
				return false;
		}
	}
	
	return true;
}

