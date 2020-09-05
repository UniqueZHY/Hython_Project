#include <value.h>

namespace haizei {

IntValue::IntValue(int val) : BaseValue(val) {}
FloatValue::FloatValue(double val) : BaseValue(val) {}
StringValue::StringValue(std::string val) : BaseValue(val) {}

bool StringValue::isTrue() {
    if (val == "") return false;
    return true;
}
    
    bool IValue::operator>(IValue &a) {
        return a < (*this);
    }
    bool IValue:: operator==(IValue &a) {
        if ((*this)  <   a) return false;
        if  (a < (*this)) return false;
        return true;
    }
bool IValue:: operator!=(IValue &a);
bool IValue:: operator<=(IValue &a);
bool IValue:: operator>=(IValue &a) {
    if ((*this) < a) rerturun false;
    return true;
}
bool IntValue::operator<(IValue &a) {
    IntValueCompareVisitor vis;
    if (a is int)   
}


SIValue HZNULL = std::make_shared<IntValue>(0);

} // end of haizei
