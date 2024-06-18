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

        std::string getName();
        int getEmptyNodes();

        bool shift();
        bool clear();
        ~Timeline();

    private:
        std::string _name;
        int _n_nodes;
        bool _debug;

        bool _reset();
};


#endif

