#include "graph.h"
#include <iostream>

int main(int argc, char **argv){
  graph g("exp");
  vertex v1("Ahmedabad");
  vertex v2("Delhi");
  g.addVertex(v1);
  g.addVertex(v2);
  g.addEdge(v1,v2,10);
  std::vector<edge> edges = g.getAllEdges();
  for(int i=0;i<edges.size();i++){
    std::cout<< "Origin: " << edges.at(i).getEdgeOrigin()<<std::endl;
  }
  return 0;
}
