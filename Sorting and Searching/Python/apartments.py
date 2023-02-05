n,m,k =  map(int, input().split())
desired=sorted(list(map(int, input().split())))
size=sorted(list(map(int, input().split())))

i,j,ans = 0,0,0 #applicant and apartment pointer, initialize answer
while i<n and j<m:
  applicant=desired[i]
  apartment=size[j]
  if apartment>applicant+k: #we start from small apartment. that's already too big, so we move on to next applicant.
    i+=1
  elif apartment<applicant-k: #if current apartment too small, we try to find bigger one by moving to next larger apartment
    j+=1
  else: #if apartment suits applicant's desired size by +/- k
    ans+=1
    i+=1
    j+=1
print(ans)
    

      
