#include "graph.h"
#include <utility>
//member functions of the edge class
edge::edge(std::string orig, std::string dest){
  //origin.insert(orig.begin(),orig.end());
  //destination.insert(dest.begin(),dest.end());
  origin = orig;
  destination = dest;
  distance = 0;   
}

void edge::setEdgeDist(std::size_t dist){
  distance = dist;  
}

std::string edge::getEdgeOrigin(){
  return origin;
}

std::string edge::getEdgeDest(){
  return destination;
}

std::size_t edge::getEdgeDist(){
  return distance;
}

//member functions of vertex class
vertex::vertex(std::string id){
  vertex_name = id;
}

std::string vertex::getVertexId(){
  return vertex_name;
}

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
   if(it == graph_vertex.end()){  
    destVertices.insert(destVert);  
    graph_vertex.insert(std::pair<std::string,std::unordered_set<std::string> >
(origVert, destVertices));
  }
  else{
    destVertices = it->second;
    destVertices.insert(destVert);
    graph_vertex.erase(origVert);
    graph_vertex.insert(std::pair<std::string,std::unordered_set<std::string> >(origVert, destVertices));
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

graph::graph_map graph::getGraph(){
  return graph_vertex;
}

std::vector<edge> graph::getAllEdges(){
  return edges;
}
