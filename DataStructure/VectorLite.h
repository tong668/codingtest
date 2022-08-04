//
// Created by didi on 2022/8/2.
//

#ifndef CODINGTEST_VECTORLITE_H
#define CODINGTEST_VECTORLITE_H

class VectorLite {
public:
    VectorLite(int initSize) : theSize(initSize), theCapacity(initSize + SPARE_CAPACITY) {
        objects = new int[theCapacity];
    }

    virtual ~VectorLite() {

    }

    VectorLite(const VectorLite &obj) {

    }

    VectorLite &operator=(const VectorLite &obj) {

    }

    bool empty() {
        if (size() == 0)
            return true;
        return false;
    }

    int size() {
        return theSize;
    }

    int capacity() {
        return theCapacity;
    }

    void push_back(const int &x) {
        objects[theSize++] = x;
    }

    void pop_back() {
        --theSize;
    }

private:
    int theSize;
    int theCapacity;
    int *objects;
    static const int SPARE_CAPACITY = 2;


};

#endif //CODINGTEST_VECTORLITE_H
