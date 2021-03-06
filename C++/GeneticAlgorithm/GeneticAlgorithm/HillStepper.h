#include "LocalSearch.h"
class HillStepper : public LocalSearch {
public:
	HillStepper(Fitness f, int max_iterations, bool sim_an);
	std::vector<Polygon>* run();
private:
	bool sim_an;
	int iters;
	std::vector<Polygon>* step(std::vector<Polygon>* polygons, float fit);
};