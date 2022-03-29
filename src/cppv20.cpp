#include <iostream>
#include <fstream>
#include <filesystem>

#include "nlohmann/json.hpp"

#include "v20.hpp"

using std::cout;

int main (int argc, char const *argv[]) {
	std::ifstream cj_fs("../data/codes.json");
	njson cj = nj::json::parse(cj_fs);
	v20::League league {cj};

	return 0;
}