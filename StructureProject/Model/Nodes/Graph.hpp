//
//  Graph.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 3/4/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Graph_h
#define Graph_h

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 50;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirtsTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    //Graph operations
    
    void addVertex(const Type& value);
    
    //connect vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    //disconnect vertices
    void removeEdge(int source, int target);
    void removeEdgeUndirectec(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //accessors
    Type& operator [] (int vertext);
    Type operator [] (int vertex) const;
    int size() const;
    
    //check connectionos
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target) const;
    std:: set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex)
    int costTraversal(Graph<Type> & graph, int vertex);
};

template <class Type>
const int Graph<Type> :: MAXIMUM;

template <class Type>
Graph<Type> :: Graph()
{
    this->vertexCount = 0;
}

//MARK: Accessors
template <class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}
//Left hand side operator
template <class Type>
Type& Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

//Right hand side operator
template <class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

//MARK: Vertices
template <class Type>
void Graph<Type> :: addVertex(const type& value)
{
    assert(vertexCount < MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[vewVertexNumber][otherVertexNumber] = false;
    }
    
    graphData[newVertexNumber] = value;
}

//MARK: Edges
template <class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
}

template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target, int cost)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && targett < vertexCount);
    weightCostMatrix[source][target] = cost;
    weightCostMatrix[target][source] = cost;
}

template <class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
    adjacencyMatrix[target][source] = true;
}

template <class Type>
void Graph<Type> :: removeEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
}

template <class Type>
void Graph<Type> :: removeEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
    adjacencyMatrix[target][source] = false;
}

template <class Type>
void Graph<Type> :: removeEdgeCost(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = 0;
    adjacencyMatrix[target][source] = 0;
}

#endif /* Graph_h */
