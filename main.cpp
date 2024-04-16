// main.cpp
#include <iostream>
#include <conio.h>
#include "edit.hpp"
#include "color_manipulators.hpp"

int main() {
    // Pierwsza czêœæ
    Edit e;
    e.setPosition(7, 3);
    e.setLength(25);
    e.setText("Ala ma kota");
    e.setTextColor(Edit::Color::Blue); // Ustawienie koloru tekstu na niebieski
    e.setBackgroundColor(Edit::Color::Green); // Ustawienie koloru t³a na zielony
    std::string s = e.getText();
    std::cout << "Pole tekstowe nr. 1" << std::endl;
    std::cout << "Zawartosc polatekstowego: " << s;
    e.userText(); // Obs³uga tekstu wprowadzanego przez u¿ytkownika (while {kbhit{getch}})
    system("cls");
    s = e.getText();
    std::cout << "Zawartoœ  pola tekstowego: " << s;

    // Druga czêœæ
    system("cls");
    std::cout << "Druga czesc programu" << std::endl;
    std::cout << yellow << "A" << red << "l" << blue << "a" << green << "m" << gray << "a"
        << lblue << "k" << lyellow << "o" << cyan << "t" << magenta << "a";
    std::cout << defcolor << "Miauu" << defcolor << "xxzyw";
    _getch();
    return 0;
}
