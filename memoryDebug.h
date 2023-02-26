#ifndef _memoryDebug_h_
#define _memoryDebug_h_

#include <ESP8266WiFi.h>

class memoryDebug
{
private:
  int last_memory_status;
  int actual_memory_status;
public:

  memoryDebug();
  void debug();
};

memoryDebug::memoryDebug()
{
  actual_memory_status = ESP.getFreeHeap();
}

void memoryDebug::debug()
{
  last_memory_status = actual_memory_status;
  actual_memory_status = ESP.getFreeHeap();
  Serial.println(last_memory_status - actual_memory_status + " bytes used");
}

#endif 