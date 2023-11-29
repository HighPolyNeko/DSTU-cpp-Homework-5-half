#pragma once

class GameObject abstract
{
protected:
    int x;
    int y;
public:
    GameObject();
    ~GameObject();

    virtual void spawn() = 0;
    
    void show();
    void update();
};
