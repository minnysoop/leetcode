class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        l1 = set()
        for i in nums1:
            if i not in nums2:
                l1.add(i)
        
        l2 = set()
        for i in nums2:
            if i not in nums1:
                l2.add(i)
                
            
        return [l1,l2]