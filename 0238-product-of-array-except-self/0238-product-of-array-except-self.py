class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        o = []
        pre = 1
        for i in range(0, len(nums)):
            o.append(pre)
            pre *= nums[i]

        post = 1
        for i in range(len(nums) - 1, -1, -1):
            o[i] *= post
            post *= nums[i]
        return o