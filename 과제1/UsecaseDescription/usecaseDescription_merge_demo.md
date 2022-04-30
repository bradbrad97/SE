# Use Case Description

# Use Case Description pt1

## Step-by-step breakdown

- 회원가입

[제목 없음](https://www.notion.so/6d0600ed8c9d48c5bf9520ba2ccb4fc2)

- 로그인

[제목 없음](https://www.notion.so/0cb9428c083f420c9429b944d47c558d)

- 로그아웃

[제목 없음](https://www.notion.so/b920749be1cb4c8589097d666d6ac56a)

- 회원탈퇴

[제목 없음](https://www.notion.so/6d02ef7e3ea74e6ca3ebc7389fc5929b)

- 판매 의류 등록

[제목 없음](https://www.notion.so/094ae6fd2e17479d94182bd45c404903)

- 상품 리스트 조회

[제목 없음](https://www.notion.so/0f466a38a6b04b078a5e54f04b6499f2)

- 판매 의류 수정

[제목 없음](https://www.notion.so/f3485287887f4458973410fd707eaf03)

- 판매 의류 삭제

[제목 없음](https://www.notion.so/9d887d7d26104d0687d746b72c48b9bf)

- 판매 완료 내역 조회

[제목 없음](https://www.notion.so/8a97490a0aab49209c328007a223a63f)

## Use Case Description pt2

- 상품 정보 조회

| Actor action | System response |
| --- | --- |
| 1. 검색 조건(상품명, 평균 구매만족도 중 하나) 입력한다. | 2. 해당하는 상품 리스트(상품명 및 평균 구매만족도 포함) 상품명 오름차순으로 출력한다.  |

extension: step1 이후에 상품 리스트 정렬 기준을 평균 구매 만족도로 변경할 수 있다.

- 상품 상세 정보 출력

| Actor action | System response |
| --- | --- |
| 1. 구매를 원하는 상품 선택한다. | 2. 해당 상품의 상세 정보를 출력한다. |

- 구매

| Actor action | System response |
| --- | --- |
| 1. 상품 구매 요청을 한다. | 2. 총 구매 금액을 출력한다. |
| 3. 금액 확인 후 구매 요청을 한다. | 4. 상품 구매 처리 후 구매 완료 메세지를 출력한다. |

extensions

1. step 1 이후에 추가 상품을 선택하여 구매할 수 있다.
2. step 1 이후에 포인트 사용후 결제할 수 있다.

- 포인트 사용

| Actor action | System response |
| --- | --- |
| 1. 포인트 사용을 요청한다. | 2. 포인트가 3000원 이상인지 확인한다. |
| 3. none | 4. 포인트 차감 및 포인트만큼 금액 할인한다. |

- 추가 상품 구매

| Actor action | System response |
| --- | --- |
| 1. 추가 상품을 선택한다. | 2. 추가 상품 금액을 합산한다. |
| 3. 구매를 요청한다. | 4. 추가 상품을 구매 처리하고 구매 완료 메세지를 출력한다. |

- 포인트 적립

| Actor action | System response |
| --- | --- |
| 1. 결제가 발생한 것을 확인한다. | 2. 결제 금액의 1%를 적립한다.  |

- 포인트 반환

| Actor action | System response |
| --- | --- |
| 1. 환불이 발생한 것을 확인한다. | 2. 구매 시 사용된 포인트를 반환한다. |

# UsecaseDescription_pt3

## 구매내역 조회

[제목 없음](https://www.notion.so/1d70c1b48a8540858dac58aabd792775)

extension: step2 이후에 구매 내역 중 하나의 상품을 선택하여 구매 만족도를 평가할 수 있다. 

- 구매 만족도 평가

| Actor action | System response |
| --- | --- |
| 1. 구매 만족도를 평가한다. | 2. 상품에 구매 만족도를 반영한다. |

- 환불

| Actor action | System response |
| --- | --- |
| 1. 구입 후 4주가 지난 상품 중환불할 상품을 선택한다. | 2. 환불 처리한다.  |
| 3. none | 4. 택배사에 물품 수거를 신청한다.  |

## 구매내역 삭제

[제목 없음](https://www.notion.so/e7815c5388214a6f90718aae3bbe402a)

## 구매내역 자동 삭제

[제목 없음](https://www.notion.so/2f2b6b896a6443578c8f897273d26880)

## 상품 판매/구매 통계

[제목 없음](https://www.notion.so/e4d9ce7147f948e4a3d20eb90aad7104)

//이대로 하는게 좋을지 구매내역 삭제/ 자동삭제 바꾼 것 처럼 나누는게 좋을지 말씀해주세요!