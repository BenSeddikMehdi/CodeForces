//
// Created by El Mehdi Benseddik on 12/19/2019.
//
/*
 * https://codeforces.com/problemset/problem/1271/E
 */

#include "CommonNumber1271E.h"

uint32_t max(const uint32_t pInt[], uint32_t n, uint32_t idx) {
    uint32_t max = pInt[0], i = 0, r = 0;
    for (i = 0; i < n; ++i) {
        if (max < pInt[i]) {
            max = pInt[i];
            r = i + 1;
        }
    }
    return r;
}

uint32_t commonNumber(uint32_t pathsNumber, uint32_t k) {
    uint32_t tab[pathsNumber], temp = 0, length = pathsNumber;
    for (uint32_t i = 0; i < length; ++i) {
        tab[i] = 0;
    }
    tab[1] = 1;
    while (pathsNumber != 1) {
        temp = pathsNumber;
        while (temp != 1) {
            (temp % 2 == 0) ? temp /= 2 : temp--;
            tab[temp]++;
        }
        pathsNumber--;
    }
    return max(tab, length, k);
}




