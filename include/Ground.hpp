#ifndef V20_GROUND_HPP
#define V20_GROUND_HPP

#include "Common.hpp"



namespace v20 {
	class League;
	class Ground : Baseclass {
		public:
			static int count;
			Ground (League *league, const njson& jo);
			~Ground ();

		public:
			League *league;

		private:
			int counter, id;
			string fn, sn, path;
	};
}

#endif