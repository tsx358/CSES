n = int(input())
ans=1
for i in range(n):
  ans*=2
  ans%=10**9 +7
print(ans)
      