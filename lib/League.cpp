#include "League.hpp"

using namespace v20;

League::League (const njson& jo) {
	for (const auto& tj : jo["teams"]) {
		teams.push_back(new Team{this, tj});
	}

	for (const auto& gj : jo["grounds"]) {
		grounds.push_back(new Ground{this, gj});
	}

	for (const auto& pj : jo["players"]) {
		players.push_back(new Player{this, pj});
	}
}

League::~League () {
	for (Team *team : teams) delete team;
	for (Ground *ground : grounds) delete ground;
	for (Player *player : players) delete player;
}

void League::doStuff () {
	cout << "doStuff()\n";
}
