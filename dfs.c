#include<stdio.h>


int visited[20],a[20][20],n;
void dfs(int v)
{
int i;
visited[v]=1;
for(i=1;i<=n;i++)
{
if(a[v][i]==1 && visited[i]==0)
{
printf("%c",i+64);
dfs(i);
}
}
}


void main()
{
int i,j,source;
printf("eneter the number of nodes\n");
scanf("%d",&n);

printf("eneter the adjacency matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);

printf("eneter tthe source vertex\n");
scanf("%d",&source);

dfs(source);

int count=0;
for(i=1;i<=n;i++)
{
if(visited[i]==1)
count++;
}
if(count==n)
printf("all nodes are reachable \n");
else
printf("all nodes are not reachable\n");
}




