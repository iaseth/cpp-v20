#include "Player.hpp"

using namespace v20;

int Player::count = 0;

Player::Player (League *league, const njson& jo) {
	counter = count++;
	this->league = league;
	id = jo["id"];
	fn = jo["fn"];
	sn = jo["sn"];
	path = jo["path"];
	cout << "Created Player #" << counter << '\n';
	cout << fn << " (" << path << ")\n";
}

Player::~Player () {
	// cout << "Deleted Player #" << counter << '\n';
}
