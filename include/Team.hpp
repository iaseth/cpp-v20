#ifndef V20_TEAM_HPP
#define V20_TEAM_HPP

#include "Common.hpp"



namespace v20 {
	class Team {
		public:
			static int count;
			Team ();
			~Team ();

		private:
			int counter;
			string fn, sn, abb;
	};
}

#endif