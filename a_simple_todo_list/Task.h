#pragma once
#include <string>
using namespace std;
class Task
{
private:
	bool complete;
	string task;
public:
	Task(string task);

	void complete_task();

	string get_task_name();
	bool get_complete_status();
};

