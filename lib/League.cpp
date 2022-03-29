#include "League.hpp"

using namespace v20;

League::League (const njson& jo) {
	for (const auto& tj : jo["teams"]) {
		cout << "Team: " << tj["fn"] << '\n';
		teams.push_back(new Team{});
	}

	for (const auto& ground : jo["grounds"]) {
		// std::cout << "Ground: " << ground["fn"] << '\n';
	}

	for (const auto& player : jo["players"]) {
		// std::cout << "Player: " << player["fn"] << '\n';
	}
}

League::~League () {
	for (Team *team : teams) {
		delete team;
	}
}
