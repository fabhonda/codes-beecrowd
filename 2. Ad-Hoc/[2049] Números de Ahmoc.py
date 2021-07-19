count = 1
signature = input()
while signature != "0":
    if count!=1:
        print()
    j=0
    contem=0
    painel = input()
    for i in range(len(painel)):
        if painel[i]==signature[j]:
            j+=1
        if j==len(signature):
            contem=1
            break
    print("Instancia", count)
    if(contem):
        print("verdadeira")
    else:
        print("falsa")
    count+=1
    signature = input()
