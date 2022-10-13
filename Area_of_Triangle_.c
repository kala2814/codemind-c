#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c,s,Area;
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  s = (a + b + c)/2;
  Area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("%.2f
",Area);
  return 0;
}