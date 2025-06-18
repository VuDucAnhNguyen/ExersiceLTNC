#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

struct Screen{
    int width, height, sX, sY;

    Screen(){
        width=0;
        height=0;
        sX=0;
        sY=0;
    }

    Screen(int _width,int _height){
        width=_width;
        height=_height;
        sX=0;
        sY=0;
    }

    Screen(int _sX,int _sY,int _width,int _height){
        sX=_sX;
        sY=_sY;
        width=_width;
        height=_height;
    }
};
