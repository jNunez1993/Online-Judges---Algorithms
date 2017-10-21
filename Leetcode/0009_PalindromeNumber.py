#https://leetcode.com/problems/palindrome-number/description/
class Solution(object):

    def isPalindrome(self, x):
       
        if x < 0 or (x != 0 and x%10==0):
            return False
        
        current_number = 0
        
        while x > current_number:
            last_digit = x % 10
            x/=10
            current_number = current_number * 10 + last_digit
        
        return (x == current_number or x == current_number / 10)
        
        
        
