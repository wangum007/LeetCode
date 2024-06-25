
//Given an integer num, return the number of steps to reduce it to zero.

//In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
	

int numberOfSteps(int num) {
    int i = 0, ans = 0;
	
	while((num >> i) > 0){
		if((num >> i) & 1){
			if((num >> i) == 1)
				ans++;
			else
				ans += 2;
		}
		else
			ans++;
			
		i++;
	}
	
	return ans; 
}


