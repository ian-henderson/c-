#ifndef QUEUE_H
#define QUEUE_H

class Graph {
        private:
                bool **adjacency_matrix;
                int vertex_count;
        public:
                Graph(int);
                ~Graph();
                void add_edge(int, int);
                void remove_edge(int, int);
                bool is_edge(int, int);
};

#endif
