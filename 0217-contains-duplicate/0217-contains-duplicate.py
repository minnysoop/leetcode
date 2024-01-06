
class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        d = {}
        for i in range(0, len(nums)):
            if d.get(nums[i]):
                return True
            else:
                d[nums[i]] = 1
        return False