class Solution(object):
    def numberGame(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        nums.sort()
        for i in range(0, len(nums), 2):
            t = nums[i]
            nums[i] = nums[i + 1]
            nums[i + 1] = t
        return nums
