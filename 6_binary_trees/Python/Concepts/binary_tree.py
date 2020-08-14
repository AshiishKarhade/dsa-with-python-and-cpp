class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class BST:
    def __init__(self, root_val):
        self.root = Node(root_val)
    
    def insert(self, value):
        newnode = Node(value)
        if self.root==None:
            self.root = newnode
            return
        
        current = self.root
        while True:
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

    def find(self, value):
        current = self.root
        while(current != None):
            if value < current.value:
                current = current.left
            elif value > current.value:
                current = current.right
            else:
                return True
        return False


if __name__ == "__main__":
    bst = BST(7)
    bst.insert(10)
    bst.insert(3)
    bst.insert(5)

    print(bst.root.value)
    print(bst.root.left.value)
    print(bst.root.right.value)
    print(bst.root.left.right.value)

    print(bst.find(5))
    print(bst.find(23))