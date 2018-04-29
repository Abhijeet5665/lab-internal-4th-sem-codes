#include<stdio.h>


void main(){
int n,cost[10][10],parent[10],min_cost=0,u,v,a,b,i,j,min;

printf("enetr trhe nummber of nodes\n");
scanf("%d",&n);
printf("enter the cost matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);

for(i=1;i<=n;i++)
parent[i]=0;
int ne=1;

while(ne<n)
{
min=999;
for(i=1;i<=n;i++)
{

for(j=1;j<=n;j++)
{
if(cost[i][j]<min)
{
min=cost[i][j];
a=u=i;
b=v=j;
}
}
}

while(parent[u])
u=parent[u];
while(parent[v])
v=parent[v];

if(u!=v)
{
printf("edge %d from %d to %d with cost=%d",ne++,a,b,min);
min_cost+=min;
parent[v]=u;
}
cost[a][b]=cost[b][a]=999;
}
printf("min cost is=%d",min_cost);
}


