### variables

wrap character variables in single quotes and everything else in double quotes.

`ch s = 's';`

### scanf with pointers

```c
// first code block
#include <stdio.h>

int main(void) {

  int len, width;

  printf("enter len: ");
  scanf("%d", &len);
  printf("enter width: ");
  scanf("%d", &width);
  printf("area: %d", len*width );

  return 0;
}
```

question: but if scanf takes the pointer then how come it changes the value and not the memory address?

answer: Because scanf needs to take a pointer to your variable so that it can change that variable.
It accesses the variable that the pointer points to and changes it.


### increment and decrement operators

```c
#include <stdio.h>

int main (void) {
  int i, j;

  i = 10;
  j = i++;

  // first, the current value of i is assigned to j. then i is incremented
  printf("i = %d, j = %d \n", i, j);
  // prints i = 11, j = 10 

  int k,l;
  k = 10;
  l = ++k;
  printf("k = %d, l = %d \n", k, l);
  // prints k = 11, l = 11
  return 0;
}
```


### display a certain amount of numbers after the decimal point in floating numbers

To force `%f` to display p digits after the decimal point, we can put `.p` between %
and f. For example, to print  the line
`Profit: $2150.48``

we'd call printf as follows: 

`printf ("Profit: $%.2f\n" , profit);`


### floats and doubles

A float has less precision than a double, 6 vs 15 possible decimal places respectively, and therefore takes up less memory (4 vs 8 bytes). However, a double run faster, so you gain speed at the cost of more memory usage.


### explicit variable assignment

```c
double testScore = 95.7;
int displayScore = (int) testScore; // so displayScore will be 95 rounded 
```

### dynamic memory allocation

| Function | Description |
| ----------- | ----------- |
| malloc() |	Use this function to reserve as many bytes as you want on the heap
| calloc() | Use this function to reserve memory for some number of ints, doubles, or any other data type.
| realloc() |	Use this function to expand or contract a block of reserved memory (reserved by either malloc() or calloc()).
| free() | Use this function to release previously allocated memory.


### format specifiers

| Format Specifier | Data Type	 |
| ----------- | ----------- |
| %d or %i |	int
| %f | float
| %lf |	double
| %c | Use this function to release previously allocated memory.
| %s	| Used for strings (text), which you will learn more about in a later chapter


