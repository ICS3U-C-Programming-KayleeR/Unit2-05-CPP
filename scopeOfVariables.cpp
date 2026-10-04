// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 03,10,2026
// This program shows how local and global variables work


#include <iostream>

// global variable

int variableX = 25;


void localVariable() {
    // this shows what happens with local variables

    int variableX = 10;

    int variableY = 30;

    int variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX

            << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;

    int variableY = 30;

    int variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX

            << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();

    globalVariable();
}
