class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        v = "aeiou"
        a = 0
        for i in range(k):
            if s[i] in v:
                a += 1
        mxv = a
        strt = 1
        end = strt + k

        while end <= len(s):
            ns = s[strt:end]
            if s[strt-1] in v:
                a -= 1
            if ns[-1] in v:
                a += 1

            if a > mxv:
                mxv = a
            strt += 1
            end += 1
        
        return mxv