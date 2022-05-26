#include "Player.h"
#include "Window.h"


void Player::Init()
{
	x = 0;
	y = 0;
	player.Load("Jugador.png");
}

void Player::Draw()
{
	Window* window = Window::GetPtr();
	window->RenderTexture(&player, x, y);
}