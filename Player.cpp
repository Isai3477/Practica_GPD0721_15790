#include "Player.h"
#include "Window.h"


void Player::Init()
{
	position.x = 0;
	position.y = 0;
	player.Load("Jugador.png");
}

void Player::Draw()
{
	Window* window = Window::GetPtr();
	window->RenderTexture(&player, position.x, position.y);
}