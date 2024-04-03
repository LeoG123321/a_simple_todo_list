/*
    Leonardo Gonzalez   4/2/2024
    
    Week 12             A Simple Todo List
*/

#include <iostream>
#include "TodoList.h"

using namespace std;

int main()
{
    TodoList todo_list;
    int main_menu_input = 0;
    int sub_menu_input;

    cout << "Hello User!" << endl;
    while (main_menu_input != -1) {
        cout << "What would you like to do?" << endl
            << "Type a number that corresponds with your decision." << endl << endl
            << "1 Create a Task" << endl
            << "2 Complete a Task";
    }
}
