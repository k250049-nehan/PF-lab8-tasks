#include<stdio.h>
int main(){
  int i,j;
   printf("\n===Multiplication of tables(5x5)===\n\n");
    for (i = 1; i <= 5; i++)
    {
        printf("%4d. ", i);
        for (j = 1; j <= 5; j++)
        {
            printf("%4d  ", i * j);
        }
        printf("\n");
    }
    return 0;

}
