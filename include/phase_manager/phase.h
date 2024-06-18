#ifndef PHASE_H
#define PHASE_H

#include <Eigen/Dense>
#include <numeric>
#include <vector>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <unordered_set>


class Timeline;

class NodesManager {
    public:
        typedef std::shared_ptr<NodesManager> Ptr;

    NodesManager(int n_phase_nodes,
                 std::vector<int> selected_nodes) : _n_phase_nodes(n_phase_nodes), _selected_nodes(selected_nodes)
    {
        std::cout << "NodesManager" << std::endl;
    }

    private:
        int _n_phase_nodes;
        std::vector<int> _selected_nodes;

};


class Phase {
    public:
        typedef std::shared_ptr<Phase> Ptr;
        Phase(Timeline& timeline, int n_nodes, std::string name);
    private:
        Timeline& _timeline;
        int _n_nodes;
        std::string _name;
        bool _init_nodes(int n_nodes);
};

#endif
