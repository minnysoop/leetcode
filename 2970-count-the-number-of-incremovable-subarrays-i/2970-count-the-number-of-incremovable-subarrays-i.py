class Solution(object):
    def incremovableSubarrayCount(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def isIncremovable(n):
            for i in range(1, len(n)):
                if n[i] <= n[i - 1]:
                    return False
            return True
        
        count = 0
        for i in range(len(nums)):
            for j in range(i, len(nums)):
                t = []
                for k in range(0, len(nums)):
                    if k < i or k > j:
                        t.append(nums[k])

                if isIncremovable(t):
                    count += 1

        return count

        
        