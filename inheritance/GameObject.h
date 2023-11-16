#pragma once

class GameObject
{
protected:
    int x;
    int y;
public:
    GameObject();
    ~GameObject();
    
    void show();
    void update();
};
