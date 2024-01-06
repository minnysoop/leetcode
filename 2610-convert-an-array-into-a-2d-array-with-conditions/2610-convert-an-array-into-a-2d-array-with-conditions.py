class Solution(object):
    def findMatrix(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        m = [[]]
        for i in range(len(nums)):
            p = False
            for j in m:
                if nums[i] not in j:
                    j.append(nums[i])
                    p = True
                    break
            if not p:
                m.append([nums[i]])

        return m