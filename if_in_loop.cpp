// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program for nested loop

#include <iostream>
#include <cmath>


int main() {
    // this fuction for nested loop

    int model_number;

    // process & output
    for (model_number = 1000; model_number < 2001; model_number++) {
        if (model_number % 1 == 0 && model_number % 5 != 4) {
            std::cout << model_number << " ";
        } else {
            std::cout << model_number << " " << std::endl;
        }
    }
}
