n, x = map(int, input().split())
weight = sorted(map(int, input().split()))
ans=0
light_ptr, heavy_ptr= 0,n-1
while light_ptr<=heavy_ptr:
  if weight[light_ptr]+weight[heavy_ptr]<=x:
    light_ptr+=1
    heavy_ptr-=1
  else:
    heavy_ptr-=1
  ans+=1

print(ans)

      
