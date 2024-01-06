class Solution(object):
    def maximumGap(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) < 2:
            return 0
        
        nums.sort()
        mx = 0
        current = nums[0]
        for i in range(1, len(nums)):
            if nums[i] - current > mx:
                mx = nums[i] - current
            current = nums[i]
        
        return mx
            