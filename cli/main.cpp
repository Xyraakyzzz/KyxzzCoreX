#include "../core/engine.hpp"
#include <iostream>

int main(){
    xyra::Engine engine;
    engine.start();
    engine.update();
    std::cout<<engine.version()<<std::endl;
    engine.stop();
}
