class Solution(object):
    def compress(self, chars):
        """
        :type chars: List[str]
        :rtype: int
        """
        s = ""
        crnt = chars[0]
        grp = 1
        for i in range(1, len(chars)):
            if chars[i] == crnt:
                grp += 1
            else:
                if grp == 1:
                    s += crnt
                else:
                    s += crnt
                    s += str(grp)
                crnt = chars[i]
                grp = 1
        
        if grp == 1:
            s += crnt
        else:
            s += crnt
            s += str(grp)
        
        for i in range(len(s)):
            chars[i] = list(s)[i]
        return len(chars[:len(s)])