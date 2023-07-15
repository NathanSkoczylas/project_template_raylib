#include <iostream>

#include "MainGame.hpp"


// ----------------------------------------------------------------------------
// main
// ----------------------------------------------------------------------------
int main() {
	std::cout << "Main Game" << std::endl;
	
	YourNameSpace::MainGame game;
	bool initSuccessful = game.initialize();

	// Game loop
	while (initSuccessful && game.isRunning()) {

		game.update();
		
	}

	game.stop();
		
	return 0;
}
