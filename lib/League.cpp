#include "League.hpp"

using namespace v20;

League::League (njson& jo) {
	for (auto& team : jo["teams"]) {
		std::cout << "Team: " << team["fn"] << '\n';
	}
}
