
"""
print("python programing")

import keyword
print(keyword.kwlist)

#출력

print("Hello python programing ... ?")

print(52)

print()



#여러줄 큰따옴표 3개

print("# 하나만 출력합니다.")
print("hello python programing...!")
print()

print("# 여러 개를 출력합니다.")
print(10, 20, 30, 40, 50)
print("안녕하세요", "저의", "이름은", "윤인성입니다!")
print()

print("아무것도 출력하지 않습니다")

#자료

#자료이고 처리
print(type("안녕하세요"))

print(type(273))
#문자열 만들기
#string 이라고 부릅니다
print("# 하나만 출력합니다.")
print("지재영")


print("이름\t나이\t지역")
#문자열 연산자
#"문자열" + "문자열"
print("안녕"+"하세요"*3)
print(3*"안녕하세요")
print("안녕하세요"[0])

#이거 인덱싱이랑 슬라이싱 이라고 함

hello = "안녕하세요"
print(hello[0:2])

print(hello)

print(len("안녕하세요"))
#정수형 실수형

print(273)
print(52.573)

print(type(273))
print(type(52.273))
#숫자연산자


pi = 3.14159265
print(pi)
#변수를 선언하는 방법
pi = pi + 2
print(pi)

#복합 대입 연산자
#사용자 입력 input
sting = input("인사말을 입력하세요>")
print(sting)

string = input("입력 > ")

print("자료:", string)
print("자료형:", type(string))
string_a = input("입력A> ")
int_a = int(string_a)

output_a = int("52")
output_b = float("52.273")

print

a,b = map(int, input().split())
print(a + b)



#숫자와 문자열의 다양한 기능
#format()함수로 숫자를 문자열로 변환하는 ㅁ

string_a = "{}".format(10)

print(string_a)
print(type(string_a))

#format이라는 함수는 {}기호를 format의 괄호 안에 있는 매개변수로 대체하는 것
#upper와 lower() upeer()함수는 문자열의 알파벳을 대문자로
output_a = 52.0
#strip사용하면 문자열 양옆의 공백을 제거한

#문자열 자르기: split()
a = "10 20 30 40 50 60".split(" ")
print(a)
#실행결과로 list 가 나온다

print(True)
x = 10
under_20 = x < 20
print("under_20", under_20)
print("not ")

if True:
    print("True 입니다...!")
    print("정말 True입니다...!")


#입력을 받습니다.
number = input("정수 입력> ")
number = int(number)

if number % 2 == 0:
    print("짝수입니다")
else:
    print("홀수입니다.")
리스트와 반복문

list array =

array = [273, 32, 103, "문자열", True, False]
print(array)
list_a = [273, 32, 103, "문자열", True, False]

print(list_a[0])
#첫째 대괄호 안에 음수를 넣어 뒤에서 부터 요소를 선택할 수 있습니다.
#이중으로 사용 가능

list_a = [273, 32, 103, "문자열", True, False]

#indexerror 예외

"""
"""
#list명.append(요소)리스트 뒤에 요소를 더함
#리스트면.insert(위치, 요소)중간 요소에 요소를 추가함
list_a = [1, 2, 3]

print("#리스트 뒤에 요소 추가하기")

list_a.append(4)
list_a.append(5)
print(list_a)
print()

list_a.insert(0, 10)

print(list_a)

#한번에 여러 요소를 추가하고 싶으면 extend를 사용한다
list_a = [1, 2, 3]
#그냥 아예 초기화 되는듯
print(list_a)

list_b = [4, 5, 6]
print(list_a + list_b)
list_a.extend(list_b)
print(list_a)

#index로 제거하기 del pop
# del 리스트면[인덱스]

list_a = [0, 1, 2, 3, 4, 5]
print("#list의 요소 하나 제거하기")

del list_a[1]
print(list_a)#아예 사라지고 인덱스도 밀리는듯
list_a.pop(1)
print(list_a)
#값으로 제거하기 remove 사용하기
#두번째 방법은 값으로 제거하는 것 말 그대로 '리스트 내부에 있는 2를 제거해 주세요 처름 값을 지정해서 제거하는것
#remove함수를 사용
list_c = [1, 2, 1, 2]
list_c.remove(2)
print(list_c)

list_c.clear()
print(list_c)

#list 내부에 있는지 in / not in 연산자
list_a = [273, 32, 103, 57, 52]
print(273 not in list_a)

#for 반복문
#사람보다 월등히 뛰어나다
#for 반복분: 리스트와 함께 사용하기
#for 반복자 in 반복할 수 있는것
#코드
array = [273, 32, 103, 57, 52]

for element in array:#함수 넣어서 그냥 하는듯
    print(element)

array = [2]

"""
"""
#list가 인덱스를 기반으로 값을 저장하는 것이라면 딕셔너리는 키를 기반으로 값을 저장 하는것 이라고 할 수 있습니다.
dic_a = {
    "name" : "어벤져스 엔드게임",
    "tyoe" : "히어로 무비"
}
print(dic_a["name"])


#list 


dictionary = {

}#dictionary를 선언합니다.
print("요소 추가 이전: " , dictionary)

dictionary["name"] = "새로운 이름"
dictionary["head"] = "새로운 정신"
dictionary["body"] = "새로운 몸"

print("요소 추가 이후: ", dictionary)

del dictionary["body"]

print(dictionary)

"""

print("heello")