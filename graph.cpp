#include <iostream>
#include "graph.hpp"

Node* Graph::createNode(int value, int weight, Node* head) {
    Node* newNode = new Node;
    
    newNode->val = value;
    newNode->cost = weight;
    newNode->next = head;
    
    return newNode;
}
Graph::Graph(Edge edges[], int ne, int nv) {
    head = new Node*[Nv]();
    this->Nv = nv;

    // Inicia todos vertices com null
    for (int i=0; i<Nv; ++i)
        head[i] = nullptr;

    // Adiciona novos nodes ao grafo
    for (unsigned i=0; i<ne; i++) {
        int src = edges[i].src;
        Node* newNode = createNode(edges[i].dest, edges[i].weight, head[src]);
        head[src] = newNode;
    }
}
Graph::~Graph() {
    for (int i = 0; i < Nv; i++)
        delete[] head[i];

    delete[] head;
}
void Graph::print(){
    for (int i=0; i<Nv; i++)
		printAdjList(head[i], i);
}
void Graph::printAdjList(Node* ptr, int i) {
	while (ptr != nullptr) {
		std::cout << "(" << i << ", " << ptr->val
			<< ", " << ptr->cost << ") ";

		ptr = ptr->next;
	}
	std::cout << std::endl;
}