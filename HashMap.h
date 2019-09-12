//
// Created by Roman Oborin on 2019-09-12.
//

#ifndef LR_1_KURS_3_HASHMAP_H
#define LR_1_KURS_3_HASHMAP_H


#include "HashNode.h"
#include "KeyHash.h"

template<typename K, typename V, size_t tableSize, typename F = KeyHash<K, tableSize> >
class HashMap {
public:
    HashMap();

    ~HashMap();

    bool get(const K &key, V &value);

    void put(const K &key, const V &value);

    void remove(const K &key);

private:
    HashMap(const HashMap &other);

    const HashMap &operator=(const HashMap &other);

    HashNode<K, V> *table[tableSize];
    F hashFunc;
};


#endif //LR_1_KURS_3_HASHMAP_H
