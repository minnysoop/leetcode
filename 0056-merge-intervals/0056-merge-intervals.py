class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        def sort_intervals(l):
            def merge_intervals(l1, l2):
                r = []
                p1 = 0
                p2 = 0
                while p1 < len(l1) and p2 < len(l2):
                    if l1[p1][0] > l2[p2][0]:
                        r.append(l2[p2])
                        p2 += 1
                    else:
                        r.append(l1[p1])
                        p1 += 1
                r += l1[p1:]
                r += l2[p2:]

                return r

            if len(l) == 1:
                return [l[0]]

            half = len(l) // 2
            a = sort_intervals(l[:half])
            b = sort_intervals(l[half:])
            return merge_intervals(a, b)

        intervals = sort_intervals(intervals)

        r = []
        i = 0
        while i < len(intervals):
            if i == 0:
                r.append(intervals[i])
            else:
                f = r[-1]
                s = intervals[i]
                if s[0] > f[1]:
                    r.append(s)
                else:
                    if f[1] < s[1]:
                        n = [f[0], s[1]]
                    else:
                        n = [f[0], f[1]]
                    r.pop()
                    r.append(n)
            i += 1
        return r
        