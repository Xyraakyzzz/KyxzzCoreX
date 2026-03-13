package main

type Memory struct{
	Data map[string]interface{}
}

func NewMemory()*Memory{
	return &Memory{
		Data: make(map[string]interface{}),
	}
}

func (m *Memory)Set(key string,value interface{}){
	m.Data[key] = value
}

func (m *Memory)Get(key string)interface{}{
	return m.Data[key]
}
