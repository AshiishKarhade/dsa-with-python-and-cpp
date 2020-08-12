class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Stacks:
    def __init__(self):
        self.top = None
        self.size = 0
    
    def push(value):
        temp = Node(value)
        if top == None:
            top = temp
            self.size = 1
        else:
            temp.next = self.top
            self.top = temp
            self.size += 1
    
    def peek():
        if top != None:
            return self.top.value
        else:
            return 0

    def pop():
        last = self.peek()
        if top == None:
            return
        else:
            self.top = self.top.next
            self.size -= 1
        return last
    
    def is_empty():
        if self.peek() <= 0:
            return True
        else:
            return False

if __name__ == "__main":
    pass
