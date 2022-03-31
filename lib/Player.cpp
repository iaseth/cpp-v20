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
}

Player::~Player () {
	// cout << "Deleted Player #" << counter << '\n';
}

void Player::logConstruction () {
	cout << "Created Player #" << counter << ": " << fn << " (" << path << ")\n";
}

void Player::logDestruction () {
	cout << "Deleted Player #" << counter << '\n';
}
