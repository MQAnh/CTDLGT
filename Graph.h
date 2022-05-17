#pragma once
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
// Declare
const int max_edge = 100;
constexpr auto INF = 10000;
//
 //<trong so canh, dinh>
using namespace std;
typedef pair<float, int> II;
#ifndef _GRAPH_H_
#define _GRAPH_H_

// Declare class Graph
class Graph
{
private:
    int num_of_vertex, num_of_edge; // number of vertex and edges in the Graph
    vector<II> adj[max_edge]; //Vector stores index of vertex and weight between two vertex have a connect
    float* dist;//dynamic array stores distance between two vertexs
    int* trace; //dynamic array stores vertex has connect with vertex is index of element in array
    bool* check_if_visted;//dymanic array stores status of vertexs: visited or not visited.
public:
    Graph();//Default constructor
    Graph(int num_vextex);//Parameterized constructor
    Graph(const Graph& g);//Copy constructor
    int getNumVertex();//get number of vertex.
    int getNumEdge();//get number of edge.
    void setWeight(int vertex_first, int vertex_second, float weight); //Set/change weight of edge
    float getWeight(int vertex_first, int vertex_second);//Get weight of egde
    void insertVertex();//insert a new vertex to Graph
    void deleteVertex(); //remove a vertex from Graph
    void Dijsktra(int vertex_start); //Dijsktra algorithm using priority queue to find a shortest path from a vertex to the others vertexs in Graph.
    vector<II> trace_shortest_path(int start_vertex, int end_vertex);//Store shortest path from between two vertex
    void print_shorestpath();// display path
    void print_weight();//display weight of edges in Graph
    ~Graph();//Destructor, free memory.
};
#endif // !Graph

