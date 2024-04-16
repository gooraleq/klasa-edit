// color_manipulators.hpp
#ifndef COLOR_MANIPULATORS_HPP
#define COLOR_MANIPULATORS_HPP

#include <iostream>
#include <windows.h>

enum class TextColor : short {
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

inline std::ostream& yellow(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::Yellow));
    return s;
}

inline std::ostream& red(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::Red));
    return s;
}

inline std::ostream& blue(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::Blue));
    return s;
}

inline std::ostream& green(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::Green));
    return s;
}

inline std::ostream& gray(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::LightGray));
    return s;
}

inline std::ostream& lblue(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::LightBlue));
    return s;
}

inline std::ostream& lyellow(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::Yellow));
    return s;
}

inline std::ostream& cyan(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::Cyan));
    return s;
}

inline std::ostream& magenta(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::Magenta));
    return s;
}

inline std::ostream& defcolor(std::ostream& s) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(TextColor::White));
    return s;
}

#endif // COLOR_MANIPULATORS_HPP

