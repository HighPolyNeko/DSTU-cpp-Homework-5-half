#pragma once

class GameObject
{
    int x;
    int y;
public:
    GameObject();
    ~GameObject();
    
    void show();
    void update();
};
