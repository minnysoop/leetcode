"""
   This is the custom function interface.
   You should not implement it, or speculate about its implementation
   class CustomFunction:
       # Returns f(x, y) for any given positive integers x and y.
       # Note that f(x, y) is increasing with respect to both x and y.
       # i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
       def f(self, x, y):
  
"""

class Solution(object):
    def findSolution(self, customfunction, z):
        """
        :type num: int
        :type z: int
        :rtype: List[List[int]]
        """
        x, y, r = 1000, 1, []

        while x >= 1 and y <= 1000:
            if customfunction.f(x, y) < z:
                y += 1
            elif customfunction.f(x, y) > z:
                x -= 1
            elif customfunction.f(x, y) == z:
                r.append([x, y])
                x -= 1
                y += 1
        return r
        