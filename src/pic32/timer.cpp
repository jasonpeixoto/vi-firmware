#include "timer.h"
#include "WProgram.h"

void openxc::util::time::delayMs(int delayInMs) {
    delay(delayInMs);
}

unsigned long openxc::util::time::systemTimeMs() {
    return millis();
}

void openxc::util::time::initializeTimers() { }
