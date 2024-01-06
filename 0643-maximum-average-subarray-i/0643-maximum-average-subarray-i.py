class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """

        p1 = 0
        p2 = k
        a = 0.0
        for i in range(k):
            a += float(nums[i])/k
        mx = a
        while p2 < len(nums):
            a -= float(nums[p1]) / k
            a += float(nums[p2]) / k
            mx = max(mx, a)
            p2 += 1
            p1 += 1
        
        return mx