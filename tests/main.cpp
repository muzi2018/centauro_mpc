#include <phase_manager/timeline.h>
#include <phase_manager/phase.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    std::cout << "Running" << std::endl;
    Timeline timeline(4, "centauro");
    std::cout << "timeline's name: " << timeline.getName() << std::endl;

    NodesManager myNodesManager(10, {1, 2, 3, 4, 5});
    Phase myPhase(timeline, 4, "centauro");
}
