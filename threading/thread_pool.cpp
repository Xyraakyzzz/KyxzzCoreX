#include "thread_pool.h"
#include <thread>

ThreadPool::ThreadPool(int n){
size=n;
}

void ThreadPool::start(){
for(int i=0;i<size;i++){
workers.emplace_back([this]{
loop();
});
}
}

void ThreadPool::loop(){
while(running){
}
}
