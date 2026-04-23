# Gestión de Datos Dinámicos en C++

Este es un **miniproyecto** desarrollado en C++ que permite la gestión interactiva de una serie de números ingresados por el usuario. El programa calcula automáticamente estadísticas básicas en tiempo real.

## 🚀 Funcionalidades

El programa presenta un menú interactivo con las siguientes opciones:

1. **Cargar datos**: Permite ingresar una lista de números enteros. Para finalizar la carga, se debe ingresar `-1`.
2. **Mostrar datos**: Calcula y despliega en pantalla:
    * Valor **mínimo** ingresado.
    * Valor **máximo** ingresado.
    * **Promedio** de todos los números.
3. **Cerrar**: Finaliza la ejecución de la aplicación.

## 🛠️ Conceptos Utilizados

* **Lógica de Programación**: Uso de bucles infinitos con condiciones de ruptura (`romper`).
* **Estructuras de Control**: `mientras` (while) y condicionales `si` / `demás si` (if / else if).
* **Tipos de Datos**: Manejo de `entero`, `flotar` (float), `cadena` (string) y `booleano`.
* **Algoritmos**: Lógica para determinar extremos (mínimo/máximo) y acumuladores.

## 💻 Ejecución

Para compilar y ejecutar este programa, asegurate de tener un compilador de C++ (como GCC) y utilizá los siguientes comandos en tu terminal:

```bash
g++ menú-interactivo.cpp -o miniproyecto
./miniproyecto
