class Solution(object):
    def largestPerimeter(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        total_sum = sum(nums)
        n = len(nums)
        for i in range(n - 1, 1, -1):
            total_sum -= nums[i]
            if total_sum > nums[i]:
                return total_sum + nums[i]
        return -1