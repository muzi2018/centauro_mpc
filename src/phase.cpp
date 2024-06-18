#include <phase_manager/timeline.h>
#include <phase_manager/phase.h>

Phase::Phase(Timeline& timeline, int n_nodes, std::string name):
    _n_nodes(n_nodes),
    _name(name),
    _timeline(timeline)

{
    _init_nodes(_n_nodes);
}

bool Phase::_init_nodes(int n_nodes)
{

    return true;
}
