#ifndef V20_LEAGUE_HPP
#define V20_LEAGUE_HPP

#include "Common.hpp"

#include "Team.hpp"
#include "Ground.hpp"
#include "Player.hpp"



namespace v20 {
	class League : Baseclass {
		public:
			League (const njson& jo);
			~League ();

			void doStuff ();

		private:
			vector<Team*> teams;
			vector<Ground*> grounds;
			vector<Player*> players;
	};
}

#endif