#include <stdio.h>
int main()
{
  int num1=0,num2=1,n,i,fib;
  
  printf("\nEnter value for n: ");
  scanf("%d",&n);
  if(n==1)
    printf("\nNth number of fibonacci series: %d",num1);
    
  else if(n==2)
    printf("\nNth number of fibonacci series: %d",num2);
    
  else
  {
    for(i=1;i<=n-2;i++)
    {
      fib = num1 + num2;
      num1 = num2;
      num2 = fib;
  
    }
  printf("\nNth number of fibonacci series:  = %d",fib);
  }
  return 0;
}
