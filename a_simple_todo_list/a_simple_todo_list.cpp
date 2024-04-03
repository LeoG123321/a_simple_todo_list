/*
    Leonardo Gonzalez   4/2/2024
    
    Week 12             A Simple Todo List
*/

#include <iostream>
#include "TodoList.h"

using namespace std;

void no_task_error_message();
void out_of_range_error_message();

int main()
{
    TodoList todo_list;
    int main_menu_input = 0;
    int sub_menu_input;
    string task_name_input;

    cout << "Hello User!" << endl;
    while (main_menu_input != -1) {
        cout << "What would you like to do?" << endl
            << "Type a number that corresponds with your decision." << endl << endl
            << "1 Create a Task" << endl
            << "2 Complete a Task" << endl
            << "3 Display Todo List" << endl
            << "4 Display Completed Tasks" << endl
            << "5 Display Incompleted Tasks" << endl
            << "-1 Quit Program" << endl;

        cin >> main_menu_input;
        switch (main_menu_input) {
            case 1:
                cout << "Please Input Your Task to add to the Todo List:" << endl;
                getline(cin, task_name_input);  //Cleans up to allow input
                getline(cin, task_name_input);
                todo_list.add_task(task_name_input);
                cout << endl << endl;
                break;

            case 2:
                if (todo_list.get_amount_of_tasks() != 0) {
                    cout << "Select the Number With the Corresponding Task you Have Completed" << endl << endl;
                    todo_list.select_complete_task_list();
                case_2_redo:
                    cin >> sub_menu_input;
                    if (sub_menu_input >= 0 && sub_menu_input < todo_list.get_amount_of_tasks()) {
                        todo_list.complete_task(sub_menu_input);
                    }
                    else {
                        out_of_range_error_message();
                        goto case_2_redo;
                    }
                }
                else {
                    no_task_error_message();
                }
                
                break;

            case 3:
                if (todo_list.get_amount_of_tasks() != 0) {
                    todo_list.all_task_list();
                }
                else {
                    no_task_error_message();
                }
                break;

            case 4:
                if (todo_list.get_amount_of_tasks() != 0) {
                    todo_list.completed_task_list();
                }
                else {
                    no_task_error_message();
                }
                break;

            case 5:
                if (todo_list.get_amount_of_tasks() != 0) {
                    todo_list.incomplete_task_list();
                }
                else {
                    no_task_error_message();
                }
                break;

            case -1:
                break;

            default:
                out_of_range_error_message();
        }
    }
}

void no_task_error_message() {
    cout << "Error: There is no tasks in the Todo List. Please add a Task First." << endl;
}

void out_of_range_error_message() {
    cout << "Error: Input Out of Range. Try Again." << endl;
}