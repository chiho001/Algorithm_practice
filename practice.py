#LIST
#List Comprehension 사용

list_arr = [i for i in range(10) if i%2 == 0]
print(list_arr)

#sorted 사용
lst = [3,5,6,9,2]
print(sorted(lst))

#sort()함수사용
lst.sort()
print(lst)

#len,sum.max,min 등 활용하기
print(len(lst))
lst[:0] = [1]
print(lst)

#Slicing 활용하기 

#TUPLE
#사용 이유
#1. 초기 상태 표현시 코드 길어지는 거 방지
a,b,c = 1,2,3
print(a,b,c)

#2. Map과 함께 사용하여 입력받기
#a,b, = map(int, input().split(' '))
#print(a,b)
#3. 동시에 변해야하는 객체에 효율적 표현이 가능함
a, b = 3, 7
a, b = b, a
print(a,b)
#Tasdfasdf
#asdfasdf

#Dictionary 자료형
#사용이유
#1. keys나 values를 사용하여 효율적인 사용
#2. 반복문 돌리기
dict_test = {1 : 2, 2 : 3, 'abc' : 7 }
print(dict_test.keys())
print(dict_test.values())
import collections
count = collections.Counter(dict_test)
print(count)

#Set 자료형
#사용이유
#중복 없애줌
st = set ([1,2,3,4,5,4,3,4,3,2,1])
print(st)