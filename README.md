# Task Tracker CLI Application

A simple **Command Line Interface (CLI) Task Tracker** application to manage your to-do list. This project helps track your tasks, manage their statuses, and improve productivity. It's designed to practice fundamental programming skills such as file handling, user input, and CLI design.

This project is part of the **[roadmap.sh projects](https://roadmap.sh/projects/task-tracker)** collection. Follow the link to explore more exciting projects for learning and development.

---

## Features

- **Add Tasks**: Add new tasks with a default status of `To Do`.
- **Update Tasks**: Modify task names or statuses (`To Do`, `In Progress`, or `Done`).
- **Delete Tasks**: Remove tasks by their unique ID.
- **List All Tasks**: View all tasks with their details.
- **Filter Tasks by Status**:
  - List tasks marked as `Done`.
  - List tasks marked as `To Do`.
  - List tasks marked as `In Progress`.

---

## How to Use

### Prerequisites

- A C++ compiler (e.g., GCC).

### Setup

1. **Clone or Download the Repository**  
   Download the project files or clone the repository:
   ```bash
   git clone https://github.com/Yashi-Singh-9/Task-Tracker---Roadmap-Project.git
   cd Task-Tracker---Roadmap-Project
   ```

2. **Compile the Program**  
   Use a C++ compiler to build the project:
   ```bash
   g++ -o task_tracker task_tracker.cpp
   ```

3. **Run the Program**  
   Execute the compiled program:
   ```bash
   ./task_tracker
   ```

---

## Application Flow

1. Launch the program.
2. Use the menu to interact with the task tracker:
   - Add tasks by providing a name.
   - Update tasks by specifying their ID and new details.
   - Delete tasks by their ID.
   - View tasks, either all or filtered by their status.
3. Exit the program when done.

---

## Example Interaction

```
--- Task Tracker Menu ---
1. Add Task
2. Update Task
3. Delete Task
4. List All Tasks
5. List Done Tasks
6. List To Do Tasks
7. List In Progress Tasks
8. Exit
Enter your choice: 1

Enter the task name: Finish roadmap.sh project
Task added successfully!
```

---

## Contributing

Contributions are welcome! Feel free to:
- Report bugs.
- Suggest features.
- Fork the repository and submit pull requests.

---

## Learn More

This project is part of **[roadmap.sh's Task Tracker](https://roadmap.sh/projects/task-tracker)** project list. Check out roadmap.sh for more structured programming and project learning paths.

---

## License

This project is open-source and available under the [MIT License](LICENSE).
