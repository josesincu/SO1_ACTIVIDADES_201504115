# ACTIVIDAD 7 - Completely Fair Scheduler

 ### El Completely Fair Scheduler (CFS) es el planificador de procesos predeterminado en el kernel de Linux desde la versión 2.6.23. Su objetivo principal es asignar de manera justa el tiempo de CPU entre los procesos en ejecución, garantizando que cada proceso obtenga una parte equitativa del tiempo de CPU disponible.

## Las características principales y el funcionamiento del CFS son los siguientes:

## Justicia: 
### CFS implementa un algoritmo basado en el concepto de "fairness", lo que significa que trata de garantizar que todos los  ###   procesos reciban una cantidad justa de tiempo de CPU. No prioriza ningún proceso sobre otros en términos de acceso a la CPU.

## Modelo de tiempo compartido: 
### CFS utiliza un modelo de tiempo compartido para asignar el tiempo de CPU a los procesos en ejecución. Cada proceso recibe una cuota de tiempo de CPU proporcional a su peso relativo. Los procesos con un peso más alto obtienen más tiempo de CPU en comparación con los procesos con un peso más bajo.

## Implementación basada en árboles de búsqueda binaria rojo-negro: 
### CFS organiza los procesos en un árbol de búsqueda binaria rojo-negro para facilitar la búsqueda eficiente del próximo proceso a ejecutar. Esto permite que CFS mantenga un rendimiento óptimo incluso con un gran número de procesos en ejecución.

## Prioridad dinámica: 
### A diferencia de los planificadores de prioridad estática, como el planificador de prioridad de Linux (O(1)), CFS no asigna prioridades fijas a los procesos. En su lugar, ajusta dinámicamente las prioridades de los procesos en función de su uso histórico de la CPU. Esto significa que los procesos que han utilizado menos tiempo de CPU en el pasado tendrán prioridad sobre los procesos que han utilizado más tiempo.

## Entrega del tiempo de CPU por período de tiempo: 
   ### CFS asigna el tiempo de CPU en "rebanadas" (slices) de tiempo, que son períodos pequeños y equitativos de tiempo de CPU. Cada proceso recibe una rebanada de tiempo durante la cual se le permite ejecutarse. Si un proceso no utiliza todo su tiempo de CPU asignado durante una rebanada, el tiempo restante se acumula y se le otorga en futuras rebanadas.

### El CFS de Linux es un planificador de procesos diseñado para proporcionar una distribución justa y equitativa del tiempo de CPU entre los procesos en ejecución, utilizando un modelo de tiempo compartido y una asignación dinámica de prioridades. Su implementación eficiente y su enfoque en la justicia hacen que sea una parte fundamental del núcleo de Linux para garantizar un rendimiento equitativo del sistema.