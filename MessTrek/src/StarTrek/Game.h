#ifndef GAME_HEADER 
#define GAME_HEADER 

#include <cstdlib>
#include <Untouchables/WebGadget.h>


namespace StarTrek {


class Game {
private:
	int e_;
	int t_;

	static int rnd(int maximum) {
		return rand() % maximum; 
	}

public:
	Game();
    void fireWeapon(Untouchables::WebGadget* wg);
};

}

#endif
