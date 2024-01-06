class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        def gcd(a, b):
            r = min(a,b)
            while r > 0:
                if a % r == 0 and b % r == 0:
                    return r
                r -= 1
            return r


        if str1 + str2 != str2 + str1:
            return ""
        mx = str1[:gcd(len(str1),len(str2))]
        
        return mx