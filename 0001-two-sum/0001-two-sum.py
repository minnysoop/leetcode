class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = {} # val : index
        for i in range(len(nums)):
            v = target - nums[i]
            if d.get(v) is not None:
                return [d[v], i]
            d[nums[i]] = i
        return
        