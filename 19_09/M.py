n = int(input())
x = set(int(x) for x in input().split())
ans = 0
mm = max(x)
for i in x:
    f = i * 2 + 1
    step = f + 2
    while f <= mm:
        if f in x:
            ans += 1
        f += step
        step += 2
print(ans)
            
