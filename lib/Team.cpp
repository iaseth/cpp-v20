#include "Team.hpp"

using namespace v20;

int Team::count = 0;

Team::Team (League *league, const njson& jo) {
	counter = count++;
	this->league = league;
	id = jo["id"];
	fn = jo["fn"];
	sn = jo["sn"];
	abb = jo["abb"];
	cout << "Created Team #" << counter << '\n';
	cout << fn << " (" << abb << ")\n";
}

Team::~Team () {
	// cout << "Deleted Team #" << counter << '\n';
}
