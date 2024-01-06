class Solution(object):
    def areOccurrencesEqual(self, s):
        """
        :type s: str
        :rtype: bool
        """
        c = {}
        for i in s:
            if c.get(i) is None:
                c[i] = 1
            else:
                c[i] += 1
        
        f = c[list(c.keys())[0]]
        for i in c:
            if c[i] != f:
                return False

        return True
        