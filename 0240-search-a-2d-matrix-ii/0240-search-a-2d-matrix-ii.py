class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        def search(array, target):
            hi = len(array) - 1
            lo = 0
            mid = (hi + lo) // 2

            while lo <= hi:
                if array[mid] == target:
                    return True
                else:
                    if array[mid] > target:
                        hi = mid - 1
                    else:
                        lo = mid + 1
                    mid = (hi + lo) // 2
            return False
        
        for i in range(len(matrix)):
            if search(matrix[i], target):
                return True
        
        return False
        