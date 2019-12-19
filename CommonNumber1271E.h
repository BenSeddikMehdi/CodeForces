//
// Created by El Mehdi Benseddik on 12/19/2019.
//

#ifndef CODEFORCES_COMMONNUMBER1271E_H
#define CODEFORCES_COMMONNUMBER1271E_H

#include <stdint.h>

/* The max function is designed to calculate the max of the table pInt whose length is n */
extern uint32_t max(const uint32_t pInt[], uint32_t n, uint32_t idx);

/* The commonNumber function returns the maximum common number between all paths */
extern uint32_t commonNumber(uint32_t pathNumber, uint32_t idx);

#endif //CODEFORCES_COMMONNUMBER1271E_H
