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
        if self.front == None:
            self.front = temp
            self.back = temp
            self.size = 1
        else:
            self.back.next = temp
            self.back = self.back.next
            self.size += 1

    def pop(self):
        if self.front == None:
            return
        else:
            last = self.front.value
            self.front = self.front.next
            self.size -= 1
            return last

    def get_size(self):
        return self.size
    
    def is_empty(self):
        if self.size <= 0:
            return True
        else:
            return False
    
    def print_queue(self):
        temp = self.front
        while(temp != None):
            print(temp.value, end=" ")
            temp = temp.next
        print()

if __name__ == "__main__":
    q = Queue()
    q.push(5)
    q.push(10)
    q.push(15)
    q.push(20)

    q.print_queue()
    print(q.get_size())
    q.pop()
    q.print_queue()
    print(q.get_size())
            


    