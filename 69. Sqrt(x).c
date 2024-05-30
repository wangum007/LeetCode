
//Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

//You must not use any built-in exponent function or operator.

//For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.


int mySqrt(int x) {
    int c = 0, i;
	long test = 0;
	
	i = 0;
	while(x >> i){
		i++;
		c++;
	}
	
	test = 1 << ((c - 1) / 2);
	
	while((test * test) <= x){
		test++;
	}
	
	return test - 1;
}

