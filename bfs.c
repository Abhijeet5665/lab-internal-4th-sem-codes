

#include<stdio.h>
int visited[20],a[20][20],n,disp[20],p=1,u;




void bfs(int a[10][10],int n,int visited[10],int k){
int queue[10],f=0,r=-1;
visited[k]=1;
queue[++r]=k;
while(f<=r)
{
u=queue[f++];
disp[p++]=u;
for(v=1;v<=n;v++)
{
if(a[u][v]==1 && visited[v]==0){
queue[++r]=v;
visited[v]=1;
}
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
for(i=1;i<=n;i++)
visited[i]=0;
printf("eneter tthe source vertex\n");
scanf("%d",&source);

bfs(a,n,visited,source);



for(i=1;i<=n;i++)
{
if(visited[i]==0)
bfs(a,n,visited,i);
}
for(i=1;i<=n;i++)
printf("%c ",disp[i]+65);


}

