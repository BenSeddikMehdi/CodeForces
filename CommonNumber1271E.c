//
// Created by El Mehdi Benseddik on 12/19/2019.
//
/*
 * https://codeforces.com/problemset/problem/1271/E
 *
 */

#include "CommonNumber1271E.h"

uint32_t commonNumber(uint32_t pathsNumber, uint32_t k) {
    uint32_t temporary = pathsNumber;
    while (temporary != 1)
        (temporary % 2 == 0) ? temporary /= 2 : temporary--;

    return 0;
}