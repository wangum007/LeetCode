
//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?


int P_ab(int a, int b){
	if(b < a)
		return P_ab(b, a);
	if(!a)
		return 1;
	
	int  s = a + b, p = a;
	long up = 1, down = 1;
	
	for(int i = 0; i < p; i++){
		up *= s;
		s--;
		
		if(!(up % (i + 1))){
			up /= (i + 1);
		}
		else{
			down *= (i + 1);
		}
	}
	
	return up / down;
}
int climbStairs(int n) {
	if(n == 1)
		return 1;
			
	int i = 0, ans = 0;
	
	while(n >= 0){
		ans += P_ab(n, i);
		i++;
		n -= 2;
	}
	
	return ans;
}

