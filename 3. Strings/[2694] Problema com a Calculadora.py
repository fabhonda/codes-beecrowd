n = int(input())
for i in range(n):
    j=0
    k=0
    soma=0
    first=0
    vector=[]
    inteiros=[]
    text = input()
    for i in range(len(text)):
        if(text[i].isalpha() == 0):
            if first==0:
                j=i
                first=1
            elif first==1:
                k=i
        else:
            first=0
            if(k!=0 or j!=0):
                vector.append(text[j:k+1])
                k=0
                j=0
    if(len(vector)<3):
        vector.append(text[j:k+1])
    for i in range(len(vector)):
        inteiros.append(int(vector[i]))
        soma+=inteiros[i]
    print(soma)
    
