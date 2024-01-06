class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = len(nums)
        nums.sort()

        for i in range(0, len(nums) + 1):
            if i not in nums:
                return i
        
        return 0

        