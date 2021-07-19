n = int(input())
queue = input().split()
out = int(input())
popthis = input().split()
for i in range(out):
    queue.remove(popthis[i])
for i in range(len(queue)):
    if(i==len(queue)-1):
        print(queue[i])
    else:
        print(queue[i],end=' ')