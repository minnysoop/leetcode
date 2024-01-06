class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        d = {}
        for i in arr:
            if d.get(i) is not None:
                d[i] += 1
            else:
                d[i] = 1
        
        s = set(list(d.values()))
        
        return len(s) == len(d.values())
        