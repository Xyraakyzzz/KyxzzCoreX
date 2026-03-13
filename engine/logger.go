package main

import "fmt"

func LogInfo(msg string){
	fmt.Println("[INFO]",msg)
}

func LogError(msg string){
	fmt.Println("[ERROR]",msg)
}
