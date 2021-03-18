#pragma once
#include <stdint.h>
#include <stddef.h>

class BitMap{
public:
    size_t Size;
    uint8_t* Buffer;
    bool operator[](uint64_t index);
    bool Set(uint64_t index, bool value);
};