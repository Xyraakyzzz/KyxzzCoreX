package main

import "time"

func StartScheduler(){
	for{
		time.Sleep(5*time.Second)
		ExecuteTask("heartbeat")
	}
}
