class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price , max_profit = float('inf'),0
        for price in prices:
            max_profit_sell_today = price - min_price
            max_profit = max(max_profit, max_profit_sell_today)
            min_price = min(min_price, price)
        return max_profit
