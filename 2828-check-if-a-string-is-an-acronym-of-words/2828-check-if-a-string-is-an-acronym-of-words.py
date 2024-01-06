class Solution(object):
    def isAcronym(self, words, s):
        """
        :type words: List[str]
        :type s: str
        :rtype: bool
        """
        if len(words) != len(s):
            return False
        for i in range(len(words)):
            if words[i][0] != s[i]:
                return False
        return True
        