class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        p1 = 0
        p2 = 0
        s = ""
        while p1 < len(word1) and p2 < len(word2):
            s += word1[p1]
            p1 += 1
            s += word2[p2]
            p2 += 1
        s += word1[p1:]
        s += word2[p2:]
        return s
        
        