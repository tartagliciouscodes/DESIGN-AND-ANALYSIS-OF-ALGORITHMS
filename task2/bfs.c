//ch.sc.u4cse24110
//bfs
#include <stdio.h>
#define MAX 100

int visited[MAX];
int adj[MAX][MAX];
int queue[MAX];
int front=0,rear=0;

void enqueue(int n) {
queue[rear++]=n;
}

int dequeue() {
return queue[front++];
}

int isEmpty() {
return front==rear;
}

void bfs(int start,int n) {
for(int i=0;i<n;i++) {
visited[i]=0;
}
visited[start]=1;
enqueue(start);

while (!isEmpty()) {
int node=dequeue();
printf("%d",node);
for (int i=0;i<n;i++) {
if (adj[node][i]==1&&!visited[i]) {
visited[i]=1;
enqueue(i);
             }
        }
    }
}

int main() {
int n=5;
adj[0][1] = adj[1][0] = 1;
adj[0][2] = adj[2][0] = 1;
adj[1][3] = adj[3][1] = 1;
adj[2][4] = adj[4][2] = 1;
bfs(0, n);
}