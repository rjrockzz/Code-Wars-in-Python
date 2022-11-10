# Adjacent Duplicacy commonly points towards stacks, where we can peek to the top most element, do the computations and return the result
class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack = []
        for i in s:
            if stack and i ==stack[-1]:
                stack.pop()
            else:
                stack.append(i)
        return "".join(stack)