package main

var Config = map[string]string{
	"port":"8080",
	"mode":"development",
}

func LoadConfig(){
	LogInfo("config loaded")
}
