//
// Created by SwagDeNoli on 9/20/2019.
//

#ifndef PONG_ENGINE_H
#define PONG_ENGINE_H

#include "raylib.h"

class Engine
{
public:
    void Init();
    void UpdateGame(float deltaTime);
    void DrawGame();
    void CloseGame();
    void CaptureInput();

    Vector2 RectCenter(Rectangle rectangle)
    {
        return Vector2{rectangle.width / 2.0f, rectangle.height / 2.0f};
    }

    Rectangle CenteredRect(Rectangle rectToCenter)
    {
        Rectangle centeredRect = {rectToCenter.x - rectToCenter.width / 2, rectToCenter.y - rectToCenter.height / 2,
                                  rectToCenter.width, rectToCenter.height};
        return centeredRect;
    }

private:
    int SCREEN_WIDTH = 800;
    int SCREEN_HEIGHT = 600;
    void CheckCollisions();
};


#endif //PONG_ENGINE_H
