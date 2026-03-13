package main

import "fmt"

type Engine struct {
	Name string
	Version string
}

func (e *Engine) Start(){
	fmt.Println("engine started:", e.Name, e.Version)
}

func main(){
	e := Engine{
		Name: "CoreEngine",
		Version: "1.0",
	}

	e.Start()
	InitRuntime()
	InitWorkers()
}
