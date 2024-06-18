#ifndef TIMELINE_H
#define TIMELINE_H

#include <vector>
#include <memory>
#include <map>
#include <unordered_map>
#include <set>


class Timeline{
    public:
        typedef std::shared_ptr<Timeline> Ptr;
        Timeline(int n_nodes, std::string name="", bool debug=false);

    private:
        std::string _name;
        int _n_nodes;
        bool _debug;
};


#endif

