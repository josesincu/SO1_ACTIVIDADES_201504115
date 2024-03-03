# chatB.sh
#!/bin/bash

# Definir el nombre del FIFO
PIPE=/tmp/chat_fifo

# Crear el FIFO si no existe
[ -p $PIPE ] || mkfifo $PIPE


# Bucle para leer mensajes y enviarlos
while true; do   
    read mensajeB
    echo "chatB: $mensajeB" >> $PIPE
done
