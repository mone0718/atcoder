#splitしたものをint型で受け取る
n,x = map(int, input().split())
#それをlist型にする
a = list(map(int, input().split()))

if x in a:
  print("Yes")
else:
  print("No")
