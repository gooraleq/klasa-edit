// edit.hpp
#ifndef EDIT_HPP
#define EDIT_HPP

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

class Edit {
public:
    enum class Color : short {
        Black,
        Blue,
        Green,
        Cyan,
        Red,
        Magenta,
        Brown,
        LightGray,
        DarkGray,
        LightBlue,
        LightGreen,
        LightCyan,
        LightRed,
        LightMagenta,
        Yellow,
        White
    };

    Edit();
    Edit(const Edit& other);
    ~Edit();

    void setPosition(int x, int y);
    void setLength(int length);
    void setText(const std::string& text);
    void setTextColor(Color textColor);
    void setBackgroundColor(Color backgroundColor);
    std::string getText() const;
    void userText();

private:
    COORD position;
    int length;
    std::string text;
    Color textColor;
    Color backgroundColor;

    void draw();
    void updateText(const char c);
};

#endif // EDIT_HPP
