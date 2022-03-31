#ifndef V20_BASECLASS_HPP
#define V20_BASECLASS_HPP

#include <iostream>

namespace v20 {
	class Baseclass {
		Baseclass (const Baseclass&) = delete;
		Baseclass& operator= (const Baseclass&) = delete;

	public:
		Baseclass () {}

	protected:
		void logConstruction () {
			std::cout << "Created Baseclass {}\n";
		}

		void logDestruction () {
			std::cout << "Deleted Baseclass {}\n";
		}
	};
}


#endif