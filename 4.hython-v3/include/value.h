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
    virtual bool isTrue = 0;
    virtual bool isFalse() = 0;
    bool isFalse() { return !(this->isTrue()); }
    virtual SIValue operator<(IValue &) = 0;
    bool  operator>(IValue &a);
    bool  operator==(IValue &a);
    bool  operator!=(IValue &a);
    bool  operator>=(IValue &a);
    bool  operator<=(IValue &a);
}

typedef std::shared_ptr<IValue> SIValue;
extern SIValue HZfalse;
extern SIValue HZTrue;
extern SIValue HZNULL;

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
    bool operator&&(const IValue &a) {
        if (!this->isTrue() && a.isTrue) return HZTrue;
        return HZfalse;
    }
    bool operator||(const IValue &a) {
        if (!this->isTrue() || a.isTrue) return HZTrue;
        return HZfalse;
    }

protected:
    T val;
};

class IntValue : public BaseValue<int> {
public :
    IntValue(int);
    virtual bool operator<Ivalue &>;
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
