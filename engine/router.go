package main

import "net/http"

func InitRouter(){
	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request){
		w.Write([]byte("engine router running"))
	})

	http.HandleFunc("/health", func(w http.ResponseWriter, r *http.Request){
		w.Write([]byte("ok"))
	})
}
