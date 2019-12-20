//
// Created by El Mehdi Benseddik on 12/19/2019.
//
/*
 * https://codeforces.com/problemset/problem/1271/E
 */

#include "CommonNumber1271E.h"
uint32_t max(const uint32_t pInt[], uint32_t n, uint32_t idx) {
    uint32_t max = 0, i = 0, commonNumber = 0;
    for (i = 0; i < n; ++i) {
        max = pInt[i];
        if (max >= idx)
            commonNumber = i;
    }
    return commonNumber;
}

uint32_t commonNumber(uint32_t pathsNumber, uint32_t k) {
    if (k == pathsNumber)
        return 1;
    uint32_t length = pathsNumber+1, tab[length], temp = 0;
    for (uint32_t i = 0; i < length; ++i) {
        tab[i] = 0;
    }
    while (pathsNumber != 1) {
        temp = pathsNumber;
        tab[temp]++;
        while (temp != 1) {
            (temp % 2 == 0) ? temp /= 2 : temp--;
            tab[temp]++;
        }
        pathsNumber--;
    }
    tab[temp]++;
    return max(tab, length, k);
}




