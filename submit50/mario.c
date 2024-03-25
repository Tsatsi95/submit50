#include <stdio.h>
//#include <cs50.h>

int main(void)
{
  int n;
  do
  {
  printf("Enter size:");
    scanf("%d", &n);
  }
      
    while (n < 1 || n>8);
  
    for(int i=0;i<n;i++)
    {
      for(int t=0;t<n-i-1;t++)
      {
        printf(" ");
      }
        for(int j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
