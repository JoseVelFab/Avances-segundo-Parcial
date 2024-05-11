# Avances-segundo-Parcial
Trabajo de Jose Manuel Velazquez 23110161 3F

# DungeonCrawler
"Un "dungeon crawl" es un tipo de escenario en juegos de rol de fantasía 
en el que los héroes exploran un entorno de laberinto (un "calabozo"), 
luchando contra varios monstruos, evitando trampas, resolviendo acertijos y saqueando cualquier tesoro que puedan encontrar. 
Los videojuegos y juegos de mesa que presentan predominantemente elementos de "dungeon crawl" se consideran parte de este género."

En este proyecto se piensa adoptar esta idea para hacer un videojuego de vista superior influenciado por el juego "Moonlighter" del estudio "11 bit studios"

## Descripcion del juego
En este juego tu controlas un personaje que usa una espada y explora una serie de cuartos que tienen cosas generadas al azar, desde enemigos hasta objetos, el objetivo es llegar a la sala del jefe y derrotarlo para seguir bajando a mas cuartos hasta que el personaje muera el juego es infinito.



## Carpetas
- bin/ - Contiene los ejecutables del proyecto 
- src/ - Contiene el codigo fuente 
- include/ - Los archivos de cabecera 
- assets/ - Contiene los recursos del proyecto 
- docs/ - Contiene la documentacion del archivo 

# Dependencias

## FTXUI
```Bash
git clone https://github.com/ArthurSonzogni/FTXUI.git
sudo apt install cmake
cd FTXUI
mkdir build
cd build
cmake ..
make
sudo make install
```


## Indicaciones
Subir un enlace de repositorio del juego
- Incluir el ejecutable, el codigo fuente y avances de la documentacion
Notas:
- Video de demostracion, unos 30s ejecutandolo
- Archivo readme actualizado con descripcion del proyecto en formato markdown (https://markdown.es/sintaxis-markdown/)
- Crear un archivo .hpp para cada una de las clases del diagrama en la carpeta include
- Crear un makefile para compilar y ejecutar el proyecto
- Diagrama de clases actualizado:
Que tenga las 3 Relaciones
Que contenga la multiplicidad
Metodos son verbos
Clases en PascalCase
- Codigo Formateado (Correctamente identado)
- Clases deben estar en PascalCase
- instancias definidas en camelCase
- respetar estructura de archivos /bin, /docs, /data, /include, /src, etc
- Que el codigo compile
- Que tenga avances de la funcionalidad con el juego que Eligieron (Imagenes, animacion, movimento, etc)
