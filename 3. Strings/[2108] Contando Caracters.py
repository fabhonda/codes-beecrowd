texto=input()
maior = 0
while(texto!='0'):
    tam = len(texto.split(" "))
    vector = []
    for i in range(tam):
        vector.append(texto.split(" ")[i])

    for i in range(len(vector)):
        if(len(vector[i]) >= maior):
            maior = len(vector[i])
            big = vector[i]
        print(len(vector[i]),end="")
        if (len(vector)-1) != i:
            print("-",end="")
        else:
            print()
    texto=input()
print()
print("The biggest word:",big)
