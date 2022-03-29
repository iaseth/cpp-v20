#ifndef V20_TEAM_HPP
#define V20_TEAM_HPP

#include "Common.hpp"



namespace v20 {
	class League;
	class Team {
		public:
			static int count;
			Team (League *league, const njson& jo);
			~Team ();

		public:
			League *league;

		private:
			int counter, id;
			string fn, sn, abb;
	};
}

#endif