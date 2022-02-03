#include<stdio.h>
void main()
{
  int d;
  float df,dm,di,dc;
  printf("Enter distance in kilometres: ");
  scanf("%d",&d);
  df = d*3280.84;
  dm = d*1000;
  di = d*39370.1;
  dc = d*100000;
  printf("Distance in feet is: %f\n",df);
  printf("Distance in meters is: %f\n",dm);
  printf("Distance in inches is: %f\n",di);
  printf("Distance in centimeters is: %f\n",dc);
}
