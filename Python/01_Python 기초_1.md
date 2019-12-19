

# Python 프로그래밍

## 저장, 반복, 분기

- 크리스마스 트리를 만든다

1. 나무, 전구, 장식을 준비한다

2. 나무가 충분히 예블때까지 장식한다

	- 나무가 예쁜가? - 분기

	- 예쁠때까지 장식을 반복한다 - 반복

	- 나무를 장식한다는 것은 나무 = 나무 + 장식 - 저장

3. 나무가 충분히 예쁘면 그 나무는 크리스마스 트리가 된다

	- 나무가 예쁘면 = 분기(조건)

	- 크리스마스트리 = 나무 - 저장﻿

```python
tree = '나무'
# len(tree) == 2
bulb = '전구'
deco = '장식'

while len(tree) > 20:
    tree = tree + bulb + deco
    # 1st '나무전구장식'
    # 2nd '나무전구장식전구장식'
    
christmas_tree = tree
print(christmas_tree)
```

## **반복문**

- while 문

  = while 조건식:

  ​          내용

- for 문

  = for i in range(범위)

  ​          내용



## **배열과 딕셔너리**

- 배열 : 배열이름 = ['원소1','원소2','원소3'] 의 형태로 초기화 및 정의한다

  = 반환 방식 : 배열이름[index] 로 일반적이다

- 딕셔너리 : 딕셔너리이름 = {'키1':'값1','키2':'값2','키3':'값3'} 

  = 반환 방식 : 딕셔너리이름[키값]으로 일반적이다



## **Random**

- import random 선언 - 모듈 가져오기

- random.choice(배열이름) : 배열 중 하나 랜덤으로 반환

- random.sample(배열이름, 개수) : 배열 중 개수만큼 중복되지 않게 반환

- sorted(배열이름) : 배열을 오름차순으로 정렬하여 반환
- 

## String

- 같은 말 표현 방식 3 가지

```python
han_intro = '저는 ' + 지목된사람 + '입니다.'

eng_intro = ' My name is ' + 지목된영어이름

intro = han_intro + eng_intro


intro2 = '저는 {}입니다. My name is {}'.format(지목된사람, 지목된영어이름)


intro3 = f'저는 {지목된사람}입니다. My name is {지목된영어이름}'
```

## 웹 스크래핑 하기

- 터미널에 pip install requests 입력해서 다운로드, import
- 터미널에 pip install bs4 입력해서 다운로드, import
- 웹페이지에서 가져오고 싶은 부분 오른클릭 -> copy -> copy selector 로 해당위치 복사
- 코드내용 python Repo의 kospi.py, popular.py 참조

## 크롬드라이버 이용 검색

- 터미널에 pip install selenium입력해서 다운로드, import

- selenium 크롬 드라이버 크롬버전에 맞춰서 받아 같은 디렉토리에 넣기

- 코드내용 python Repo의 google.py 참조