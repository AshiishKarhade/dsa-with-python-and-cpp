# // add last
# // add first
# // remove first
# // remove last
# // size()

# //PROBLEMS
# // converting linked list to arrays
# // reversing linked list
# // kth node from end


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
        
    
    def add_first(self, value):
        temp = Node(value)
        if self.head==None:
            self.head = temp
            self.tail = temp
        else:
            temp.next = self.head
            self.head = temp

    def remove_first(self):
        if self.head == None:
            return
        else:
            self.head = self.head.next

    def remove_last(self):
        if self.head == None:
            return
        elif self.head == self.tail:
            self.remove_first()
        else:
            temp = self.head
            while(temp.next.next != None):
                temp = temp.next
            self.tail = temp
            self.tail.next = None

    def size(self):
        temp = self.head
        count = 0
        while temp != None:
            temp = temp.next
            count += 1
        return count

if __name__ == "__main__":
    sll = SinglyLinkedList()
    #sll.add_last(5)
    sll.add_last(10)
    sll.add_last(15)
    sll.add_first(5)

    sll.print()
    print(f"\nSize: {sll.size()}")
    print()
    sll.remove_last()
    sll.print()
    print(f"\nSize: {sll.size()}")
    print()