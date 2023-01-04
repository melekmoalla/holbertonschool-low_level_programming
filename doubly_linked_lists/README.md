<div align=center>  
    <img  
    style="text-align:center"  
    src="https://raw.githubusercontent.com/coding-max/hbtn_config/main/assets/head_low-level.png"  
    alt="Holberton School"/>  
</div>

# C - Doubly linked lists

Welcome to the Doubly Linked Lists project! This is a collection of functions for creating and manipulating doubly linked lists in a variety of programming languages.

## Installation

To install the Doubly Linked Lists project, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/username/doubly-linked-lists.git
```

2. Navigate to the project directory:

```
cd doubly-linked-lists
```

# More Info

1. Please use this data structure for this project:

```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

2. In a doubly linked list, what are possible directions to traverse it? (select all possible answers)

- Forward

- Backward

3. In a doubly linked list, what’s the “head” of a linked list?

-> It’s the node with the pointer to the previous equals to NULL.

- prev - address of the previous node

- data - data item

- next - address of next node

# Representation of Doubly Linked List

<a href="https://ibb.co/PjwGhN3"><img src="https://i.ibb.co/mT65qG1/Screenshot-20230104-095756.png" alt="Screenshot-20230104-095756" border="0"></a>

# Example in code insertion at the Beginning

<a href="https://ibb.co/y01gDzF"><img src="https://i.ibb.co/kKfqpL2/Screenshot-20230104-100727.png" alt="Screenshot-20230104-100727" border="0"></a>
<a href="https://ibb.co/bmZBtxS"><img src="https://i.ibb.co/4tGTkc6/Screenshot-20230104-100754.png" alt="Screenshot-20230104-100754" border="0"></a>
<a href="https://ibb.co/Z1d0bm2"><img src="https://i.ibb.co/pr2Skyh/Screenshot-20230104-100845.png" alt="Screenshot-20230104-100845" border="0"></a>
<a href="https://ibb.co/G3tN0sp"><img src="https://i.ibb.co/gFPh3v9/Screenshot-20230104-101223.png" alt="Screenshot-20230104-101223" border="0"></a>

## Learning Objectives

- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## Author

- https://github.com/melekmoalla
