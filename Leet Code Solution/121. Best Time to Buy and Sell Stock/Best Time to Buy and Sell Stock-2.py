class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        imin = prices[0]
        profit = 0
        for i in prices:
            if i - imin > profit:
                profit =i-imin
            elif i < imin:
                imin = i
        return profit