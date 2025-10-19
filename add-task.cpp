void addTask(vector<Task>& tasks) {
    Task newTask;
    cout << "Enter task title: ";
    getline(cin, newTask.title);
    newTask.isCompleted = false;
    tasks.push_back(newTask);
    cout << "✅ Task added successfully!\n";
}

// Function to view all tasks
void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks found.\n";
        return;
    }

    cout << "\n----- Your Tasks -----\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].title;
        if (tasks[i].isCompleted)
            cout << " (✅ Completed)";
        cout << "\n";
    }
}

// Function to mark a task as done
void markTaskDone(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to mark.\n";
        return;
    }


 int taskNumber;
    viewTasks(tasks);
    cout << "Enter task number to mark as completed: ";
    cin >> taskNumber;

    if (taskNumber > 0 && taskNumber <= (int)tasks.size()) {
        tasks[taskNumber - 1].isCompleted = true;
        cout << "✅ Task marked as completed!\n";
    } else {
        cout << "Invalid task number.\n";
    }
}