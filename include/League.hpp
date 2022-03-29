#ifndef V20_LEAGUE_HPP
#define V20_LEAGUE_HPP

#include "Common.hpp"

#include "Team.hpp"
#include "Ground.hpp"
#include "Player.hpp"



namespace v20 {
	class League {
		public:
			League (const njson& jo);
			~League ();

		private:
			vector<Team*> teams;
	};
}

#endif