class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        if len(nums) == 0:
            return 0

        t = []
        lc = 0
        for i in range(len(nums)):
            if len(t) == 0:
                t.append(nums[i])
            else:
                if t[-1] + 1 == nums[i]:
                    t.append(nums[i])
                elif t[-1] == nums[i]:
                    continue
                else:
                    if len(t) > lc:
                        lc = len(t)
                    t = [nums[i]]

        if len(t) > lc:
            lc = len(t)

        return lc