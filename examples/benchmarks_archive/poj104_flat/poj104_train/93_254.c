#include <header.h>


int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a%3==0 && a%5==0 && a%7==0)
	  printf("3 5 7");
  else
  {
	  if(!(a%3==0 || a%5==0 || a%7==0))
		  printf("n");
  }
  if(!(a%3==0 && a%5==0 && a%7==0) && a%3==0 && a%5==0)
	  printf("3 5");
  if(!(a%3==0 && a%5==0 && a%7==0) && a%3==0 && a%7==0)
	  printf("3 7");
  if(!(a%3==0 && a%5==0 && a%7==0) && a%7==0 && a%5==0)
	  printf("5 7");
  if(a%3==0 && !(a%5==0 || a%7==0))
	  printf("3");
  if(a%5==0 && !(a%3==0 || a%7==0))
	  printf("5");
  if(a%7==0 && !(a%5==0 || a%3==0))
	  printf("7");
  return 0;
}