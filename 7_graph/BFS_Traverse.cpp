#include <stdio.h>
#include <malloc.h>
#include "graph.h"

// build a Graph base on array
MGraph* buildMGraph(){
  MGraph* mg = (MGraph*)malloc(sizeof(MGraph));
  printf("t:%d\n",mg->vexnum);
  return mg; 
}

int main(){
  MGraph* mg = buildMGraph(); 
  return 0;
}



