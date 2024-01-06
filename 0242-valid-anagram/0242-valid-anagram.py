class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        f = {}
        for i in s:
            if f.get(i):
                f[i] += 1
            else:
                f[i] = 1

        for i in t:
            if f.get(i):
                f[i] -= 1
            else:
                f[i] = 1

        for i in f:
            if f.get(i) != 0:
                return False

        return True