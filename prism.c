#include<stdio.h>


void main(){
int n,cost[10][10],visited[10],min_cost=0,u,v,a,b,i,j,min;

printf("enetr trhe nummber of nodes\n");
scanf("%d",&n);
printf("enter the cost matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);

for(i=1;i<=n;i++)
visited[i]=0;
int ne=1;
visited[1]=1;
while(ne<n)
{
min=999;
for(i=1;i<=n;i++)
{

for(j=1;j<=n;j++)
{
if(cost[i][j]<min && visited[i]==1)
{
min=cost[i][j];
a=u=i;
b=v=j;
}
}
}
if(visited[u]==0 || visited[v]==0)
{
printf("path from %dth from %d -> %d\n",ne++,a,b);
visited[b]=1;
min_cost+=min;
}
cost[a][b]=cost[b][a]=999;
}
printf("min cost is =%d",min_cost);
}
  


