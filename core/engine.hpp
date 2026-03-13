#pragma once
#include <string>
#include <vector>

namespace xyra {

class Engine {
public:
    Engine();
    void start();
    void stop();
    void update();
    std::string version();

private:
    bool running;
    std::vector<std::string> modules;
};

}
