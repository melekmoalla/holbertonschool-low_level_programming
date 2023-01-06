<div align=center>  
    <img  
    style="text-align:center"  
    src="https://raw.githubusercontent.com/coding-max/hbtn_config/main/assets/head_low-level.png"  
    alt="Holberton School"/>  
</div>

# C - Singly linked lists

<img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/229/giphy-3.gif">

# Resources

* Read or watch:

[Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s)

[Google](https://www.google.com/#q=linked+lists)

[Youtube](https://www.youtube.com/results?search_query=linked+lists)

* Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

* General:

When and why using linked lists vs arrays

How to build and use linked lists
# Requirements

* General
 
Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
# More Info
Please use this data structure for this project:
````
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
````
<a href="https://ibb.co/RY75b8H"><img src="https://i.ibb.co/ckxm3qT/Screenshot-20230106-101601.png" alt="Screenshot-20230106-101601" border="0"></a>
<a href="https://ibb.co/L9DWdQs"><img src="https://i.ibb.co/BTHx24Y/Screenshot-20230106-101714.png" alt="Screenshot-20230106-101714" border="0"></a>
<a href="https://ibb.co/L8NwRQ7"><img src="https://i.ibb.co/MsBTS80/Screenshot-20230106-101745.png" alt="Screenshot-20230106-101745" border="0"></a>
<a href="https://ibb.co/N1p4Jq4"><img src="https://i.ibb.co/xmG4Bb4/Screenshot-20230106-101835.png" alt="Screenshot-20230106-101835" border="0"></a>


## Author

- https://github.com/melekmoalla