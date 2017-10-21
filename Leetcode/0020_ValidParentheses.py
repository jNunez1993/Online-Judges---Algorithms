#https://leetcode.com/problems/valid-parentheses/description/
class Solution(object):
    def isValid(self, s):
        if len(s) == 0 or len(s) == 1:
            return False
        
        mapping = { ")":"(", "]": "[", "}":"{"}
        stack = []
        stack.append(s[0])
        for i in xrange(1,len(s)):
            parens = s[i]
            if parens == "(" or parens == "[" or parens == "{":
                stack.append(parens)
            else:
                if len(stack) == 0:
                    return False
                e = stack.pop()
                if mapping[parens] != e:
                    return False
                
        return len(stack) == 0 
            
            
