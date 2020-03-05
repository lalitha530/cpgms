 #include<stdio.h>
void main()
{
int a,b,temp;
printf("enter the two values of a and b\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swapping is a =%d b =%d\n",a,b);
}
