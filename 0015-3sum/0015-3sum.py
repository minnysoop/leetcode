class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        s = []
        nums.sort()
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            p1 = i + 1
            p2 = len(nums) - 1
            while p1 < p2:
                ts = nums[i] + nums[p1] + nums[p2]
                if ts > 0:
                    p2 -= 1
                elif ts < 0:
                    p1 += 1
                else:
                    s.append([nums[i], nums[p1], nums[p2]])
                    p1 += 1
                    while nums[p1] == nums[p1 - 1] and p1 < p2:
                        p1 += 1
        return s