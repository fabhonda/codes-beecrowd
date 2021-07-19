def tamanho(frase):
    return len(frase)

n = int(input())
for i in range(n):
    frase = input().split(' ')
    frase.sort(reverse = True, key = tamanho)
    for j in range(len(frase)):
        if j==len(frase)-1:
            print(frase[j])
        else:
            print(frase[j],end=' ')

