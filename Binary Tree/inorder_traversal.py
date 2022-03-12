'''
# Inorder traversal
# Left -> Root -> Right
'''
class Node:
    def __init__(self,data):
        self.data = data
        self.right = None
        self.left = None
    
    def insert(self,data):
        if self.data:
            if data < self.data:
                if self.left:
                    self.left.insert(data)
                else:
                    self.left = Node(data)
            elif data > self.data:
                if self.right:
                    self.right.insert(data)
                else:
                    self.right = Node(data)
        else:
            self.data = data
    
    def printtree(self):
        if self.left:
            self.left.printtree()
        print(self.data)

        if self.right:
            self.right.printtree()

    def inorderTraversal(self,root):
        res = []
        if root:
            res = self.inorderTraversal(root.left)
            res.append(root.data) 
            res = res + self.inorderTraversal(root.right)
        return res

root = Node(12)
root.insert(11)
root.insert(9)
root.insert(44)
root.insert(2)
root.printtree()
print(root.inorderTraversal(root))
