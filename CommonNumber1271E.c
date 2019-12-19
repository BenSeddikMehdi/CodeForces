//
// Created by El Mehdi Benseddik on 12/19/2019.
//
/*
 * https://codeforces.com/problemset/problem/1271/E
 */

#include "CommonNumber1271E.h"

uint32_t max(const uint32_t pInt[], uint32_t n, uint32_t idx) {
    uint32_t max = pInt[0];
    for (uint32_t i = 0; i < n; ++i) {
        if (max < pInt[i])
            max = pInt[i];
    }
    return max;
}

uint32_t commonNumber(uint32_t pathsNumber, uint32_t k) {
    uint32_t tab[pathsNumber], temp = 0, length = pathsNumber;
    tab[pathsNumber] = 1;
    begin:
    temp = pathsNumber;
    while (temp != 1) {
        (temp % 2 == 0) ? temp /= 2 : temp--;
        tab[temp]++;
    }
    pathsNumber--;
    if (pathsNumber == 1) return max(tab, length, k);
    goto begin;
}




