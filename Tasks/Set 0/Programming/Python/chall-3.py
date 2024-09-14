x = 5
y = 1

for i in range(x):
    print(" " * (x - i - 1), end="")
    print("*" * y)
    y += 2