class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
    
class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, node):
        if self.head:
            last = self.head
            while last.next != None:
                last = last.next
            
            last.next = node
        else:
            self.head = node
        
    def display(self):
        temp = self.head
        while(temp!=None):
            print(temp.data, end=" -> ")
            temp = temp.next
        
        print("Null")
    
    def delete(self, node):
        temp = self.head

        # If head node itself holds the key to be deleted
        if (temp is not None):
            if (temp.data == node.data):
                self.head = temp.next
                temp = None
                return

        # Search for the key to be deleted, keep track of the
        # previous node as we need to change 'prev.next'
        while(temp is not None):
            if temp.data == node.data:
                break
            prev = temp
            temp = temp.next

        # if key was not present in linked list
        if(temp == None):
            return

        # Unlink the node from linked list
        prev.next = temp.next

        temp = None


if __name__ == '__main__':
    ## instantiating the linked list
    linked_list = LinkedList()

    ## inserting the data into the linked list
    linked_list.insert(Node(1))
    linked_list.insert(Node(2))
    linked_list.insert(Node(3))
    linked_list.insert(Node(4))
    linked_list.insert(Node(5))
    linked_list.insert(Node(6))
    linked_list.insert(Node(7))
    linked_list.delete(Node(6))
    ## printing the linked list
    linked_list.display()
