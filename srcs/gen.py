import random

n = 500
disorder = 0.14  # -1 = random, 0 to 1 = target disorder
output_file = "stack.txt"


def compute_disorder(stack):
    mistakes = 0
    total_pairs = 0

    for i in range(len(stack)):
        for j in range(i + 1, len(stack)):
            total_pairs += 1
            if stack[i] > stack[j]:
                mistakes += 1

    return mistakes / total_pairs if total_pairs else 0


def generate_stack(n, disorder):
    if n < 0:
        raise ValueError("n must be non-negative")

    if disorder == -1:
        stack = list(range(n))
        random.shuffle(stack)
        return stack

    if not 0 <= disorder <= 1:
        raise ValueError("Disorder must be -1 or between 0 and 1")

    if n <= 1:
        return list(range(n))

    max_inversions = n * (n - 1) // 2
    target = round(disorder * max_inversions)

    # Construct permutation with exactly target inversions
    available = list(range(n))
    stack = []

    for remaining in range(n, 0, -1):
        inversions = min(target, remaining - 1)

        stack.append(available.pop(inversions))
        target -= inversions

    return stack


def main():
    stack = generate_stack(n, disorder)

    with open(output_file, "w") as file:
        for i, value in enumerate(stack):
            file.write(f"all.stack_a[{i}] = {value};\n")

    print(f"Generated {n} numbers.")
    print(f"Target disorder: {disorder}")
    print(f"Actual disorder: {compute_disorder(stack):.6f}")
    print(f"Saved to: {output_file}")


if __name__ == "__main__":
    main()
