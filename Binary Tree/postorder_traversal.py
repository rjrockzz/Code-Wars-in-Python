'''
 PostOrder traversal
 Left ->Right -> Root
'''


class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def insert(self, data):
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

    def printTree(self):
        if self.left:
            self.left.printTree()
        print(self.data)
        if(self.right):
            self.right.printTree()

    def PostorderTraversal(self, root):
        res = []
        if root:
            res.append(root.data)
            res = res + self.PostorderTraversal(root.left)
            res = res + self.PostorderTraversal(root.right)
        return res


root = Node(12)
root.insert(55)
root.insert(1)
root.insert(3)
root.printTree()
print(root.PostorderTraversal(root))
