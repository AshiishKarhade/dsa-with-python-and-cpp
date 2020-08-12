class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Stacks:
    def __init__(self):
        self.top = None
        self.size = 0
    
    def push(self, val):
        temp = Node(val)
        if self.top == None:
            self.top = temp
            self.size = 1
        else:
            temp.next = self.top
            self.top = temp
            self.size += 1
    
    def peek(self):
        if self.top != None:
            return self.top.value
        else:
            return 0

    def pop(self):
        last = self.peek()
        if self.top == None:
            return
        else:
            self.top = self.top.next
            self.size -= 1
        return last
    
    def is_empty(self):
        if self.peek() <= 0:
            return True
        else:
            return False

    def print(self):
        temp = self.top
        while(temp != None):
            print(temp.value, end=" ")
            temp = temp.next
        print()
        

if __name__ == "__main__":
    st = Stacks()
    st.push(5)
    st.push(10)
    st.print()