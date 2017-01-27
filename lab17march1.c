#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Edge
{
    int source,destination;
};
struct Graph
{
    int V,E;
    struct Edge*edge;
};
struct Graph*create_Graph(int V,int E)
{
    struct Graph*graph=(struct Graph*)malloc(sizeof(struct Graph));
    graph->V=V;
    graph->E=E;
    graph->edge=(struct Edge*)malloc(graph->E*sizeof(struct Edge));
    return graph;
};
int find1(int parent[],int i)
{
    if(parent[i]==-1)
        return i;
    return find1(parent,parent[i]);
}
void union1(int parent[],int x,int y)
{
    int xset=find1(parent,x);
    int yset=find1(parent,y);
    parent[xset]=yset;
}
int main()
{
    int V=3,E=3;
    struct Graph*graph=create_Graph(V,E);
    graph->edge[0].source=0;
    graph->edge[0].destination=1;
    graph->edge[1].source=1;
    graph->edge[1].destination=2;
    graph->edge[2].source=2;
    graph->edge[2].destination=3;
}
