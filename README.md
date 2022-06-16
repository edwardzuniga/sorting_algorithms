# 0x1B. C - Sorting algorithms & Bi

#### :trollface:


![](https://memegenerator.net/img/instances/62795970.jpg)

### Description

What you should learn from this project:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorith

### [sort.h](https://github.com/edwardzuniga/ "sort.h")

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

### [/tests](https://github.com/edwardzuniga/ "tests")

Directory where the main files are located to test the functions

### [0. Bubble sort](https://github.com/edwardzuniga/ "0. Bubble sort")

Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

![](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif) ![](https://upload.wikimedia.org/wikipedia/commons/3/37/Bubble_sort_animation.gif)

**Compilation:**

    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble

### [1. Insertion sort](https://github.com/edwardzuniga/ "1. Insertion sort")

Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

![](https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif) ![](https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif)

**Compilation:**

    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion

### [2. Selection sort](https://github.com/edwardzuniga/ "2. Selection sort")

Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

![](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

**Compilation:**

    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select

### [3. Quick sort](https://github.com/edwardzuniga/ "3. Quick sort")

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

![](https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif) ![](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6a/Sorting_quicksort_anim.gif/220px-Sorting_quicksort_anim.gif)

**Compilation:**

    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick

## Authors

#### [Eduardo Zúñiga :soccer: :computer: :chart_with_downwards_trend:](https://github.com/edwardzuniga/ "Eduardo Zúñiga") 
#### [David Vargas :eggplant: :peach: :nail_care:](https://github.com/David-VargasV/ "David Vargas") 