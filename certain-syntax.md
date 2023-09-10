### variables

wrap character variables in single quotes and everything else in double quotes.

ex: 

```
ch sam = 'sam';
```

### scanf with pointers

```
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

```#include <stdio.h>

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
}```


