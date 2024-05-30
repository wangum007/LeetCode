
//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

//An input string is valid if:

//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.
//Every close bracket has a corresponding open bracket of the same type.
	
bool isValid(char* s) {
	int len = strlen(s);
	
	if(len % 2)
		return false;
	
    char para[6] = {'(', ')', '[', ']', '{', '}'};
	int cmp[6] = {1, -1, 2, -2, 3, -3};
	int store[len];
	int i = 0, tmp, store_c = -1;
	
	memset(store, 0, len);
	
	int str_cmp(char x){
		for(int i = 0; i < 6; i++){
			if(x == para[i])
				return i;
		}
		return -1;
	}
	
	while(s[i]){
		tmp = str_cmp(s[i]);
		
		if(cmp[tmp] > 0){
			store[store_c + 1] = cmp[tmp];
			store_c++;
			i++;
		}
		else{
			if(store_c < 0)
				return false;
			else{
				if((store[store_c] + cmp[tmp]) == 0){
					store_c--;
					i++;
				}
				else
					return false;
			}
		}
	}
	
	if(store_c == -1)
		return true;
	else
		return false;
}

