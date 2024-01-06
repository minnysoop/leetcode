class Solution(object):
    def maxOperations(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        nums.sort()
        p1 = 0
        p2 = len(nums) - 1
        c = 0
        while p1 < p2:
            if nums[p1] + nums[p2] == k:
                c += 1
                p1 += 1
                p2 -= 1
            elif nums[p1] + nums[p2] < k:
                p1 += 1
            else:
                p2 -= 1
        return c

        