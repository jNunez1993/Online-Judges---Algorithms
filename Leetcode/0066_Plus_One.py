class Solution:
    def plusOne(self, digits):
        k = int("".join([str(d) for d in digits]))
        k += 1
        return [int(d) for d in str(k)]
        
