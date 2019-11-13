/*
    Execucao:
        g++ -o main main.cpp graph.cpp
        ./main
*/

#include <iostream>
#include "graph.hpp"
using namespace std;

int main() {
	Edge edges[] = {
		// (x, y, w) -> vertice x, ate vertice y com custo w.
		{ 0, 1, 6 }, { 1, 2, 7 }, { 2, 0, 5 }, { 2, 1, 4 },
		{ 3, 2, 10 }, { 4, 5, 1 }, { 5, 4, 3 }
	};
	int nv = 6;
	int ne = sizeof(edges)/sizeof(edges[0]);

	Graph graph(edges, ne, nv);
	graph.print();

	return 0;
}