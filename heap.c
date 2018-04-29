#include<stdio.h>
#include<time.h>

//#include<math.h>
int h[50];





void heapify(int h[50],int n){

int i,j,k,n1,v,heap;
n1=n;

for(i=n1/2;i>=1;i--)
{
k=i;
v=h[k];
heap=0;
while(!(heap) && (2*k)<=n)
{
j=2*k;
if(j<n1)
if(h[j]<h[j+1])
j+=1;
if(v>=h[j])
heap=1;
else{
h[k]=h[j];
k=j;
}
}
h[k]=v;
}
}




void main(){
int i,n,size,t;
clock_t start,end,start1,end1;

printf("eneter the value of n \n");
scanf("%d",&n);
printf("enter the array elenmts\n");
for(i=1;i<=n;i++)
scanf("%d",&h[i]);
start=clock();

heapify(h,n);
end=clock();

printf("elements heapified\n");
for(i=1;i<=n;i++)
printf("%d ",h[i]);
start1=clock();
for(i=n;i>=1;i--)
{
t=h[1];
h[1]=h[i];
h[i]=t;
size=i-1;
heapify(h,size);
}
end1=clock();

printf("rortated elemts are\n");
for(i=1;i<=n;i++)
printf("%d ",h[i]);
printf("time taken by heapsort is total of both heapify and heapify and sorting iteratively\n");
double time=(double)((end+end1)-(start+start1))/CLOCKS_PER_SEC;
printf("time=%lf",time);

}











