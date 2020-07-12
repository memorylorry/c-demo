/**
 * 求最短路径：Dijkstra
 **/
#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <limits.h>
#include "MGraph.h"
// #include "../2_stack_quene/SqQueue.h"

// build a Graph base on array
MGraph* buildMGraph(){
  MGraph* mg = (MGraph*)malloc(sizeof(MGraph));
  InitalMGraph(mg);
  
  for(int i=1;i<6;i++)
    addVex(mg,i);

  addDWEdge(mg,0,1,10);
  addDWEdge(mg,0,4,5);
  addDWEdge(mg,1,2,1);
  addDWEdge(mg,1,4,2);
  addDWEdge(mg,4,1,3);
  addDWEdge(mg,4,2,9);
  addDWEdge(mg,4,3,2);
  addDWEdge(mg,2,3,4);
  addDWEdge(mg,3,2,6);
  addDWEdge(mg,3,0,7);

  printMGraph(mg);
  return mg; 
}

/**
 * SmallestPath_Dijkstra
 **/
int dist[MaxMGraphVexNum];
int path[MaxMGraphVexNum];
void initDist(){
    for(int i=0;i<MaxMGraphVexNum;i++)
        dist[i] = INT_MAX;
}
void initPath(){
    for(int i=0;i<MaxMGraphVexNum;i++)
        path[i] = -1;
}

void Dijkstra(MGraph* mg, int v0){
  printf("%d %d\n",dist[3],INT_MAX);
  // 1.选不在dist中的点，加入并赋值新的dist
  for(int i = 0;i<mg->vexnum;i++){
    if(mg->Edge[v0][i]!=INT_MAX)
      dist[i] = mg->Edge[v0][i];
      path[i] = v0; //设置前驱节点
  }
  for(int i = 0;i<mg->vexnum;i++){
    if(dist[i] == INT_MAX)
      printf("x\t");
    else printf("%d\t",dist[i]);
  }
}
void DijkstraPath(MGraph* mg, int v0){
  initDist();
  Dijkstra(mg,v0);
}

int main(){
    MGraph* mg = buildMGraph();
    DijkstraPath(mg,0);
    return 0;
}