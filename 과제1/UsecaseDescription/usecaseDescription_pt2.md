# Use Case Description pt2

- 상품 정보 조회

| Actor action | System response |
| --- | --- |
| 1. 검색 조건(상품명, 평균 구매만족도 중 하나) 입력 | 2. 해당하는 상품 리스트(상품명 및 평균 구매만족도 포함) 상품명 오름차순으로 출력.  |

extension: step1 이후에 상품 리스트 정렬 기준을 평균 구매 만족도로 변경할 수 있다.

- 상품 상세 정보 출력

| Actor action | System response |
| --- | --- |
| 1. 구매를 원하는 상품 선택 | 2. 해당 상품의 상세 정보 출력 |

- 구매

| Actor action | System response |
| --- | --- |
| 1. 상품 구매 클릭 | 2. 총 구매 금액 출력 |
| 3. 금액 확인 후 구매 결정 | 4. 상품 구매 처리  |

extensions

1. step 1 이후에 추가 상품을 선택하여 구매할 수 있다.
2. step 1 이후에 포인트 사용후 결제할 수 있다.

- 포인트 사용

| Actor action | System response |
| --- | --- |
| 1. 포인트 사용 선택  | 2. 포인트가 3000원 이상인지 확인 |
| 3. none | 4. 포인트 차감 및 포인트만큼 금액 할인 |

- 추가 상품 구매

| Actor action | System response |
| --- | --- |
| 1. 추가 상품 선택 | 2. 추가 상품 금액 합산 |
| 3. 구매 선택 | 4. 추가 상품 구매 처리  |

- 포인트 적립

| Actor action | System response |
| --- | --- |
| 1. 결제 발생한 것 확인 | 2. 결제 금액의 1%를 적립한다.  |

- 포인트 반환
| Actor action | System response |
| --- | --- |
| 1. 환불 발생한 것 확인 | 2. 구매 시 사용된 포인트를 반환한다. |