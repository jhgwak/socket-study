# MFC 프로그래밍 실습 
window 환경에서 PC 에서 소켓을 사용하여 채팅 프로그램 기능 구현 
1. sequence number ,ACKnumber 구현
2. 16Byte 크기로 Segmentation 구현 
3. 전송률 성능 측정 (시간측정)
4. multiThread 를 사용하여 실시간 양방햐 통신 구성

환경 : visualstudio 2015 MFC 

source code 

구조체를 사용하여 헤더에 주소 ACK Sequencenumber Checksum 구현

<img width="371" alt="image" src="https://user-images.githubusercontent.com/88297412/181043595-bf9c9d3a-1b65-4596-bd2e-0cadb28941ca.png">

Checksum ,전송률측정함수 구현

<img width="376" alt="image" src="https://user-images.githubusercontent.com/88297412/181043676-607b825c-d5d3-4be3-acae-544d0e889529.png">

TX 함수 

<img width="438" alt="image" src="https://user-images.githubusercontent.com/88297412/181044005-9cce54bd-cd5e-4b0b-8e4a-c15a0ce4fd77.png">

RX 함수

<img width="344" alt="image" src="https://user-images.githubusercontent.com/88297412/181044289-d7987db7-6a68-4720-94e3-bc3fbdff8fd1.png">

<img width="436" alt="image" src="https://user-images.githubusercontent.com/88297412/181044318-75c15e15-be1b-43c7-b7f5-995cd4debd0a.png">

Timer 구현

<img width="418" alt="image" src="https://user-images.githubusercontent.com/88297412/181044451-c7360685-4f79-4d3e-a6f6-28992c46b6df.png">
<img width="419" alt="image" src="https://user-images.githubusercontent.com/88297412/181044467-723b49c2-c3d8-4102-86aa-a1169abd498d.png">
<img width="410" alt="image" src="https://user-images.githubusercontent.com/88297412/181044490-6df16a00-4896-4f40-8d3d-26f061060c5f.png">

결과 

checksum error 감지 알림 

<img width="503" alt="image" src="https://user-images.githubusercontent.com/88297412/181044543-b2ed3f6d-4c03-49f1-a130-8c26c2ab646d.png">
<img width="365" alt="image" src="https://user-images.githubusercontent.com/88297412/181044644-1591ffab-7a6b-4500-8848-c30e65d1f82f.png">

sequence number , ACK , timer 까지 구현 완료

<img width="478" alt="image" src="https://user-images.githubusercontent.com/88297412/181044681-d9cddaed-ada2-40e5-b586-3f8f34d8882e.png">

