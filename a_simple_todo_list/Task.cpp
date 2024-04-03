#include "Task.h"

Task::Task(string task) {
	complete = false;
	this->task = task;
}

void Task::complete_task() {
	complete = true;
}

string Task::get_task_name() {
	return task;
}

bool Task::get_complete_status() {
	return complete;
}