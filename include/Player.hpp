#ifndef V20_PLAYER_HPP
#define V20_PLAYER_HPP

#include "Common.hpp"



namespace v20 {
	class League;
	class Player : Baseclass {
		public:
			static int count;
			Player (League *league, const njson& jo);
			~Player ();

		public:
			League *league;

		private:
			int counter, id;
			string fn, sn, path;
	};
}

#endif