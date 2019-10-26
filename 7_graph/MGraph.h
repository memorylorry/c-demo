#ifndef _MGRAPH_H_
#define _MGRAPH_H_H

#include<stdbool.h>

/**
* 定义用邻接矩阵存储的图
**/
#define MaxMGraphVexNum 100

typedef int VertexType;
typedef int EdgeType;

typedef struct{
  VertexType Vex[MaxMGraphVexNum];
  EdgeType Edge[MaxMGraphVexNum][MaxMGraphVexNum];
  int vexnum,arcnum;
}MGraph;

/**
 * 增加顶点
 **/
bool addVex(MGraph* mg, VertexType vex);

/**
 * 增加一条有向边
 **/
bool addDEdge(MGraph* mg,EdgeType i, EdgeType j);

/**
 * 增加一条无向边
 **/
bool addEdge(MGraph* mg,EdgeType i, EdgeType j);

/**
 * 打印邻接矩阵
 **/
void printMGraph(MGraph* mg);

#endif
