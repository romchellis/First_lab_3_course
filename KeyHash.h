//
// Created by Roman Oborin on 2019-09-11.
//

#ifndef LR_1_KURS_3_KEYHASH_H
#define LR_1_KURS_3_KEYHASH_H


#include <cstdlib>

template<typename K, size_t tableSize>
struct KeyHash {
    unsigned long operator()(const K &key) const {
        return reinterpret_cast<unsigned long>(key) % tableSize;
    }
};


#endif //LR_1_KURS_3_KEYHASH_H
