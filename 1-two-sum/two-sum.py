class Solution(object):
    def twoSum(self, nums, target):
        seen = {}  
        
        for i, value in enumerate(nums):
            remaining = target - value
            
            if remaining in seen:
                return [seen[remaining], i]
            
            seen[value] = i

        