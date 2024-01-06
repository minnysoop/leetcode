class Solution(object):
    def numberGame(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        r = []
        t = len(nums) // 2
        i = 0
        while (i < t):
            a = min(nums)
            nums.remove(a)
            b = min(nums)
            nums.remove(b)
            r.append(b)
            r.append(a)
            i += 1
        return r