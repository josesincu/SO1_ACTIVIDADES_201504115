// Build:   gcc proceso_zombie.c -o proceso_zombie -lpthread
// Run:     ./proceso_zombie


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid;

    // Crear un proceso hijo
    child_pid = fork();

    if (child_pid < 0) {
        // Error al crear el proceso hijo
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) {
        // Código del proceso hijo
        printf("Soy el proceso hijo con PID: %d\n", getpid());
        // El proceso hijo se convierte en zombie
        exit(EXIT_SUCCESS);
    } else {
        // Código del proceso padre
        printf("Proceso padre esperando 10 segundos...\n");
        sleep(10); // Esperar 10 segundos
        // El proceso padre espera al hijo para que no se convierta en zombie permanente
        wait(NULL);
        printf("Proceso hijo ha terminado.\n");
    }

    return 0;
}
