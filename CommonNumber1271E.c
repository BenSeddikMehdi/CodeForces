//
// Created by El Mehdi Benseddik on 12/19/2019.
//
/*
 * https://codeforces.com/problemset/problem/1271/E
 *
 */

#include "CommonNumber1271E.h"

uint32_t commonNumber(uint32_t pathsNumber, uint32_t k) {
    uint32_t temp = pathsNumber, n = 0, tab[pathsNumber];
    (temp % 2 == 0) ? (n = pathsNumber/2 + 1) : (n = pathsNumber/2 + 2);
    uint32_t i = 0;
    while (temp != 1) {
        (temp % 2 == 0) ? temp /= 2 : temp--;
        tab[temp]++;
        i++;
    }


    return 0;
}