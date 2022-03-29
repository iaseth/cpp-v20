#include "Team.hpp"

using namespace v20;

int Team::count = 0;

Team::Team () {
	counter = count++;
	cout << "Created Team #" << counter << '\n';
}

Team::~Team () {
	cout << "Deleted Team #" << counter << '\n';
}
