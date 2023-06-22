row = int(input())#d열의 길이 입력받기

af_string = input()#암호화된 문자열

cols = int(len(af_string))/int(row)

print(cols)
print(af_string[0])
for i in range(1,int(row)+1):#열의개수 먼저
    for j in range(0, int(cols)):
        print(af_string[int(cols)+ j*int(cols)])

    
        