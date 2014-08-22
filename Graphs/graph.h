#ifndef GRAPH_H_
#define GRAPH_H_
#include<iostream>

class edge{
  protected:
    vertex &origin;
    vertex &destination;
    std::size_t distance;
  public:
    edge(vertex& orig,vertex& dest);
    edge(vertex& orig,vertex& dest,int dist);
    vertex& getEdgeOrigin();
    vertex& getEdgeDest();
    std::size_t getEdgeDist();    
};

class vertex{
  protected:
   string vertex_name; 
   //std::vector<edge> edges;
  public:
    vertex(string);
    string getVertexId();
    //std::vector<edge> getAllEdges();  
};

class graph{
  //static std::unordered_set<string> list_graphs;
  typedef std::unordered_map<vertex&,std::unordered_set<vertex&>> graph_map;
  protected:
    string graph_name;
    graph_map graph_vertex;
    std::unordered_set<vertex&> vertices;
  public:
    graph(string);
    void add_vertex(vertex &);
    graph_map getGraph();
    void addEdge(vertex &orig,vertex &dest);
    void addBiDirectionalEdge(vertex &orig, vertex &dest);     
    void addEdge(vertex &orig, vertex &dest, std::size_t dist);
    void addBiDirectionalEdge(vertex &orig, vertex &dest, std::size_t dist);   
}

#endif
