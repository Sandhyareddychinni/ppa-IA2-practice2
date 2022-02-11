#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the values\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float*area)
{
*area=(base*height)/2;
}
void output(float base,float height,float area)
{
  printf("area of triangle %f %f is %f\n",base,height,area);
}
int main()
{
  float base,height;
  input(&base,&height);
  float area;
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}