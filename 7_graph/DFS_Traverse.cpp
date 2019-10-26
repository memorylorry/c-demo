#include <stdio.h>
#include <malloc.h>
#include "MGraph.h"
#include "../2_stack_quene/SqQueue.h"

// build a Graph base on array
MGraph* buildMGraph(){
  MGraph* mg = (MGraph*)malloc(sizeof(MGraph));
  
  for(int i=0;i<8;i++)
    addVex(mg,i);

  addEdge(mg,0,4);
  addEdge(mg,0,1);
  addEdge(mg,1,5);
  addEdge(mg,5,2);
  addEdge(mg,5,6);
  addEdge(mg,2,3);
  addEdge(mg,2,6);
  addEdge(mg,6,3);
  addEdge(mg,6,7);
  addEdge(mg,3,7);

  printMGraph(mg);
  return mg; 
}

// DFS
bool visited[MaxMGraphVexNum];
void initVisited(){
  for(int i=0;i<MaxMGraphVexNum;i++)
    visited[i] = false;
}
void DFS(MGraph* mg,int v){
    printf("%d ",v);
    visited[v] = true;

    for(int i =0;i<mg->vexnum;i++){
        if(mg->Edge[v][i]==1 && !visited[i])DFS(mg,i);
    }
}
void DFSTravese(MGraph* mg){
    initVisited();
    for(int i=0;i<mg->vexnum;i++){
    if(!visited[i]){
      DFS(mg,i);
    }
  }
}

int main(){
  MGraph* mg = buildMGraph(); 
  printf("\n");
  DFSTravese(mg);
  return 0;
}
