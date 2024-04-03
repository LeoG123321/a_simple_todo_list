#include "TodoList.h"
#include <iostream>
using namespace std;

TodoList::TodoList() {
	return;
}

void TodoList::add_task(string task) {
	Task place_holder(task);
	task_list.push_back(task);
}

void TodoList::complete_task(int index) {
	task_list[index].complete_task();
}

void TodoList::select_complete_task_list() {
	cout << endl << endl;
	for (int i = 0; i < task_list.size(); i++) {
		if (!task_list[i].get_complete_status()) {
			cout << i << " [ ] " << task_list[i].get_task_name() << endl;
		}
	}
	cout << endl << endl;
}

void TodoList::all_task_list() {
	cout << endl << endl;

	for (int i = 0; i < task_list.size(); i++) {
		if (task_list[i].get_complete_status()) {
			cout << " [X] " << task_list[i].get_task_name() << endl;
		}
		else {
			cout << " [ ] " << task_list[i].get_task_name() << endl;
		}
	}
	cout << endl << endl;
}

void TodoList::completed_task_list() {
	cout << endl << endl;

	for (int i = 0; i < task_list.size(); i++) {
		if (task_list[i].get_complete_status()) {
			cout << " [X] " << task_list[i].get_task_name() << endl;
		}
	}
	cout << endl << endl;
}

void TodoList::incomplete_task_list() {
	cout << endl << endl;

	for (int i = 0; i < task_list.size(); i++) {
		if (!task_list[i].get_complete_status()) {
			cout << " [ ] " << task_list[i].get_task_name() << endl;
		}
	}
	cout << endl << endl;
}

int TodoList::get_amount_of_tasks() {
	return task_list.size();
}


void TodoList::clear() {
	vector<Task> empty;
	task_list = empty;
}