class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Queue:
    def __init__(self):
        self.front = None
        self.back = None
        self.size = -1
    
    # PUSHES to Back of linked list
    # i.e pushes from the tail or back of LL
    def push(self, value):
        temp = Node(value)
        if self.front = None:
            self.front = temp
            self.back = temp
            self.size = 1
        else:
            self.back.next = temp
            self.back = self.back.next
            self.size += 1

    def pop(self):
        if self.front = None:
            return
        else:
            last = self.front.value
            self.front = self.front.next
            return last

if __name == "__main__":
    q = Queue()
    q.push(5)
    q.push(10)
    q.push(15)
    q.push(20)
            


    