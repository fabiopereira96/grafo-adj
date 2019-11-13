#ifndef GRAPH_HPP
#define GRAPH_HPP
    struct Node {
        int val, cost;
        Node* next;
    };

    struct Edge {
        int src, dest, weight;
    };

    class Graph {
        int Nv;
        Node* createNode(int value, int weight, Node* head);

        public:
            Node **head;
            Graph(Edge edges[], int ne, int nv);
            void print();
            void printAdjList(Node* ptr, int i);
            ~Graph();
    };
#endif 