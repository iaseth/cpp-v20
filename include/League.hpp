#ifndef V20_LEAGUE_HPP
#define V20_LEAGUE_HPP

#include <iostream>

#include "nlohmann/json.hpp"
namespace nj = nlohmann;
typedef nj::basic_json<> njson;



namespace v20 {
	class League {
		public:
			League (njson& jo);
	};
}

#endif