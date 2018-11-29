# JUEGO

Manifiesto de archivos:

1 info
2 tank-e (tanken)
3 player
4 punto
5 main

Mecánica del Juego:

Controles:
Para moverse se usan las teclas W,A,S,D, para el jugador uno y las teclas direccionales para el jugador dos el jugador uno dispara  con espacio y el jugador dos con enter por otro lado en el modo en solo los controles son los mismos que del jugador uno del multiplayer

Estados del juego:
El juego tiene dos modos: para un solo jugador y para dos jugadores. El objetivo es disparar y derrotar al otro jugador además de que los enemigos buscan chocarte y así destruirte, tú tienes que destruirlos a ellos para pasar de nivel y así llegar al jefe final.

Información sobre el desarrollo:

El desarrollo de este juego está hecho en C++ ayudado de la librería grafica Allegro 

Bugs:

El sprite del tanque apunta hacia dónde camina, pero cuando choca con la pared por unos segundos el tanque camina hacia la derecha

Solución de problemas:

Para solucionar los problemas se tuvo un proceso de falla y error en los cuales se eliminaron y reformularon las clases, razonamientos e ideas para el juego en donde lo más resaltante es el cambio de que la bala heredaba al personaje lo cual fue cambiado y hecho al revés  

Integrantes:
	Carmen Rosa Barriga Puente de la Vega
	Daniel Augusto Eloy del Carpio Huayhua
	Alex Neyra Herrada

Un registro de cambios:

En las clases de todo ser publico paso a tener parte privada y protegida, se añadió la clase tanque enemigo, se reformulo la clase bala.
