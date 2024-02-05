# Sistemas Operativos:

##  Kernel
### Tipos de Kernel y sus diferencias
#### Monolítico:

Definición: En un kernel monolítico, todas las funciones del sistema operativo se ejecutan en un solo espacio de memoria.

Características:
Mayor eficiencia en términos de rendimiento, ya que no hay gastos generales de comunicación entre módulos.
Menor modularidad, ya que todas las funciones están integradas en un solo núcleo.
Ejemplos: Linux (en la mayoría de las distribuciones), Windows NT.

#### Microkernel:

Definición: 
En un kernel microkernel, se implementa solo un conjunto mínimo de funciones esenciales en el espacio del kernel, y otras funciones se ejecutan como procesos del espacio de usuario.

Características:
Mayor modularidad, ya que muchas funciones del sistema operativo se implementan como procesos separados.
Menor rendimiento debido a la necesidad de comunicación entre los distintos módulos.
Ejemplos: QNX, MINIX.

#### Híbrido:

Definición: 
Un kernel híbrido combina características de los kernels monolíticos y microkernels, intentando aprovechar lo mejor de ambos enfoques.

Características:
Algunas funciones esenciales se ejecutan en el espacio del kernel, mientras que otras se implementan como módulos o procesos en el espacio de usuario.
Ejemplos: Windows (NT kernel), macOS (XNU kernel).

#### Exokernel:

Definición: 
En un exokernel, el kernel proporciona un conjunto mínimo de abstracciones de hardware y delega la gestión de recursos directamente a las aplicaciones.

Características:
Mayor flexibilidad para las aplicaciones, que tienen más control sobre los recursos.
Mayor complejidad para las aplicaciones, ya que deben manejar directamente los recursos de hardware.
Ejemplos: Xv6 (una versión de UNIX).
### User vs Kernel Mode

#### Modo Usuario (User Mode):

Definición: 
En el modo usuario, un programa o una aplicación se ejecuta con un conjunto limitado de privilegios y acceso a recursos del sistema.

Características:
Las instrucciones ejecutadas están restringidas al espacio de usuario y no tienen acceso directo al hardware o a las funciones críticas del sistema operativo.
Un programa en modo usuario no puede realizar operaciones directas sobre el hardware ni realizar ciertas operaciones privilegiadas del sistema.
La mayoría de las aplicaciones y procesos de usuario se ejecutan en este modo.

#### Modo Kernel (Kernel Mode):

Definición:
En el modo kernel, el sistema operativo y sus componentes esenciales se ejecutan con privilegios máximos y acceso completo al hardware y a todas las funciones del sistema.

Características:
El modo kernel es donde se ejecutan las partes críticas del sistema operativo, como el kernel del sistema y los controladores de dispositivo.
En este modo, las instrucciones tienen acceso completo a todos los recursos del sistema y pueden realizar operaciones privilegiadas.
Cambiar al modo kernel generalmente implica un cambio de contexto y una transición controlada desde el modo usuario.
### Interruptions vs traps
Las interrupciones (interrupts) y las trampas (traps) son mecanismos utilizados en los sistemas operativos y en la arquitectura de computadoras para manejar eventos o condiciones especiales que requieren atención del sistema operativo

#### Interrupciones (Interrupts):
*   Origen: 
Las interrupciones son eventos externos al procesador y al programa en ejecución. Pueden ser generadas por dispositivos de hardware, como temporizadores, controladores de dispositivos, o incluso señales externas.
*   Propósito: 
Su propósito principal es notificar al sistema operativo que algo ha sucedido fuera del contexto del programa en ejecución y que se requiere atención inmediata.
*   Manejo: 
Cuando se produce una interrupción, el procesador suspende la ejecución del programa actual y salta a una rutina de servicio de interrupción (ISR) en el kernel del sistema operativo para manejar la interrupción.

*   Ejemplo: 
Una interrupción puede ser generada por un reloj para realizar la programación del tiempo (timekeeping), o por un controlador de disco cuando se completa una operación de E/S.

#### Trampas (Traps):

*   Origen: Las trampas son eventos generados internamente por el programa en ejecución. También se les conoce como excepciones o fallos.

*   Propósito: Su propósito principal es manejar condiciones especiales dentro del programa, como errores aritméticos, divisiones por cero o violaciones de protección de memoria.

*   Manejo: Cuando se produce una trampa, el control pasa a una rutina de manejo de excepciones (exception handler) en el kernel del sistema operativo o en el propio programa, según la naturaleza de la trampa.

*   Ejemplo: Una trampa puede ocurrir cuando un programa intenta dividir entre cero o acceder a una ubicación de memoria no válida.