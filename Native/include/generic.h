// generic.h

#ifndef GENERIC_H
#define GENERIC_H

#include <stdint.h>

/*
A (non-exhaustive) list of types is given here:

    void

    (signed) char

    (u)int8_t
    (u)int16_t
    (u)int32_t
    (u)int64_t

    float
    double

    enum

    type[]
    type[n]

    struct

    void*
    (u)int8_t*
    (u)int16_t*
    (u)int32_t*
    (u)int64_t*
    float*
    double*
    enum*
    type[]*
    type[n]*
    struct*

    type (*p)(...)
*/

void f00(void);

void f01(char);
void f02(signed char);

void f03(int8_t);
void f04(int16_t);
void f05(int32_t);
void f06(int64_t);

void f07(uint8_t);
void f08(uint16_t);
void f09(uint32_t);
void f10(uint64_t);

void f11(float);
void f12(double);

// TODO: Skipping enums for now.

void f14(int8_t[]);

// TODO: Skipping constant size arrays for now.

void f16(void*);


#endif /* GENERIC_H */
