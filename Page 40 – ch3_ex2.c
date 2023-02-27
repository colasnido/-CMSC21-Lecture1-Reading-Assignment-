#include <stdio.h>
int main(void)
{

int i;
float x;
/* initializing variables to its values*/
i = 40;
x = 839.21f;

/* displaying characters using decimal point
 and after minimum amount of characters has been displayed
  remaining decimal places will be converted to spaces */
printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
return 0;

}
