class Solution(object):
    def validateStackSequences(self, pushed, popped):
        """
        :type pushed: List[int]
        :type popped: List[int]
        :rtype: bool
        """
        
        ans = True
        stack = []
        start = 0
        
        for idx, item in enumerate(popped):
            end = pushed.index(item) + 1
            if end > start:
                stack.extend(pushed[start:end])
                # print(start, end)
                start = end
                stack.pop()
            else:
                out = stack.pop()
                # print('o', out)
                # print('i', item)
                if out != item:
                    # print('in')
                    ans = False
                    # print('a', ans)
                    break
        return ans
            
                    
                
        
        