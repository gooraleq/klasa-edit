// edit.cpp
#include "edit.hpp"

Edit::Edit() : position({ 0, 0 }), length(0), textColor(Color::White), backgroundColor(Color::Black) {}

Edit::Edit(const Edit& other) {
    this->position = other.position;
    this->length = other.length;
    this->text = other.text;
    this->textColor = other.textColor;
    this->backgroundColor = other.backgroundColor;
}

Edit::~Edit() {}

void Edit::setPosition(int x, int y) {
    this->position = { static_cast<short>(x), static_cast<short>(y) };
}

void Edit::setLength(int length) {
    this->length = length;
}

void Edit::setText(const std::string& text) {
    this->text = text;
}

void Edit::setTextColor(Color textColor) {
    this->textColor = textColor;
}

void Edit::setBackgroundColor(Color backgroundColor) {
    this->backgroundColor = backgroundColor;
}

std::string Edit::getText() const {
    return this->text;
}

void Edit::userText() {
    char c;
    while ((c = _getch()) != '\r') {
        updateText(c);
    }
}

void Edit::draw() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, this->position);
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(this->textColor) | (static_cast<WORD>(this->backgroundColor) << 4));
    std::cout << this->text;
}

void Edit::updateText(const char c) {
    if (c == '\b') {
        if (!text.empty()) {
            text.pop_back();
            draw();
        }
    }
    else {
        if (text.size() < length) {
            text.push_back(c);
            draw();
        }
    }
}
