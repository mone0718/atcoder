#A~Bの間に100の約数あるか

a,b = map(int,input().split())
divisor = [1,2,4,5,10,20,25,50,100]
ans = False
  
for i in range(a, b+1):
  if i in divisor:
    ans = "Yes"
    break
  else:
    ans = "No"

print(ans)

