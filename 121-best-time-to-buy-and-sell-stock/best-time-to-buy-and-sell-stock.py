class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0 #buying
        r = 1 #selling
        maxProfit = 0

        while r<len(prices):
            if prices[l] < prices[r]:
                profit = prices[r] - prices[l]
                maxProfit = max(maxProfit,profit)
            else:
                l = r
            r+=1 
        return maxProfit


        