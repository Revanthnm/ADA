#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int V;

int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;  //min= 0 2 3
                                   //min_index=0 1 2
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

int printMST(int parent[], int graph[][V])
{
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
}

void primMST(int graph[][V])
{
    int parent[V];  // -1 0 1
    int key[V];     //0 2 3 6 5
    bool mstSet[V]; //t t t f t


    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;


    key[0] = 0;
    parent[0] = -1;


    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);  // u = 0 1 2 4

        mstSet[u] = true;

        for (int v = 0; v < V; v++)

            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printMST(parent, graph);
}

int main()
{
    int graph[20][20];

    printf("\nEnter number of vertices: ");
    scanf("%d",&V);

    printf("\nEnter adjacency matrix: \n");
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            scanf("%d",&graph[i][j]);

    primMST(graph);

    return 0;
}
