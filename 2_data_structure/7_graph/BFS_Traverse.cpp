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

/**
 * BFS 广度优先搜索
 **/
bool visited[MaxMGraphVexNum];
void initVisited(){
  for(int i=0;i<MaxMGraphVexNum;i++)
    visited[i] = false;
}
void BFS(MGraph* mg, int v){
  // inital a queue
  SqQueue* queue = (SqQueue*)malloc(sizeof(SqQueue));
  InitalQueue(queue);
  int val;

  EnQueue(queue,v);
  //view it
  while(!IsEmpty(*queue)){
    DeQueue(queue,&val);
    // 遍历
    if(!visited[val]){
      printf("%d ",val);
      visited[val] = true;
    }

    // 把该节点 后继 未访问的 节点加入
    for(int i=0; i< mg->vexnum; i++){
      if(mg->Edge[val][i] == 1 && visited[i] == false){
        EnQueue(queue,i);
      }
    }
  }
  printf("\n");
}
void BFSTravese(MGraph* mg){
  initVisited();
  for(int i=0;i<mg->vexnum;i++){
    if(!visited[i]){
      BFS(mg,i);
    }
  }
}


int main(){
  MGraph* mg = buildMGraph(); 
  printf("\n");
  BFSTravese(mg);
  return 0;
}



