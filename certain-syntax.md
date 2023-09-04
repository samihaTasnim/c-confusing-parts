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