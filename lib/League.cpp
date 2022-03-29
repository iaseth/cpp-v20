#include "League.hpp"

using namespace v20;

League::League (const njson& jo) {
	for (const auto& tj : jo["teams"]) {
		teams.push_back(new Team{this, tj});
	}

	for (const auto& gj : jo["grounds"]) {
		grounds.push_back(new Ground{this, gj});
	}

	for (const auto& player : jo["players"]) {
		// std::cout << "Player: " << player["fn"] << '\n';
	}
}

League::~League () {
	for (Team *team : teams) delete team;
	for (Ground *ground : grounds) delete ground;
}
