#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Point{
private:
    T xpos,ypos;
public:
    Point(){};
    Point(T x, T y): xpos(x),ypos(y)
    { }
    void ShowPosition() const
    {
        cout << xpos << ypos;
    }
};
using namespace std;
int main()
{  
    int x,y;
    x = 10;
    y = 10;
    Point<int> p(x,y);
    p.ShowPosition();
    return 0;
}