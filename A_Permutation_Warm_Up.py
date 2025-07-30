t = int(input())
results = []
for _ in range(t):
    n = int(input())
    distinct_values = (n * n) // 4 + 1
    results.append(distinct_values)

for res in results:
    print(res)
