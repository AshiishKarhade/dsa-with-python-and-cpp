class Node:
    def __init__(self, value=None):
        self.value = value
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None
    
    def insert(self, value):
        newnode = Node(value)
        if self.root == None:
            self.root = newnode
            return
        current = self.root
        while(True):
            if value < current.value:
                if current.left == None:
                    current.left = newnode
                    break
                current = current.left
            else:
                if current.right == None:
                    current.right = newnode
                    break
                current = current.right

    def pre_order(self, root):
        if root == None:
            return
        print(root.value, end=" ")
        self.pre_order(root.left)
        self.pre_order(root.right)

if __name__ == "__main__":
    bst = BST()
    bst.insert(7)
    bst.insert(10)
    bst.insert(3)
    bst.insert(5)

    bst.pre_order(bst.root)