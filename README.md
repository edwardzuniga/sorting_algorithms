# 0x1B. C - Sorting algorithms & Bi

#### :trollface:


![](https://memegenerator.net/img/instances/62795970.jpg)

### Description

What you should learn from this project:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorith

### [/tests](https://github.com/edwardzuniga/sorting_algorithms/tree/main/tests "tests")

Directory where the main files are located to test the functions, our print_array.c and print_list.c files (which contain the print_array and print_list functions) will be compiled with their functions during the fix.

### [sort.h](https://github.com/edwardzuniga/sorting_algorithms/blob/main/sort.h "sort.h")

##### Header File Structure

    /**
     * struct listint_s - Doubly linked list node
     *
     * @n: Integer stored in the node
     * @prev: Pointer to the previous element of the list
     * @next: Pointer to the next element of the list
     */
    typedef struct listint_s
     {
         const int n;
         struct listint_s *prev;
         struct listint_s *next;
     } listint_t;


### [0. Bubble sort](https://github.com/edwardzuniga/sorting_algorithms/blob/main/0-bubble_sort.c "0. Bubble sort")

Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

![](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)   ![](https://upload.wikimedia.org/wikipedia/commons/3/37/Bubble_sort_animation.gif)

**Compilation:**

    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble

### [1. Insertion sort](https://github.com/edwardzuniga/sorting_algorithms/blob/main/1-insertion_sort_list.c "1. Insertion sort")

Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

![](https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)   ![](https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif)

**Compilation:**

    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion

### [2. Selection sort](https://github.com/edwardzuniga/sorting_algorithms/blob/main/2-selection_sort.c "2. Selection sort")

Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

![](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)   ![](https://upload.wikimedia.org/wikipedia/commons/3/3e/Sorting_selection_sort_anim.gif?20220209224152)

**Compilation:**

    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select

### [3. Quick sort](https://github.com/edwardzuniga/sorting_algorithms/blob/main/3-quick_sort.c "3. Quick sort")

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

![](https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif)   ![](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6a/Sorting_quicksort_anim.gif/220px-Sorting_quicksort_anim.gif)

**Compilation:**

    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick

### Steps to use the project on your local machine:

##### 1-  Clone the repository by pasting the following lines in your terminal.

    git clone  https://github.com/edwardzuniga/sorting_algorithms.git

![](https://i.ibb.co/1266XK8/Screenshot-from-2022-06-21-18-12-15.png)

##### 2- Access the new folder /sorting_algorithms and when listing you will see the files it contains

![](https://i.ibb.co/wCZRSYH/Screenshot-from-2022-06-21-18-12-15.png)

##### 3- Move the .c files from /tests to where the main functions are located, when listing you will see that the main.c files are already there

![](https://i.ibb.co/CwF4j01/Screenshot-from-2022-06-21-18-43-32.png)

##### 4- Compile each of the functions by copying the lines that start with gcc inside the README exercises

![](https://i.ibb.co/9NcSJsZ/Screenshot-from-2022-06-21-18-50-32.png)

##### 5- After compiling, 4 new files will appear (bubble, insertion, select, quick) which must be executed with "./"

Example: "/.bubble"

![](https://i.ibb.co/cCr48LX/Screenshot-from-2022-06-21-18-58-45.png)

## Authors

#### [David Vargas](https://github.com/David-VargasV/ "David Vargas") 

#### [Eduardo Zúñiga :soccer: :computer: :chart_with_downwards_trend:](https://github.com/edwardzuniga/ "Eduardo Zúñiga") 
 