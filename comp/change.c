#include <stdio.h>
main()
{
  int change;
  scanf("%d", &change);
  int fifty = change / 50;
  change -= fifty * 50;
  int ten = change / 10;
  change -= ten * 10;
  int five = change / 5;
  change -= five * 5;
  int one = change;

  printf("%d\n", fifty); 
  printf("%d\n", ten); 
  printf("%d\n", five);
  printf("%d\n", one);
}
