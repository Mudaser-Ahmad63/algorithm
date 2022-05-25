#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
    for(i=0;i<n;i++)
        if(a[v][i] && !visited[i])
        q[++r]=i; //aa i
    if(f<=r)
    {
        visited[q[f]]=i;
        bfs(q[f++]);
    }
}

int main()
{
int v;
printf("\nEnter the number of vertices:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    q[i]=0;
    visited[i]=0;
}
printf("\nEnter adjacency matrix of the graph:");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the starting vertex:");
scanf("%d",&v);
bfs(v);
printf("\nThe node which are reachable are:\n");
for(i=0;i<n;i++)
{
    if(visited[i])
        printf("%d\t",i);
    else{
        printf("BFS is not possible.Not all nodes are reachable");
        break;
    }
}
}
