class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        s = s.split()
        if len(s) != len(pattern):
            return False

        assigned = []
        p = {}
        for i in range(len(pattern)):
            if p.get(pattern[i]) is None:
                if s[i] in assigned:
                    return False
                else:
                    p[pattern[i]] = s[i]
                    assigned.append(s[i])
            else:
                if p[pattern[i]] != s[i]:
                    return False
        
        return True
                

        