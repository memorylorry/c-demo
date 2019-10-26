#ifndef _GRAPH_H_
#define _GRAPH_H_H

#define num 100

typedef int VertexType;
typedef int EdgeType;

typedef struct{
  VertexType Vex[num];
  EdgeType Edge[num][num];
  int vexnum,arcnum;
}MGraph;

#endif
