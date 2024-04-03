#include "TodoList.h"
#include <iostream>
#include <iterator>
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
	vector<Task>::iterator ptr;
	int index = 0;
	for (ptr = task_list.begin(); ptr < task_list.end(); ptr++) {
		if (!(*ptr).get_complete_status()) {
			cout << index << " [ ] " << (*ptr).get_task_name() << endl;
		}
		index++;
	}
	cout << endl << endl;
}

void TodoList::all_task_list() {
	cout << endl << endl;
	vector<Task>::iterator ptr;

	for (ptr = task_list.begin(); ptr < task_list.end(); ptr++) {
		if ((*ptr).get_complete_status()) {
			cout << " [X] " << (*ptr).get_task_name() << endl;
		}
		else {
			cout << " [ ] " << (*ptr).get_task_name() << endl;
		}
	}
	cout << endl << endl;
}

void TodoList::completed_task_list() {
	cout << endl << endl;
	vector<Task>::iterator ptr;

	for (ptr = task_list.begin(); ptr < task_list.end(); ptr++) {
		if ((*ptr).get_complete_status()) {
			cout << " [X] " << (*ptr).get_task_name() << endl;
		}
	}
	cout << endl << endl;
}

void TodoList::incomplete_task_list() {
	cout << endl << endl;
	vector<Task>::iterator ptr;

	for (ptr = task_list.begin(); ptr < task_list.end(); ptr++) {
		if (!(*ptr).get_complete_status()) {
			cout << " [ ] " << (*ptr).get_task_name() << endl;
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