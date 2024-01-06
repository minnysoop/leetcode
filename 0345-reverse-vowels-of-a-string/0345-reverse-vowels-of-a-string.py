class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        v = "aeiouAEIOU"
        s = list(s)
        start = 0
        end = len(s) - 1
        while start < end:
            if s[start] in v and s[end] in v:
                s[start], s[end] = s[end], s[start]
                end -= 1
                start += 1
            elif s[start] in v:
                end -= 1
            elif s[end] in v:
                start += 1
            else:
                end -= 1
                start += 1
        
        r = ""
        for i in s:
            r += i
        return r
        