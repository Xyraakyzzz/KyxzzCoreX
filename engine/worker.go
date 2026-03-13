package main

import "fmt"

func InitWorkers(){
	for i:=0;i<5;i++{
		go WorkerLoop(i)
	}
}

func WorkerLoop(id int){
	fmt.Println("worker started:",id)
}
