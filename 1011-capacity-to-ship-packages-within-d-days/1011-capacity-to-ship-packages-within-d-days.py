class Solution(object):
    def shipWithinDays(self, weights, days):
        """
        :type weights: List[int]
        :type days: int
        :rtype: int
        """
        low = max(weights)
        high = sum(weights)

        while low <= high:
            mid = (low + high)//2
            days_taken = 1
            current_sum = 0
            
            for i in weights:
                if current_sum + i > mid:
                    current_sum = i
                    days_taken += 1
                else:
                    current_sum += i
            
            if days_taken > days:
                low = mid + 1
            else:
                high = mid - 1
            
        return low


        

        


        