
n = int(input())
value=0
fruits=0
for i in range(n):
    v = float(input())
    f = input()
    value = value + v
    fruits = fruits + len(f.split())
    print("day",i+1,end="")
    print(":",len(f.split()),"kg")
print("%.2f"%(fruits/n),"kg by day")
print("R$ %.2f"%(value/n),"by day")
