import random

random.seed(42)

n = 500
start_idx = 0
start_val = 0
disorder = 0.45

# Séquence de base
seq = list(range(start_val, start_val + n))

# Nombre exact de paires adjacentes désordonnées
target_mistakes = round(disorder * (n - 1))

# Positions de swaps non adjacentes
positions = list(range(0, n - 1, 2))

# Sélectionner exactement le nombre de swaps nécessaire
swap_positions = random.sample(positions, target_mistakes)

# Appliquer les swaps
for i in swap_positions:
    seq[i], seq[i + 1] = seq[i + 1], seq[i]

# Vérifier le disorder avec la même logique que ton C
mistakes = 0
total_pairs = 0

for i in range(1, n):
    if seq[i] < seq[i - 1]:
        mistakes += 1
    total_pairs += 1

real_disorder = mistakes / total_pairs

print(f"Target disorder : {disorder:.6f}")
print(f"Real disorder   : {real_disorder:.6f}")
print(f"Mistakes        : {mistakes}/{total_pairs}")

# Générer le code
lines = []
for i in range(n):
    lines.append(f"\tall.stack_a[{start_idx + i}] = {seq[i]};")

output = "\n".join(lines)
print(output)

# Écrire dans un fichier
with open("stack_a.txt", "w") as f:
    f.write(output + "\n")