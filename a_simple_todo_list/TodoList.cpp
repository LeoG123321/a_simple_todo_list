#include "TodoList.h"

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

void TodoList::all_task_list() {

}

void TodoList::completed_task_list() {

}

void TodoList::incomplete_task_list() {

}

void TodoList::clear() {
	vector<Task> empty;
	task_list = empty;
}