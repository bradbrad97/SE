# Actor Description

# 회원

- 회원 가입 후 로그인 하여 의류 사이트를 이용할 수 있다.
- 로그아웃하여 프로그램을 종료할 수 있고 회원탈퇴 할 수 있다.

# 판매자

- 판매하려는 의류를 등록할 수 있다.
- 판매 중인 상품 리스트를 조회 할 수 있다.
- 판매 상품 정보를 수정, 삭제 할 수 있다.
- 판매가 완료된 상품을 조회 할 수 있다.
- 판매 통계 정보를 확인 할 수 있다.

# 구매자

- 구매하려는 의류상품 리스트를 조회할 수 있다.
- 구매를 원하는 상품의 상세정보를 조회하고 구매할 수 있다.’
- 구매시에 포인트가 3000점 이상일 경우 포인트 사용을 선택할 수 있다.
- 구매시 추가상품으로 등록한 물품도 같이 구매할 수 있다.
- 구매 후 환불을 신청할 수 있다.
- 구매내역을 조회, 삭제 할 수 있다.
- 구매 통계 정보를 확인 할 수 있다.

# 결제 event

결제 시 포인트 적립을 처리하는 event이다.

# 환불 event

구매자가 구매한 상품을 환불 시 포인트 반환을 처리하는 event이다.

# 택배사 system

구매자가 환불을 신청할 경우 물품 수거를 처리한다.

# 매월말일 event

 매월 말일이 됐을 경우에 일어나는 event이다.

# 이메일 system

매월 말일에 모든 구매자 및 판매자들에게 그달의 구매 및 판매 통계 정보를 공지하는 system이다. 

# 6개월후 자동삭제 event

6개월이 지났을 경우 상품 구매 내역을 자동으로 삭제처리하는 event이다.