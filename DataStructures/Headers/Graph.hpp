//
//  Graph.hpp
//  DataStructures
//
//  Created by Gutke, Zachary on 3/6/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>
using namespace std;

template<class T>
class Graph
{
    static const int MAXIMUM = 50;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    T graphData[MAXIMUM];
    int vCount;
    void depthFirstTraversal(Graph<T> & graph, int v, bool markedVertices[]);
public:
    Graph();
    // Graph operations
    void addV(const T& value);
    
    //Connect vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessors
    T& operator [] (int v);
    T operator [] (int v) const;
    int size() const;
    
    //Check connections
    bool hasUndirectedConnection(int source, int target); const;
    bool areConnect(int source, int target) const;
    set<int> neighbors(int v) const;
    
    // Traversaks
    void depthFirstTraversal(Graph<T> & graph, int v);
    void breadthFirstTraversal(Graph<T> & graph, int v);
    int costTraversal(Graph<T> & graph, int v);
    
}

template<class T>
const int Graph<T>:: MAXIMUM;

template<class T>
Graph<T> :: Graph()
{
    this->vCount = 0;
}

template<class T>
int Graph<T> :: size() const
{
    return vCount;
}

template<class T>
T& Graph<T> :: operator[] (int v)
{
    assert(v < vCount);
    return graphData[v];
}

template<class T>
T Graph<T> :: operator [] (int v) const
{
    assert(v < vCount);
    return graphData[v];
}

template<class T>
void Graph<T> :: addV(const T& value)
{
    assert(vCount < MAXIMUM);
    int nVNum = vCount;
    vCount++;
    
    for(int otherVNum = 0; otherVNum < vCount; otherVNum++)
    {
        adjacencyMatrix[otherVNum][newVNum] = false;
        adjacencyMatrix[newVNum][otherVNum] = false;
    }
    
    graphData[newVNum] = value;
}

template<class T>
void Graph<T> :: addEdge(int source, int target)
{
    assert(source >= 0 && source < vCount && target >= 0 && target < vCount);
    adjacencyMatrix[source][target] = true;
}

template<class T>
void Graph<T> :: addEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vCount && target >= 0 && target < vCount);
    adjacencyMatrix[source][target] = true;
    adjacencyMatrix[target][source] = true;
}

template<class T>
void Graph<T> :: addEdgeCost(int source, int target, int cost)
{
    assert(source >= 0 && source < vCount && target >= 0 && target < vCount);
    weightCostMatrix[source][target] = cost;
    weightCostMatrix[target][source] = cost;
}

template<class T>

template<class T>

template<class T>

template<class T>

template<class T>

template<class T>

template<class T>

template<class T>

template<class T>

template<class T>

template<class T>


#endif /* Graph_hpp */
