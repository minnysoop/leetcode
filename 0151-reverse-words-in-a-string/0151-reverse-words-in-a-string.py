class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        w = []
        i = 0
        while i < len(s):
            if s[i] != " ":
                c = ""
                j = i
                while j < len(s):
                    if s[j] != " ":
                        c += s[j]
                        j += 1
                    else:
                        break
                w.append(c)
                i = j
            i += 1
        
        rl = []
        for i in range(len(w)-1, -1, -1):
            rl.append(w[i])
        
        r = ""
        for i in range(len(rl)):
            if i == len(rl) - 1:
                r += rl[i]
            else:
                r += rl[i]
                r += " "
        return r