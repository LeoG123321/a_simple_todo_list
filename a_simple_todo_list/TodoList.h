#pragma once
#include "Task.h"
#include <vector>
using namespace std;
class TodoList
{
private:
	vector<Task> task_list;
public:
	TodoList();

	void add_task(string task);
	void complete_task(int index);
	
	void all_task_list();
	void completed_task_list();
	void incomplete_task_list();

	int get_amount_of_tasks();

	void clear();
};

