# Search Algorithms

This project focuses on implementing various search algorithms in the `C` programming language. The search algorithms are designed to find specific elements within a given dataset/problem space efficiently. Search algorithms are structured to solve **search** problems with respect to how the data structures they're used in are implemented e.g. `hashing`, `linear`, and `binary search`.


## Time Complexity

The search algorithms have different time complexities, which are denoted using `Big O notation` and which entail maximum theoretical run time and computational complexity. In this project, we'll look at `space complexity` as well.

## Compilation with `gcc`:
Each implementation of a search algorithm is tested using main programs, which are compiled along with the specific search algorithm file.

```bash
$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

```bash
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
$ ./0-linear
```
