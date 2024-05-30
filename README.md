# README for Linked List Operations in C

This C program implements various types of linked lists and allows for basic operations such as insertion, deletion, and display. The types of linked lists covered are:

- Singly Linked List
- Circular Linked List (CLL)
- Doubly Linked List (DLL)
- Circular Doubly Linked List (CDLL)

The program provides a menu-driven interface for interacting with each type of linked list.

## Structure Definition

The node structure for the linked list is defined as follows:

```c
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
```

## Global Variables

```c
struct node *head = NULL; // Head pointer for the linked list
```

## Function Prototypes

```c
void ins_cll(int e);
void cldisp();
void del_cll(int e);
void ins_dll(int e);
void dldisp();
void del_dll(int e);
void ins_cdll(int el);
void cdlldisp();
void del_cdll(int el);
void menu_cll();
void menu_dll();
void menu_cdll();
void converttocll();
void converttodll();
void converttocdll();
void converttoll();
void insert(int el);
void disp();
```

## Main Function

The `main` function provides a menu for inserting elements into a singly linked list and converting the list into different types (CLL, DLL, CDLL). It allows the user to perform various operations on the different types of linked lists.

## Linked List Operations

### Singly Linked List

```c
void insert(int el);
void disp();
void converttoll();
```

- **insert:** Inserts an element at the end of the singly linked list.
- **disp:** Displays the elements of the singly linked list.
- **converttoll:** Converts the circular or doubly linked list back to a singly linked list.

### Circular Linked List (CLL)

```c
void menu_cll();
void converttocll();
void ins_cll(int e);
void cldisp();
void del_cll(int e);
```

- **menu_cll:** Displays the menu for operations on the circular linked list.
- **converttocll:** Converts the singly linked list to a circular linked list.
- **ins_cll:** Inserts an element into the circular linked list.
- **cldisp:** Displays the elements of the circular linked list.
- **del_cll:** Deletes an element from the circular linked list.

### Doubly Linked List (DLL)

```c
void menu_dll();
void converttodll();
void ins_dll(int e);
void dldisp();
void del_dll(int e);
```

- **menu_dll:** Displays the menu for operations on the doubly linked list.
- **converttodll:** Converts the singly linked list to a doubly linked list.
- **ins_dll:** Inserts an element into the doubly linked list.
- **dldisp:** Displays the elements of the doubly linked list.
- **del_dll:** Deletes an element from the doubly linked list.

### Circular Doubly Linked List (CDLL)

```c
void menu_cdll();
void converttocdll();
void ins_cdll(int el);
void cdlldisp();
void del_cdll(int el);
```

- **menu_cdll:** Displays the menu for operations on the circular doubly linked list.
- **converttocdll:** Converts the singly linked list to a circular doubly linked list.
- **ins_cdll:** Inserts an element into the circular doubly linked list.
- **cdlldisp:** Displays the elements of the circular doubly linked list.
- **del_cdll:** Deletes an element from the circular doubly linked list.

## Usage

1. **Compile the program:**
   ```bash
   gcc -o linkedlist linkedlist.c
   ```

2. **Run the executable:**
   ```bash
   ./linkedlist
   ```

3. **Follow the on-screen menu to perform various linked list operations.**

## Notes

- Ensure to follow the menu prompts for inserting, displaying, and deleting elements.
- The conversion functions help in transforming one type of linked list to another.
- Proper memory management is handled using `malloc` and `free`.

This program serves as a comprehensive tool for understanding and working with different types of linked lists in C.
