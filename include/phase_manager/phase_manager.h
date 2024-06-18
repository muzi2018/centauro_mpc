#ifndef PHASE_MANAGER_H
#define PHASE_MANAGER_H

#include <Eigen/Dense>
#include <numeric>
#include <vector>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <unordered_set>
#include <unordered_map>
class Timeline;
class Phase;

class PhaseManager {
public:
    typedef std::shared_ptr<PhaseManager> Ptr;
    PhaseManager(int n_nodes, bool debug=false);

    std::shared_ptr<Timeline> createTimeline(std::string name);

    std::shared_ptr<Timeline> getTimelines(std::string name);

    std::unordered_map<std::string, std::shared_ptr<Timeline>> getTimelines();


    std::shared_ptr<Phase> createPhase(int n_nodes, std::string name);

    int getNodes();
    bool shift();
    bool clear();

protected:

private:
        int _n_nodes;
        bool _debug;
        std::unordered_map<std::string, std::shared_ptr<Timeline>> _timelines;

};

#endif

