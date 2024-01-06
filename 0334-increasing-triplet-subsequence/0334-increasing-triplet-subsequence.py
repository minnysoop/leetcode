class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        sq = [float('inf'), float('inf'), float('inf')]
        for n in nums:
            if n <= sq[0]:
                sq[0] = n
            elif n <= sq[1]:
                sq[1] = n
            else:
                return True
        return False