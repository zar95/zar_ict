#include<stdio.h>
int main ()
{

    int i=1;
    printf("(a)\n");
    printf("\nNumber from 1 to 100 with the increment of 1\n");
    for(i=1 ; i<=100 ; i++)
        {
      printf("%d,",i);
        }

    printf("\n(b)\n");

    printf("\nprint n0 from 100 to 1 with decrement of 1\n");
{

    for(i=100 ; i>=1 ; i-- )

    printf("%d,",i);
}


   printf("\n(c)\n");
   printf("\nPrint numbers from 20 to 2 in steps of -2\n");// decrement of 2
   for(i=20 ; i>=2 ; i-=2)
 {
   printf("%d,",i);
 }
   printf("\n(d)\n");
   printf("\nPrint sequence of numbers:  2, 5, 8, 11, 14, 17, 20\n");//increment of 3
   for(i<=20 ; i>=2 ; i+=3)
    printf("%d,",i);

   printf("\n(e)\n");
   printf("Print sequence of numbers:  99, 88, 77, 66, 55, 44, 33, 22, 11, 0\n");// decrement of 11
   for(i<=100 ; i>=0 ; i-=11)
    printf("%d,",i);

    return 0;

}
