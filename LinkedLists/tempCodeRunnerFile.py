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
    linked_list.delete(Node(2))
	## printing the linked list
	linked_list.display()
