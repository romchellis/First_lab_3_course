//
// Created by Roman Oborin on 2019-09-12.
//

#ifndef LR_1_KURS_3_HASHNODE_H
#define LR_1_KURS_3_HASHNODE_H


#include <cstdlib>
#include <cstddef>

template<typename K, typename V>
class HashNode {
public:
    HashNode(const K &key, const V &value) :
            key(key), value(value), next(NULL) {
    }

    K getKey() const {
        return key;
    }

    V getValue() const {
        return value;
    }

    void setValue(V value) {
        this->value = value;
    }

    HashNode *getNext() const {
        return next;
    }

    void setNext(HashNode *next) {
        this->next = next;
    }

private:
    K key;
    V value;
    HashNode *next;

    HashNode(const HashNode &) = delete;

    HashNode &operator=(const HashNode &) = delete;
};

#endif //LR_1_KURS_3_HASHNODE_H
