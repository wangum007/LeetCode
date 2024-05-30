
//You are given an array prices where prices[i] is the price of a given stock on the ith day.

//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

int maxProfit(int* prices, int pricesSize) {
	int i, ans = 0, low = prices[0];
	
	for(i = 0; i < pricesSize; i++){
		if(prices[i] < low)
			low = prices[i];
		else{
			if((prices[i] - low) > ans)
				ans = (prices[i] - low);
		}
	}
	
	return ans;
}

