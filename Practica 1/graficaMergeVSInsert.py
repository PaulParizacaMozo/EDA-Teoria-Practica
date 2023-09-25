import matplotlib.pyplot as plt
import numpy as np

# Genera valores de n
n = np.linspace(1, 100, 100)  # Valores de n desde 1 hasta 100

# Calcula las funciones t(n)
t_n_cuadrado = n**2
t_n_log_n = n * np.log(n)

# Crea la gráfica
plt.figure(figsize=(10, 6))
plt.plot(n, t_n_cuadrado, label='T(n) = O(n^2)', linestyle='-', color='blue')
plt.plot(n, t_n_log_n, label='T(n) = O(n log n)', linestyle='--', color='red')

# Configura la gráfica
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('Gráfica de T(n) = O(n^2) vs. T(n) = O(n log n)')
plt.legend()
plt.grid(True)

# Muestra la gráfica
plt.show()
