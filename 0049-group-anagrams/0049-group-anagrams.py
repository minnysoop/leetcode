class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        r = {}
        for w in strs:
            count = [0] * 26
            for l in w:
                count[ord(l) - ord("a")] += 1

            if r.get(tuple(count)) is not None:
                r[tuple(count)].append(w)
            else:
                r[tuple(count)] = [w]

        return list(r.values())
        
