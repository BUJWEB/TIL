<h1>html 기본 문법 설명</h1>



<!--제목 #의 개수에 따라 폰트 사이즈 변경 <h1>~<h6>로도 사용가능-->
# h1, #1개 글씨 크기 
## h2, #2개 글씨 크기 
### h3, #3개 글씨 크기 
#### h4, #4개 글씨 크기 
##### h5, #5개 글씨 크기 
###### h6, #6개 글씨 크기 



**<h2>강조**<br>
<h4>

   
*이텔릭체는 별표와*<br>
_언더바로 사용 가능_<br>
**두껍게는 별표 2개와**<br>
__언더바 두개__<br>
~~취소선은 물결 두개~~<br>
<u>밑줄은 'u, /u' 사용</u><br>

**<h2>리스트 작성**<br>
   <h4>
1. 순서 있는 리스트
    * 순서 없는 리스트
    + '*, +, -'를 이용해 순서 없는 리스트 제작 가능



**<h2>링크 제목 작성**<br>
<h4>
링크 넣는 법<br> 
[링크 제목](링크 "링크 설명")n <><br>
이용해 링크가 보이게 달 수 있음 [참조 링크]를 이용해 후반에 달 수 있음

* [NAVER](https://naver.com "링크 설명(title)을 작성하세요.")
* 구글 홈페이지: <https://google.com> <br>
* href : 연결할 주소를 지정 한다.<br>
    * <a href="https://naver.com"> 네이버</a> <br>
* target : 링크를 클릭 할 때 창을 어떻게 열지 설정 한다.<br>
* title : 해당 링크에 마우스 커서를 올릴때 도움말 설명을 설정 한다.


**<h2>이미지 첨부**<br>
<h4>

* < img >로 변환<br>
    * ![이미지 이름](이미지 URL)<br>
<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQW0Z94iqO01RBz7uaesVFC5hG-J4y-ldNCHg&usqp=CAU"><br> 

* 사이즈 변경은 html의 img 태그<br>
    * < img src="이미지 URL" width="가로 사이즈" height="세로 사이즈" > <br>
<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQW0Z94iqO01RBz7uaesVFC5hG-J4y-ldNCHg&usqp=CAU" width="100"><br>

* background, background-image 앞 뒤에 '를 붙여서 속성으로 사용시 배경 이미지 삽입 가능<br>


**<h2>블록 코드 강조**<br>
<h4>
`를 3번 이상 입력 후 코드 종류 작성


```html
<a href="https://www.google.co.kr/" target="_blank">GOOGLE</a> 
```


**<h2>표**<br>
<h4>

* |내용|:내용:|내용:| 형태
* | 기호로 칸을 나눔 가장 좌측과 우측은 생략 <br>
* : 안에 내용 정리 <br>
* 헤더 셀을 구분할 때 3개 이상의 - 필요
Ex. |---|:---:|---:|


**<h2>인용문**<br>
<h4>

'>'기호 이용 <br>
갯수가 늘어날수록 뒤에 달립니다
> '>' 1개
>> '>' 2개
>>> '>' 3개

**<h2>수평선**<br>
<h4>
   
---
(- 3개)

***
(* 3개)

___
(_ 3개)


**<h2>줄바꿈**<br>
<h4>
< br >을 줄바꿈 하고 싶은 부분에 삽입
