n = int(input())
ints = sorted(map(int, input().split()))
cnt = 1
for i in range(n-1):
  if ints[i]!=ints[i+1]:
    cnt +=1
print(cnt)
