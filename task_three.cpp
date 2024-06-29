#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& desc) {
        
        cout << "Task added: " << desc << endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        } else {
            cout << "To-Do List:" << endl;
            cout << "---------------------------------" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". ";
                if (tasks[i].completed)
                    cout << "[Done] ";
                else
                    cout << "[Pending] ";
                cout << tasks[i].description << endl;
            }
            cout << "---------------------------------" << endl;
        }
    }

    void deleteTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            cout << "Task deleted: " << tasks[index - 1].description << endl;
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task number." << endl;
        }
    }
};

int main() {
    TodoList todoList;
    int choice;
    string desc;
    size_t taskNum;

    do {
        cout << endl;
        cout << "Simple To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                getline(cin, desc);
                todoList.addTask(desc);
                break;
            case 2:
                todoList.viewTasks();
                break;
            case 3:
                cout << "Enter task number to delete: ";
                cin >> taskNum;
                todoList.deleteTask(taskNum);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}

