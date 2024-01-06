class Solution(object):
    def intervalIntersection(self, firstList, secondList):
        """
        :type firstList: List[List[int]]
        :type secondList: List[List[int]]
        :rtype: List[List[int]]
        """
        p1 = 0
        p2 = 0
        result = []
        while p1 < len(firstList) and p2 < len(secondList):
            a = firstList[p1]
            b = secondList[p2]
            if (b[0] >= a[0] and b[0] <= a[1]) or (a[0] >= b[0] and a[0] <= b[1]):
                result.append([max(a[0], b[0]), min(a[1], b[1])])
            
            if a[1] > b[1]:
                p2 += 1
            else:
                p1 += 1
        return result
