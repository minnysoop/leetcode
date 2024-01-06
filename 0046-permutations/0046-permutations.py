class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        
        def search(nums, p=[], r=[]):
            if len(nums) == 0:
                r.append(p[::])
            for i in range(len(nums)):
                n = nums[:i] + nums[i+1:]
                p.append(nums[i])
                search(n, p, r)
                p.pop()
            return r

        return search(nums)