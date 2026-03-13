#include <stdio.h>

int main()
{
   int n, i, count = 0, sum = 0, marks[100];
   printf("Enter number of students: ");
   scanf("%d", &n);

   printf("Enter total marks of each students: ");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &marks[i]);
   }

   // for find average
   for (i = 0; i < n; i++)
   {
      sum += marks[i];
   }
   sum /= n;

   for (i = 0; i < n; i++)
   {
      if (sum <= marks[i])
      {
         count++;
      }
   }
   printf("%d students have marks above average.", count);
   return 0;
}