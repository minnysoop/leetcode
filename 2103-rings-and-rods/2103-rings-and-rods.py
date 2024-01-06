class Solution(object):
    def countPoints(self, rings):
        """
        :type rings: str
        :rtype: int
        """
        c = {}

        for i in range(0, len(rings), 2):
            if c.get(rings[i + 1]) is None:
                c[rings[i+1]] = [rings[i]]
            else:
                c[rings[i+1]].append(rings[i])
        
        print(c)

        r = 0
        for i in list(c.keys()):
            if 'R' in c[i] and 'B' in c[i] and 'G' in c[i]:
                r += 1

        return r