class Solution(object):
    def beautifulSubstrings(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        def beautiful(vc, cc):
            if vc == cc and (vc * cc) % k == 0:
                return True
            return False
        
        count = 0
        v = "aeiou"
        for i in range(0, len(s)):
            vc = 0
            cc = 0
            for j in range(i, len(s)):
                if s[j] in v:
                    vc += 1
                else:
                    cc += 1
                if beautiful(vc, cc):
                    count += 1
        return count

        