#include <iostream>

#include "strategy/StrategyPatterns.h"
#include "observer/ObserverPatterns.h"
#include "decorator/DecoratorPatterns.h"
#include "factory/FactoryPatterns.h"
#include "state/StatePatterns.h"

int main() {
    // Strategy Patterns;
    StrategyPatterns::execute();
    // Observer Patterns
    ObserverPatterns::execute();
    // Decorator Patterns
    DecoratorPatterns::execute();
    // Factory Patterns
    FactoryPatterns::execute();
    // State Pattern
    StatePatterns::execute();
    return 0;
}