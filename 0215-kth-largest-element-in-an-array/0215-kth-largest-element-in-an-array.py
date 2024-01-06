class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        d = {}
        for i in nums:
            if d.get(i) is None:
                d[i] = 1
            else:
                d[i] += 1


        l = list(d.keys())
        mx = max(l)
        mn = min(l)

        c = 0
        while mn <= mx:
            if mx in l:
                while d[mx] > 0:
                    d[mx] -= 1
                    c += 1

                    if c == k:
                        return mx
            mx -= 1
            

        return 0
            

            
        