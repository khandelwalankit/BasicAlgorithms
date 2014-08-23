#include "graph.h"

//member functions of the graph class

graph::graph(std::string name){
  graph_name = name;
}

void graph::addVertex(vertex &vert){
  vertices.insert(vert.getVertexId());
}

void graph::addEdge(vertex &orig,vertex &dest){
  std::string origVert = orig.getVertexId();
  std::string destVert = dest.getVertexId();
  std::unordered_set<std::string> destVertices;
  graph_map::iterator it = graph_vertex.find(origVert);
  typedef std::make_pair<std::string,std::unordered_set<std::string> > vertex_map;
  if(it == graph_vertex.end()){  
    destVertices.insert(destVert);  
    graph_vertex.insert(vertex_map(origVert, destVertices));
  }
  else{
    destVertices = it->second;
    destVertices.insert(destVert);
    graph_vertex.erase(origVert);
    graph_vertex.insert(vertex_map(origVert, destVertices));
  }
  edge route(origVert,destVert);
  edges.push_back(route);
}

void graph::addBiDirectionalEdge(vertex &orig, vertex &dest){
  addEdge(orig,dest);
  addEdge(dest,orig);
}
     
void graph::addEdge(vertex &orig, vertex &dest, std::size_t dist){
  addEdge(orig,dest);
  for(std::size_t i=0;i<edges.size();i++){
    if((edges.at(i).getEdgeOrigin().compare(orig.getVertexId()) == 0)
        && (edges.at(i).getEdgeDest().compare(dest.getVertexId()) == 0)){
      edges.at(i).setEdgeDist(dist);
      return;
    }
  }
}

void graph::addBiDirectionalEdge(vertex &orig, vertex &dest, std::size_t dist){
  addEdge(orig,dest,dist);
  addEdge(dest,orig,dist);
}

