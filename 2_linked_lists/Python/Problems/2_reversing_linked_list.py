# REVERSING A LINKED LIST IN PYTHON

class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def add_last(self, value):
        temp = Node(value)
        if self.head==None:
            self.head = temp
            self.tail = temp
        else:
            self.tail.next = temp
            self.tail = self.tail.next
    
    def print(self):
        temp = self.head
        while(temp != None):
            print(temp.value, end=" ")
            temp = temp.next
        print()

    def reverse(self):
        prev = self.head
        curr = self.head.next
        while(curr != None):
            next = curr.next
            curr.next = prev
            prev = curr
            curr = next
        self.tail = self.head
        self.tail.next = None
        self.head = prev

if __name__ == "__main__":
    sll = SinglyLinkedList()
    sll.add_last(5)
    sll.add_last(10)
    sll.add_last(15)
    sll.add_last(20)
    sll.add_last(25)

    sll.print()
    sll.reverse()
    sll.print()


