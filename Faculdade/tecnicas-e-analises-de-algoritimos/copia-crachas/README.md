# 🎫 B. Eca

## 📖 Descrição

O IDP realiza diversos eventos externos todo semestre e espera a participação de muitas pessoas. Porém, algo inesperado aconteceu: alguns alunos começaram a comparecer aos eventos apenas pelos lanches 🍔.

Com o aumento da demanda, percebeu-se que havia **mais participantes do que vagas disponíveis**.

Após investigação, descobriu-se que alguns alunos estavam **clonando crachás** de acesso para entrar no evento.

Os crachás legítimos são numerados sequencialmente de **1 até N**.

Após o evento, todos os crachás foram recolhidos, e sua tarefa é identificar **quantos crachás foram clonados**.

> *História fictícia*

---

## 🎯 Objetivo

Dado o número de crachás legítimos e os crachás recolhidos, determinar **quantos crachás foram duplicados (clonados)**.

---

## 📥 Entrada

A entrada contém **vários casos de teste**.

Cada caso possui:

- Dois inteiros \( N \) e \( P \)  
  \( (1 \leq N \leq 1000,\ 1 \leq P \leq 2000) \)

  Onde:
  - \( N \) = número de crachás legítimos
  - \( P \) = número de participantes (crachás recolhidos)

- Uma linha com \( P \) inteiros \( C_i \)  
  \( (1 \leq C_i \leq N) \), representando os crachás recolhidos

⚠️ A entrada termina quando:
```

N = -1 e P = -1

```

---

## 📤 Saída

Para cada caso de teste, imprimir:

- Um único inteiro → quantidade de **crachás clonados**

---

## 💡 Exemplo

### Entrada
```

3 4
1 2 3 2
4 6
1 2 3 4 2 3
-1 -1

```

### Saída
```

1
2

```

---

## 🧠 Explicação do exemplo

- No primeiro caso: o crachá **2** aparece duas vezes → 1 clone  
- No segundo caso: os crachás **2 e 3** aparecem repetidos → 2 clones  

---

## ⏱️ Restrições

- Tempo por teste: **1 segundo**
- Memória: **256 MB**

---

## 🚀 Dica de implementação

- Use um vetor ou mapa para contar a frequência de cada crachá
- Para cada número que aparecer mais de uma vez, conte como clone

Exemplo de lógica:
```

se frequência > 1 → é clonagem

```

---