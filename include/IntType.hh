#ifndef Bifrost_IntType_
#define Bifrost_IntType_

#include "PyType.hh"
#include "TypeEnum.hh"

#include <Python.h>

#include <iostream>

/**
 * @brief This class represents the 'int' type in Python, which is represented as a 'long' in C++. It inherits from the PyType class
 */
class IntType : public PyType {
public:
IntType(PyObject *object);
IntType(long n);
const TYPE returnType = TYPE::INT;
long getValue() const;

protected:
virtual void print(std::ostream &os) const override;
};

#endif