class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        r = []
        mx = max(candies)
        for i in range(len(candies)):
            if candies[i] + extraCandies >= mx:
                r.append(True)
            else:
                r.append(False)
        return r