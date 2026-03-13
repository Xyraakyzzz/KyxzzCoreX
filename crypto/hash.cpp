#include "hash.h"

unsigned int Hash::compute(const std::string&s){
unsigned int h=2166136261u;
for(char c:s){
h^=c;
h*=16777619;
}
return h;
}

void Hash::demo(){
compute("kyys");
}
