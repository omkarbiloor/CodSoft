#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string task;
    bool completed;
};
class ToDoList {
private:
    vector<Task> tasks;
public:
    void addTask(const string& task) {
        tasks.push_back({task, false});
        cout << "Task added: " << task << endl;
    }
    void viewTasks() {
        cout << "To-Do List:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i+1 << ". ";
            cout << (tasks[i].completed ? "[X] " : "[ ] ");
            cout << tasks[i].task << endl;
        }
    }
    void markTaskAsCompleted(size_t index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << "Task marked as completed: " << tasks[index].task << endl;
        } else {
            cout << "Invalid task index.\n";
        }
    }
    void removeTask(size_t index) {
        if (index >= 0 && index < tasks.size()) {
            cout << "Task removed: " << tasks[index].task << endl;
            tasks.erase(tasks.begin() + index);
        } else {
            cout << "Invalid task index.\n";
        }
    }
};

int main() {
    ToDoList toDoList;
    char choice;
    string task;
    size_t index;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case '1':
                cout << "Enter task d: ";
                cin.ignore();
                getline(cin, task);
                toDoList.addTask(task);
                break;
            case '2':
                toDoList.viewTasks();
                break;
            case '3':
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                toDoList.markTaskAsCompleted(index - 1);
                break;
            case '4':
                cout << "Enter task index to remove: ";
                cin >> index;
                toDoList.removeTask(index - 1);
                break;
            case '5':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '5');
    return 0;
}