class Solution(object):
    def findErrorNums(self, nums):
        n = len(nums)
        seen=set()
        duplicate = -1

        for x in nums:
            if x in seen:
                duplicate = x
            else:
                seen.add(x)
        for i in range(1,n+1):
            if i not in seen:
                missing = i
                break

        return [duplicate,missing]


