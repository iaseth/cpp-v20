#include "Ground.hpp"

using namespace v20;

int Ground::count = 0;

Ground::Ground (League *league, const njson& jo) {
	counter = count++;
	this->league = league;
	id = jo["id"];
	fn = jo["fn"];
	sn = jo["sn"];
	path = jo["path"];
	cout << "Created Ground #" << counter << '\n';
	cout << fn << " (" << path << ")\n";
}

Ground::~Ground () {
	// cout << "Deleted Ground #" << counter << '\n';
}
