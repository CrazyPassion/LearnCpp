#ifndef CP5_ex7_24_h
#define CP5_ex7_24_h

#include <vector>
#include <string>
#include <iostream>

class Screen1;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen1>::size_type;
    inline void clear(ScreenIndex);
private:
    std::vector<Screen1> screens;
};

class Screen1 {
    friend void Window_mgr::clear(ScreenIndex);
public:
    using pos = std::string::size_type;

    Screen1() = default; // 1
    Screen1(pos ht, pos wd):height(ht), width(wd), contents(ht*wd, ' '){ } // 2
    Screen1(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){ } // 3

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r*width+c]; }
    inline Screen1 move(pos r, pos c);
    inline Screen1 set(char c);
    inline Screen1 set(pos r, pos c, char ch);

    const Screen1& display(std::ostream &os) const { do_display(os); return *this; }
    Screen1& display(std::ostream &os) { do_display(os); return *this; }

    static void Ex_7_27();

private:
    void do_display(std::ostream &os) const { os << contents; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif