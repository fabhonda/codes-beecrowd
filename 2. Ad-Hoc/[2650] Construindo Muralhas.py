titans=[]
tam = []
indices=[]
n,w = input().split(' ')
n,w = int(n),int(w)
for i in range(n):
    tudo = input()
    for j in range(len(tudo)):
        if(tudo[j].isalpha()==False and tudo[j]!=" "):
            titans.append(tudo[0:j-1])
            tam.append(tudo[j:len(tudo)])
            break
    if(int(tam[i])>w):
        indices.append(i)
for i in range(len(indices)):
    print(titans[indices[i]])
