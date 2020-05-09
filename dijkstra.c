#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<limits.h>

int n;

int min(bool visited[], int dist[])
{
    int min=INT_MAX,min_index;
    for(int i=0;i<n;i++){
        if(!visited[i] && min>dist[i])
        {
            min=dist[i];
            min_index=i;
        }
    }
    return min_index;
}

void dijkstra(int graph[][n], int root)
{

    int dist[30], ref;
    bool visited[30];

    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
        visited[i]=false;
    }

    dist[root]=0;

    for(int i=0;i<n-1;i++){

        ref=min(visited,dist);

        visited[ref]=true;

        for(int j=0;j<n;j++){

                if(!visited[j] && graph[ref][j] && dist[ref]!= INT_MAX && dist[ref]+graph[ref][j] < dist[j])
                    dist[j]=dist[ref]+graph[ref][j];

        }

    }
     printf("shortest paths from: ");

    for(int i=0;i<n;i++){
        printf("\n%d -- %d = %d",root,i,dist[i]);
    }

}

void main()
{
 int graph[30][30],root;

    printf("\nEnter number of node: ");
    scanf("%d",&n);

    printf("\nEnter the root node: ");
    scanf("%d",&root);

    printf("\nEnter weighted graph: ");

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    dijkstra(graph,0);

}
