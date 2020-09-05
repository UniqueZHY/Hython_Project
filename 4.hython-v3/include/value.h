/*************************************************************************
	> File Name: value.h
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 四  9/ 3 09:57:04 2020
 ************************************************************************/

#ifndef _VALUE_H
#define _VALUE_H

#include <string>
#include <memory>

namespace haizei {

class IValue {
public :
    virtual std::string toString() = 0;
};

typedef std::shared_ptr<IValue> SIValue;

template<typename T>
class BaseValue : public IValue {
public :
    BaseValue(T val) : val(val) {}
    virtual std::string toString() {
        return std::to_string(val);
    }
    virtual bool isTrue() {
        if (val) return true;
        return false;
    }
    bool isFalse() { return !(this->isTrue()); }

protected:
    T val;
};

class IntValue : public BaseValue<int> {
public :
    IntValue(int);
};

class FloatValue : public BaseValue<double> {
public :
    FloatValue(double);
};

class StringValue : public BaseValue<std::string> {
public :
    StringValue(std::string);
    virtual bool isTrue();
};

extern SIValue HZNULL;

} // end of namespace haizei

#endif
