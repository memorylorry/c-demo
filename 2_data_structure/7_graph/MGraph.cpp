#include <stdio.h>

#include "MGraph.h"
/**
 * 初始化
 **/
void InitalMGraph(MGraph* mg){
  for(int i=0;i<MaxMGraphVexNum;i++){
    for(int j=0;j<MaxMGraphVexNum;j++){
      if(i!=j)
        mg->Edge[i][j] = INT_MAX;
    }
  }
}

/**
 * 增加顶点
 **/
bool addVex(MGraph* mg, VertexType vex){
  if(mg->vexnum >= MaxMGraphVexNum) return false;
  mg->Vex[mg->vexnum++] = vex;
  return true;
}

/**
 * 增加一条有向边
 **/
bool addDEdge(MGraph* mg,EdgeType i, EdgeType j){
  return addDWEdge(mg,i,j,1);
}
/**
 * 增加一条带权有向边
 **/
bool addDWEdge(MGraph* mg,EdgeType i, EdgeType j ,int weight){
  if(i>=MaxMGraphVexNum || j>=MaxMGraphVexNum) return false;
  mg->Edge[i][j] = weight;
  mg->arcnum++;
  return true;
}


/**
 * 增加一条无向边
 **/
bool addEdge(MGraph* mg,EdgeType i, EdgeType j){
  bool flag1 = addDEdge(mg,i,j);
  bool flag2 = addDEdge(mg,j,i);
  return flag1 && flag2;
}

/**
 * 打印邻接矩阵
 **/
void printMGraph(MGraph* mg){
  printf("# MGraph Profile Begin!\n");

  printf("  1. %d Vertext\n\r    ", mg->vexnum);
  for(int i=0;i< mg->vexnum;i++)
    printf("[%d] %d   ",i,mg->Vex[i]);

  printf("\n  2. %d Arcs\n\r", mg->arcnum);
  for(int i = 0;i<mg->vexnum;i++){
    for(int j = 0;j<mg->vexnum;j++){
      if(mg->Edge[i][j]==INT_MAX)
        printf("%3s","x");
      else printf("%3d",mg->Edge[i][j]);
    }
    printf("\n");
  }
  printf("\r# MGraph Profile End!\n");
}