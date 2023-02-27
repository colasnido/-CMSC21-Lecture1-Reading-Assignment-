/*Adding fractions*/
#include <stdio.h>

int main(void){
/*declaring variables */
int num1, denom1, num2, denom2, result_num, result_denom;


printf("Enter first fraction: ");
scanf("%d/%d", &num1, &denom1);

printf("Enter second fraction: ") ;
scanf("%d/%d", &num2, &denom2) ;

/*computing the inputted values, first computation for
 the numerator then second computation for the denominator */
result_num = num1 * denom2 + num2 * denom1;

result_denom = denom1 * denom2;

/*displaying the computed values*/
printf ("The sum is %d/%d\n", result_num, result_denom);

return 0;

}
