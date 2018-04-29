#include<stdio.h>


void main(){
int n,cost[10][10],visited[10],min_cost=0,u,v,a,b,i,j,min,d[20],w;

printf("enetr trhe nummber of nodes\n");
scanf("%d",&n);
printf("enter the cost matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);


int source;
printf("eneyte the source\n");
scanf("%d",&source);
for(i=1;i<=n;i++){
d[i]=cost[source][i];
visited[i]=0;
}
visited[source]=1;
d[source]=0;


for(j=2;j<=n;j++)
{
min=999;
for(i=1;i<=n;i++)
{
if(d[i]<min)
{
if(visited[i]==0)
{
min=d[i];
u=i;
}
}
}

visited[u]=1;

for(w=1;w<=n;w++)
{
if(cost[u][w]!=999 && visited[w]==0)
if(d[w]>cost[u][w]+min)
d[w]=cost[u][w]+min;
}
}
for(i=1;i<=n;i++)
{
if(i!=source)
printf("shotest path from %d to %d is=%d\n",source,i,d[i]);
}
}




