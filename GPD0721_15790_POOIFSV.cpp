#include <iostream>
#include "Window.h"
#include "Player.h"
#include <vector>
#include "Bullet.h"
#include "SDL.h"

int main(int argc, char* args[])
{
    Window* window = Window::GetPtr();
    window->Init();
    Player p1;
    p1.Init();
    int dirx;
    int diry;
    bool click;
    std::vector<Bullet> bullets;

    while (true)
    {
        window->Clear();
        window->Input(dirx, diry, click);
        if (diry > 0 && p1.y > -10)
        {
            p1.y -= 0.4;
        }
        else if (diry < 0 && p1.y < 630)
        {
            p1.y += 0.4;
        }
        if (dirx > 0 && p1.x < 1180)
        {
            p1.x += 0.4;
        }
        else if (dirx < 0 && p1.x > 0)
        {
            p1.x -= 0.4;
        }

        if (click)
        {
            Bullet newBullet;
            newBullet.Init(p1.x+45, p1.y);
            bullets.push_back(newBullet);
        }

        for (int i = 0; i < bullets.size(); i++)
        {
            bullets[i].Draw();
        }

        p1.Draw();
        window->Render();
    }

    return 0;
}

