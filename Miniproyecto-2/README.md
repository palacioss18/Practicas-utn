# 🧾 Miniproyecto 2 - Sistema de Gestión de Productos

## 📌 Descripción

Este proyecto es un programa en C++ que permite gestionar precios de productos mediante un menú interactivo en consola.

El sistema permite:

* Cargar precios de productos
* Calcular el monto total
* Calcular el promedio de precios
* Clasificar los productos en categorías según su precio

---

## ⚙️ Funcionalidades

### 🔹 Menú principal

1. Cargar datos
2. Mostrar estadísticas
3. Salir

---

## 📊 Lógica del programa

Los productos se clasifican en 3 categorías:

* 🟢 **Categoría A:** $0 - $10.000
* 🟡 **Categoría B:** $10.001 - $50.000
* 🔴 **Categoría C:** Más de $50.000

Para cada categoría se calcula:

* Cantidad de productos
* Monto acumulado

Además:

* 💰 Monto total
* 📈 Promedio general

---

## 🧠 Conceptos aplicados

* Estructuras de control (`while`, `switch`, `if`)
* Variables acumuladoras y contadores
* Entrada y salida por consola (`cin`, `cout`)
* Lógica de clasificación por rangos

---

## 🛠️ Tecnologías usadas

* C++

---

## ▶️ Cómo ejecutar

1. Compilar el programa:

```bash
g++ menu-negocio.cpp -o programa
```

2. Ejecutar:

```bash
./programa
```

---

## 📷 Ejemplo de uso

```
1) Cargar datos
2) Mostrar datos
3) Salir
```

---

## 🚀 Mejoras futuras

* Validación de datos ingresados
* Uso de funciones para modularizar el código
* Interfaz más amigable
* Persistencia de datos (archivos)

---

## 👨‍💻 Autor

Jose Palacios

