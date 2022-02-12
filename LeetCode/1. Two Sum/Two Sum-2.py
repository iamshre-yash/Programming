class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numbers = {}
        for i, num in enumerate(nums):
            if target - num in numbers:
                return(numbers[target - num],i)
            elif num not in numbers:
                numbers[num] = i
                
                
                           
        