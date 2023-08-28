#include <stdio.h> 
#include <math.h> 
void main()
{
int aArray[50],bArray[50],elem,i,j,t;
printf("\n Enter the Number of elements in an array : "); 
scanf("%d",&elem);
printf("\n Enter %d elements :\n",elem); 
for(i=0;i<elem;i++) 
scanf("%d",&aArray[i]);
for(i=0; i<elem; i++)
{
bArray[i] = 0; 
if(percube(aArray[i])) 
bArray[i] = bArray[i] + 5;
if(aArray[i]%4==0 && aArray[i]%6==0) 
bArray[i] = bArray[i] + 4; 
if(prime(aArray[i]))
bArray[i] = bArray[i] + 3;
}
for(i=0;i<elem;i++) 
for(j=i+1;j<elem;j++) 
if(bArray[i] > bArray[j])
{
t = bArray[i]; 
bArray[i] = bArray[j]; 
bArray[j] = t;
}
for(i=0; i<elem; i++) 
printf("<%d,%d>\n", aArray[i],bArray[i]);
}
int prime(int num)
{
int flag=1,i; 
for(i=2;i<=num/2;i++) 
if(num%i==0)
{
flag=0; 
break;
}
return flag;
}
int percube(int num)
{
int i,flag=0; 
for(i=2;i<=num/2;i++) 
if((i*i*i)==num)
{
flag=1;
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
break;
}
return flag;
}

