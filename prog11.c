#include<stdio.h>
#include<math.h>
void main()
{
int x1,y1,x2,y2,distance;
printf("enter the values of x1,y1,x2,y2\n");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
distance=((x2-x1)*2+(y2-y1)*2);
printf("the distance between two poits is %d\n",distance);
}
