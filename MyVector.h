//
// Created by usuario on 8/30/2019.
//

#ifndef MYVECTORFINAL_MYVECTOR_H
#define MYVECTORFINAL_MYVECTOR_H


class MyVector {
private:
    int size;
    int* vector;

public:
    MyVector();
    MyVector(int);

    int getSize();
    void push_back(int);
    void insert(int, int);
    void pop_back();
    void erase(int);
    int operator[](int);
    friend MyVector& operator+(const MyVector&, const MyVector&);

    virtual ~MyVector();

};


#endif //MYVECTORFINAL_MYVECTOR_H
