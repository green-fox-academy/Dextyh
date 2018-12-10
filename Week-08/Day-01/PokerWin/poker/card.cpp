#include "card.h"

Card::Card(Value value) {
    _value = value;
}

Value Card::getValue() {
    return _value;
}
