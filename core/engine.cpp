#include "engine.h"
#include "../cli/parser.h"
#include "../network/http_client.h"
#include "../crypto/hash.h"
#include "../threading/thread_pool.h"

void Engine::initialize(){
ThreadPool pool(4);
pool.start();
}

void Engine::execute(int argc,char**argv){
Parser parser;
parser.parse(argc,argv);

HttpClient client;
client.test();

Hash hash;
hash.demo();
}

void Engine::shutdown(){}
