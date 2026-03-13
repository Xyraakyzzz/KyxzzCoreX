#include "core/engine.h"

int main(int argc,char**argv){
Engine engine;
engine.initialize();
engine.execute(argc,argv);
engine.shutdown();
return 0;
}
