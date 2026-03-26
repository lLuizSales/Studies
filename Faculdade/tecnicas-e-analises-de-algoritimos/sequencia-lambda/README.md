# 🔢 D. Fibonacci?

## 📖 Descrição

Todo mundo conhece a sequência de Fibonacci, mas poucos conhecem sua “amiga”, a **sequência de lambda**.

Essa sequência representa os **denominadores das aproximações racionais mais próximas de √2**.

Ela é definida por uma função semelhante à de Fibonacci:

\[
P(n) =
\begin{cases}
0, & \text{se } n = 0 \\
1, & \text{se } n = 1 \\
2P(n-1) + P(n-2), & \text{caso contrário}
\end{cases}
\]

---

## 🎯 Objetivo

Dado um número inteiro \( n \), calcular o valor da função \( P(n) \) da sequência de lambda.

---

## 📥 Entrada

- A primeira linha contém um inteiro \( C \)  
  \( (1 \leq C \leq 10) \) → número de casos de teste

- As próximas \( C \) linhas contêm um inteiro \( N \)  
  \( (0 \leq N \leq 32) \)

---

## 📤 Saída

- Para cada caso de teste, imprimir uma linha contendo o valor de \( P(n) \)

---

## 💡 Exemplo

### Entrada
```

3
0
1
5

```

### Saída
```

0
1
29

```

---

## 🧠 Explicação

A sequência começa assim:

```

P(0) = 0
P(1) = 1
P(2) = 2
P(3) = 5
P(4) = 12
P(5) = 29

```

---

## ⏱️ Restrições

- Tempo por teste: **1 segundo**
- Memória: **256 MB**

---

## 🚀 Dica de implementação

- Use programação dinâmica ou memoização
- Evite recursão pura (pode ser ineficiente)

Exemplo de abordagem iterativa:

```

P[0] = 0
P[1] = 1

para i de 2 até n:
P[i] = 2 * P[i-1] + P[i-2]

```
---