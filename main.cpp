#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Define a Task structure
struct Task {
    int id;
    std::string name;
    std::string status; // "To Do", "In Progress", "Done"
};

// Global vector to store tasks
std::vector<Task> tasks;
int taskCounter = 1;

// Function prototypes
void addTask();
void updateTask();
void deleteTask();
void listTasks();
void listTasksByStatus(const std::string& status);
void displayMenu();

int main() {
    while (true) {
        displayMenu();
        int choice;
        std::cin >> choice;
        std::cin.ignore(); // Ignore leftover newline

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                updateTask();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                listTasks();
                break;
            case 5:
                listTasksByStatus("Done");
                break;
            case 6:
                listTasksByStatus("To Do");
                break;
            case 7:
                listTasksByStatus("In Progress");
                break;
            case 8:
                std::cout << "Exiting the Task Tracker. Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}

// Function to display the menu
void displayMenu() {
    std::cout << "\n--- Task Tracker Menu ---\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. Update Task\n";
    std::cout << "3. Delete Task\n";
    std::cout << "4. List All Tasks\n";
    std::cout << "5. List Done Tasks\n";
    std::cout << "6. List To Do Tasks\n";
    std::cout << "7. List In Progress Tasks\n";
    std::cout << "8. Exit\n";
    std::cout << "Enter your choice: ";
}

// Function to add a task
void addTask() {
    std::string name;
    std::cout << "Enter the task name: ";
    std::getline(std::cin, name);

    Task newTask = {taskCounter++, name, "To Do"};
    tasks.push_back(newTask);

    std::cout << "Task added successfully!\n";
}

// Function to update a task
void updateTask() {
    int id;
    std::cout << "Enter the task ID to update: ";
    std::cin >> id;
    std::cin.ignore();

    for (auto& task : tasks) {
        if (task.id == id) {
            std::cout << "Enter new name for the task (leave blank to keep current name): ";
            std::string newName;
            std::getline(std::cin, newName);
            if (!newName.empty()) {
                task.name = newName;
            }

            std::cout << "Choose new status:\n";
            std::cout << "1. To Do\n";
            std::cout << "2. In Progress\n";
            std::cout << "3. Done\n";
            int statusChoice;
            std::cin >> statusChoice;
            std::cin.ignore();

            switch (statusChoice) {
                case 1:
                    task.status = "To Do";
                    break;
                case 2:
                    task.status = "In Progress";
                    break;
                case 3:
                    task.status = "Done";
                    break;
                default:
                    std::cout << "Invalid status choice. Status not updated.\n";
            }

            std::cout << "Task updated successfully!\n";
            return;
        }
    }

    std::cout << "Task with ID " << id << " not found.\n";
}

// Function to delete a task
void deleteTask() {
    int id;
    std::cout << "Enter the task ID to delete: ";
    std::cin >> id;

    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->id == id) {
            tasks.erase(it);
            std::cout << "Task deleted successfully!\n";
            return;
        }
    }

    std::cout << "Task with ID " << id << " not found.\n";
}

// Function to list all tasks
void listTasks() {
    std::cout << "\n--- All Tasks ---\n";
    for (const auto& task : tasks) {
        std::cout << "ID: " << task.id 
                  << ", Name: " << task.name 
                  << ", Status: " << task.status << "\n";
    }
}

// Function to list tasks by status
void listTasksByStatus(const std::string& status) {
    std::cout << "\n--- " << status << " Tasks ---\n";
    for (const auto& task : tasks) {
        if (task.status == status) {
            std::cout << "ID: " << task.id 
                      << ", Name: " << task.name << "\n";
        }
    }
}
