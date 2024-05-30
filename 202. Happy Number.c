
//Write an algorithm to determine if a number n is happy.

//A happy number is a number defined by the following process:

//Starting with any positive integer, replace the number by the sum of the squares of its digits.
//Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
//Those numbers for which this process ends in 1 are happy.
//Return true if n is a happy number, and false if not.


bool isHappy(int n) {
    int test = n, next = 0;
	bool test_[100] = {0};
	
	while(test != 1){
		while(test){
			next += pow(test % 10, 2);
			test /= 10;
		}
		
		if(next == 1)
			return true;
		else{ 
			if(next < 100){
				if(test_[next])
					return false;
				else
					test_[next] = 1;
			}
			test = next;
			next = 0;
		}
	}
	return true;
}

