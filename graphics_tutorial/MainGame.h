#pragma once




#include <SDL/SDL.h>
#include <GL/glew.h>
#include <Bengine/Sprite.h>
#include <Bengine/GLSLProgram.h>
#include <Bengine/GLTexture.h>
#include <vector>
#include <Bengine/Window.h>
#include <Bengine/Camera2D.h>
#include <Bengine/SpriteBatch.h>
#include <Bengine/InputManager.h>
#include <Bengine/Timing.h>
#include "Bullet.h"


enum class GameState {PLAY,EXIT};

class MainGame
{
public :
	MainGame();
	~MainGame();

	void run();



private:
	void initSystems();
	void gameLoop();
	void processInput();
	void initShaders();
	void drawGame();
	void calculateFPS();

	Bengine::Window _window;
	int _screenWidth;
	int _screenHeight;
	GameState _gameState;
	
	Bengine::SpriteBatch _spriteBatch;
	Bengine::Camera2D _camera;
	Bengine::InputManager _inputManager;
	Bengine::FpsLimiter _fpsLimiter;

	std::vector<Bullet> _bullets;

	Bengine::GLSLProgram _colorProgram;
	float _time;
	float _fps;
	float _frameTime;
	float _maxFPS;
	


};

