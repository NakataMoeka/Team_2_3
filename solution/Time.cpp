#include "Time.h"

using namespace std::chrono;

Time::~Time() {

}

Time::Time(const float bpm) :
	nowTime(0),
	oneBeatTime(60 * oneSec / bpm),
	startTimeDir(system_clock::now()),
	nowTimeDir(startTimeDir) {

}

int Time::getOneBeatTime() { return oneBeatTime; }
int Time::getNowTime() { return nowTime; }

void Time::changeBPM(const float bpm) { oneBeatTime = 60 * oneSec / bpm; }

void Time::start() {
	startTimeDir = system_clock::now();
}

void Time::update() {
	nowTimeDir = system_clock::now();
	nowTime = duration_cast<milliseconds>(nowTimeDir - startTimeDir).count();
}
