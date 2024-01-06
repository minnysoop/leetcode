class Solution(object):
    def sortPeople(self, names, heights):
        """
        :type names: List[str]
        :type heights: List[int]
        :rtype: List[str]
        """
        h = {}
        for i in range(len(heights)):
            h[heights[i]] = i
        
        n = []
        sorted_heights = list(h.keys())
        sorted_heights.sort()
        for i in range(len(sorted_heights)-1,-1,-1):
            n.append(names[h[sorted_heights[i]]])
        
        return n
        
