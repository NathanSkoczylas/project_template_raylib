#include "MainGame.hpp"

#include "raylib.h"


namespace YourNameSpace {

	// Const variables
	constexpr int FPS_RATE{ 60 };


	MainGame::MainGame() {
		// Constructor
	}

	MainGame::~MainGame() {
		// Destructor
		stop();

		CloseWindow();
	}

	bool MainGame::initialize() {
		bool initSuccessful{ false };

		// Window Parameters
		const int windowWidth{ 800 };
		const int windowHeight{ 450 };
		InitWindow(windowWidth, windowHeight, "Endless Runner");
		Color backgroundColor{ WHITE };
		SetTargetFPS(FPS_RATE);

		// Start Game
		start();

		return true;
	}

	void MainGame::update() {

		if (!isRunning()) {
			// If the game isn't running, don't continue
			return;
		}

		if (WindowShouldClose()) {
			// If the game window is closed stop running
			stop();
		}

		// Update delta time
		m_dt = GetFrameTime();

		// Handle input
		//	user controls

		// Handle game state
		//	game physics

		// Handle output
		// rendering
		BeginDrawing();
		ClearBackground(WHITE);


		EndDrawing();
	}

	bool MainGame::isRunning() {
		return m_running;
	}

	void MainGame::start() {
		m_running = true;
	}

	void MainGame::stop() {
		m_running = false;
	}

}