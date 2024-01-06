class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        carry = 0
        if digits[len(digits)-1] < 9:
            digits[len(digits)-1] += 1
        else:
            if len(digits) == 1:
                return [1, 0]
            else:
                digits[len(digits)-1] = 0
                carry = 1

        pointer = len(digits) - 2
        while pointer >= 0:
            if digits[pointer] + carry < 10:
                digits[pointer] += carry
                carry = 0
                break
            else:
                digits[pointer] = 0
            pointer -= 1

        if carry:
            return [1] + digits

        return digits