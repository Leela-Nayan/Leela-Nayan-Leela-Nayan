def find_farthest(trees):
    n = len(trees)
    
    if n == 1 and trees[0] == 0:
        return 1
    
    if 1 not in trees:
        return n - 1
    
    max_dist = 0
    last_one = -1
    
    for i in range(n):
        if trees[i] == 1:
            if last_one == -1:
                max_dist = max(max_dist, i)
            else:
                max_dist = max(max_dist, i - last_one - 1)
            last_one = i

    if last_one != -1:
        max_dist = max(max_dist, n - last_one - 1)
    
    return max_dist

t = int(input())

for _ in range(t):
    n = int(input())
    trees = list(map(int, input().split()))
    
    result = find_farthest(trees)
    print(result)
