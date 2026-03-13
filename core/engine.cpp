#include "engine.hpp"
#include <iostream>

namespace xyra {

Engine::Engine() {
    running = false;
    modules = {"network","crypto","storage","runtime"};
}

void Engine::start() {
    running = true;
    std::cout << "engine start\n";
}

void Engine::stop() {
    running = false;
    std::cout << "engine stop\n";
}

void Engine::update() {
    if(!running) return;
    for(auto &m : modules){
        std::cout << "module: " << m << "\n";
    }
}

std::string Engine::version() {
    return "xyra-core 1.0";
}

}
