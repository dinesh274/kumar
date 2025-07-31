#include <stdio.h>
#include <Stdlib.h>
#define max 100
int adjmatrix[max][max];
int queue[max],front=-1,rear=-1;
int visited[max];
int n;
 void enqueue(int v)
 {
	 if(rear==max-1)
	 {
		 printf("queue over flow");
	 }
	 else 
	 {
		 if(front==-1)
		 {
			front=0;
		}
		 rear++;
		 queue[rear]=v;
	 }
 }
 int dequeue()
 {
	 int v;
	 if(front==-1|| front>rear)
	 {
		 printf("queue underflow");
		 return -1;
	 }
	 else {
		 v=queue[front];
		 front++;
		 return v;
	 }
 }
 void bfs(int startvertex)
 {
	 int i,vertex;
	 enqueue(startvertex);
	 visited[startvertex]=1;
	 while(front<=rear)
	 {
		 vertex=dequeue();
		 if(vertex!=-1)
		 {
			 printf("%d",vertex);
		 }
		for(i=0;i<n;i++)
		{
			if(adjmatrix[vertex][i]==1 && !visited[i])
			{
				enqueue(i);
				visited[i]=1;
			}
		}
	}
}

int main()
{
	int i,j,startvertex;
	printf("enter the number of vertex: ");
	scanf("%d",&n);
	printf("enter adjacency matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&adjmatrix[i][j]);
		}
	}
	printf("enter the starting vertex:\n");
	scanf("%d",&startvertex
	
	
	
	);
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
printf("bfs traversal traversal:");
bfs(startvertex);
return 0;
}

