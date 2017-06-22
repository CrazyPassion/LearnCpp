//
// Created by vonking on 2017/6/20.
//

#include "../Include/Screen1.hpp"
inline Screen1 Screen1::move(pos r, pos c)
{
    cursor = r*width + c;
    return *this;
}

inline Screen1 Screen1::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen1 Screen1::set(pos r, pos c, char ch)
{
    contents[r*width+c] = ch;
    return *this;
}


void Screen1::Ex_7_27()
{
    Screen1 myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
}

inline void Window_mgr::clear(ScreenIndex i)
{
    if (i >= screens.size()) return;    // judge for out_of_range.
    Screen1 &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}