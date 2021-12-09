#pragma once

#include <chrono>

class Time {
private:

	std::chrono::system_clock::time_point  startTimeDir;
	std::chrono::system_clock::time_point  nowTimeDir;

	int nowTime;
	int oneBeatTime;

public:
	const static int oneSec = 1000;

	~Time();

	Time(const float bpm = 150.f);

	int getOneBeatTime();
	int getNowTime();

	void changeBPM(const float bpm);

	void start();
	void update();
};
