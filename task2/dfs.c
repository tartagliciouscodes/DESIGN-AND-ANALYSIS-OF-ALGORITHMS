//ch.sc.u4cse24110
//dfs
#include <stdio.h>
#define MAX 100

int visited[MAX];
int adj[MAX][MAX];

void dfs(int node,int n) {
visited[node]=1;
printf("%d",node);

for (int i=0;i<n;i++) {
if (adj[node][i]==1&&!visited[i]) {
dfs(i,n);
             }
        }
    }

int main() {
int n=5;
adj[0][1] = adj[1][0] = 1;
adj[0][2] = adj[2][0] = 1;
adj[1][3] = adj[3][1] = 1;
adj[2][4] = adj[4][2] = 1;

for(int i=0;i<n;i++) {
visited[i]=0;
}

dfs(0, n);
}
