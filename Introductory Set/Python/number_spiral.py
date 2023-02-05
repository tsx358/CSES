t=int(input())
for _ in range(t):
    y,x=map(int, input().split())
    ans=0
    #notice if y is even, it's a perfect square. if x is odd, it's perfectsquare.
    if x>y:
        #if x is odd, then x^2 is at x position. to find answer, we go down y-1 steps.
        if x%2==1:
            ans=x**2-(y-1)
        else:
            ans=(x-1)**2+y
    else:
        if y%2==1:
            ans=(y-1)**2+x
        else:
            ans=y**2-(x-1)

    print(ans)
