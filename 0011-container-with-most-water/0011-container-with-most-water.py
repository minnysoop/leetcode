class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        mx = 0
        lp = 0
        rp = len(height) - 1
        while lp != rp:
            if height[lp] < height[rp]:
                ta = height[lp] * (rp - lp)
                if ta > mx:
                    mx = ta
            else:
                ta = height[rp] * (rp - lp)
                if ta > mx:
                    mx = ta

            if height[lp] > height[rp]:
                rp -= 1
            else:
                lp += 1

        return mx
        