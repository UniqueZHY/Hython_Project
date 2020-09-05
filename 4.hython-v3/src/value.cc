#include <value.h>

namespace haizei {

IntValue::IntValue(int val) : BaseValue(val) {}
FloatValue::FloatValue(double val) : BaseValue(val) {}
StringValue::StringValue(std::string val) : BaseValue(val) {}

bool StringValue::isTrue() {
    if (val == "") return false;
    return true;
}

SIValue HZNULL = std::make_shared<IntValue>(0);

} // end of haizei
