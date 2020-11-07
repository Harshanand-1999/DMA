#include<stdio.h>
#include<stdlib.h>
void main()
{
int i, n, *ptr;
printf("enter the number of elements\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",ptr+i);
for(i=0;i<n;i++)
printf("%d",*(ptr+i));
printf("having changes on hunny branch");
}
