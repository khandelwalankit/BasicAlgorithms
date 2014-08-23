#ifndef GRAPH_H_
#define GRAPH_H_
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>

class edge{
  protected:
    std::string origin;
    std::string destination;
    std::size_t distance;
  public:
    edge(std::string orig,std::string dest);
    void setEdgeDist(std::size_t);
    std::string getEdgeOrigin();
    std::string getEdgeDest();
    std::size_t getEdgeDist();    
};

class vertex{
  protected:
   std::string vertex_name; 
  public:
    vertex(std::string);
    std::string getVertexId();
};

class graph{
  //static std::unordered_set<string> list_graphs;
  typedef std::unordered_map<std::string,std::unordered_set<std::string>> graph_map;
  protected:
    std::string graph_name;
    graph_map graph_vertex;
    std::unordered_set<std::string> vertices;
    std::vector<edge&> edges;
  public:
    graph(std::string);
    void addVertex(vertex &);
    void addEdge(vertex &orig,vertex &dest);
    void addBiDirectionalEdge(vertex &orig, vertex &dest);     
    void addEdge(vertex &orig, vertex &dest, std::size_t dist);
    void addBiDirectionalEdge(vertex &orig, vertex &dest, std::size_t dist);   
    std::vector<edge&> getAllEdges();  
    graph_map getGraph();
}

#endif
