#include<stdio.h>
void() x1,x2,y1,y2;
float x,y;
float distance;
printf("enter the x and y coordinate value of first point\n");
scanf("%f%f,&x1,&y1");
printf("enter the x and y coordinates value of the second point\n");
scanf("%f%f,&x2,&y2");
x=x2-x1;
y=y2-y1;
distance=(x*x)+(y*y);
printf("distance between the points%f\n",'distance');
}
