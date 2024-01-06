class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        def mergeSort(k, l):
            if len(l) == 1:
                return k, l

            half = len(l) // 2
            kr = k[:half]
            kl = k[half:]
            lr = l[:half]
            ll = l[half:]
            p1, p1l = mergeSort(kr, lr)
            p2, p2l = mergeSort(kl, ll)

            return merge(p1, p2, p1l, p2l)

        def merge(k1, k2, l1, l2):
            ko = []
            lo = []

            l1_pointer = 0
            l2_pointer = 0
            while l1_pointer < len(l1) and l2_pointer < len(l2):
                if l1[l1_pointer] < l2[l2_pointer]:
                    lo.append(l1[l1_pointer])
                    ko.append(k1[l1_pointer])
                    l1_pointer += 1
                else:
                    lo.append(l2[l2_pointer])
                    ko.append(k2[l2_pointer])
                    l2_pointer += 1

            lo += l1[l1_pointer:]
            ko += k1[l1_pointer:]
            lo += l2[l2_pointer:]
            ko += k2[l2_pointer:]

            return ko, lo

        f = {}
        mx = 0
        for n in nums:
            if f.get(n) is not None:
                f[n] += 1
                if f[n] > mx:
                    mx = f[n]
            else:
                f[n] = 1

        l, v = mergeSort(list(f.keys()), list(f.values()))

        s = []
        while k > 0:
            s.append(l.pop())
            k -= 1

        return s
