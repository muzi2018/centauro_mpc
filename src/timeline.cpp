#include <phase_manager/timeline.h>

Timeline::Timeline(int n_nodes, std::string name, bool debug):
    _name(name),
    _n_nodes(n_nodes),
    _debug(debug)
{

}

std::string Timeline::getName()
{
    return _name;
}

int Timeline::getEmptyNodes()
{
    return 0;
}

bool Timeline::shift()
{
    return false;
}

bool Timeline::clear()
{
    return true;
}

Timeline::~Timeline()
{

}


bool Timeline::_reset()
{
    return true;
}

