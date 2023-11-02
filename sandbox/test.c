int main() {
    pid_t child_pid = fork();
    
    if (child_pid == 0) {
        // This code runs in the child process
        // Change the child's process group to its own PID
        setpgid(0, 0);
        printf("Child process (PID %d) is in its own process group.\n", getpid());
    } else {
        // This code runs in the parent process
        printf("Parent process (PID %d) created child process (PID %d).\n", getpid(), child_pid);
    }

    return 0;
}