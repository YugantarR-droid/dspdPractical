#include <stdio.h>

int graph[100][100];
int visited[100];

void bfs(int start,int n){
int q[100],front=0,rear=0;
for(int i=1;i<=n;i++) visited[i]=0;
q[rear++]=start;
visited[start]=1;
printf("BFS: ");
while(front<rear){
int u=q[front++];
printf("%d ",u);
for(int v=1;v<=n;v++){
if(graph[u][v] && !visited[v]){
visited[v]=1;
q[rear++]=v;
}
}
}
printf("\n");
}

void dfs(int start,int n){
int st[100],top=-1;
for(int i=1;i<=n;i++) visited[i]=0;
st[++top]=start;
printf("DFS: ");
while(top>=0){
int u=st[top--];
if(!visited[u]){
visited[u]=1;
printf("%d ",u);
for(int v=n;v>=1;v--){
if(graph[u][v] && !visited[v]){
st[++top]=v;
}
}
}
}
printf("\n");
}

int main(){
int n,e,u,v,start;

printf("Enter number of nodes: ");
scanf("%d",&n);

for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
graph[i][j]=0;

printf("Enter number of edges: ");
scanf("%d",&e);

printf("Enter edges (u v):\n");
for(int i=0;i<e;i++){
scanf("%d %d",&u,&v);
graph[u][v]=graph[v][u]=1;
}

printf("Enter start node: ");
scanf("%d",&start);

bfs(start,n);
dfs(start,n);

return 0;
}