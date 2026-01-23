# 아래와 같이 학생 점수 리스트를 입력 받아서 만드세요
# scores = [72, 85, 90, 58, 77, 92, 64]
# 전체학생 평균 구하기
# 80점 이상 학생수
# 각 학생의 등급 출력
# 90 a 80 b 70 c ...

####################

# 함수

# def Input_StudentNum():                 # 학생 수 입력 받기
#     studentNum = 0
#     while True:                                         # 예외 처리를 대비한 반복문
#         studentStr = input("학생 수를 입력하세요: ")       # 학생 수 입력

#         try:
#             studentNum = int(studentStr)                # int형 변환 시도
#         except ValueError:                              # 숫자가 아닌 값이 들어왔을 때 예외 처리
#             print("정수를 입력해야 합니다.")
#             continue                                    # 시작 부분으로 다시 반복

#         break                                           # 정상적으로 작동했으니 반복하지 않기 위해 break
#     return studentNum


# def ScoreList(scores: list, studentNum):    # 점수 리스트
#     iNum = 0
#     while iNum < studentNum:            # 입력받은 학생 수만큼 반복
#         score = 0
#         scoreStr = input("점수를 입력하세요: ")              # 점수 입력
#         try:
#             scoreNum = int(scoreStr)    # int형 변환 시도
#         except ValueError:              # 숫자가 아닌 값이 들어왔을 때 예외 처리
#             print("정수를 입력해야 합니다.")
#             continue                    # 점수 입력 부분 다시 반복

#         scores.append(scoreNum)         # 정상적으로 넘어왔을 경우 리스트에 삽입
#         iNum += 1                       # 반복 횟수 +

#     return scores

def MakeScoreList(scores: list):        # 점수 리스트 만들기
    while True:
        score_input = input(f"{len(scores) + 1}번째 학생의 점수: ")
        if score_input == "":
            break

        try:
            scoreNum = int(score_input)    # int형 변환 시도
        except ValueError:              # 숫자가 아닌 값이 들어왔을 때 예외 처리
            print("정수를 입력해야 합니다.")
            continue                    # 점수 입력 부분 다시 반복

        scores.append(scoreNum)         # int형이 들어왔을 경우 리스트에 넣기


def Total(scores: list):                # 점수 리스트의 총합 구하기
    total = 0
    for score in scores:
        total += score
    return total

def Average(total, num):                # 평균 구하기
    if num == 0:
        print("입력한 점수가 없습니다.")
        return 0
    return total / num

def Rating(scores: list):               # 등급 평가
    overscore = 0
    for i, score in enumerate(scores):
        if score >= 90:
            print(f"{i + 1}번째 학생은 A등급 입니다. {score}점입니다.")
            overscore += 1

        elif score >= 80:
            print(f"{i + 1}번째 학생은 B등급 입니다. {score}점입니다.")
            overscore += 1
            
        elif score >= 70:
            print(f"{i + 1}번째 학생은 C등급 입니다. {score}점입니다.")

        else:
            print(f"{i + 1}번째 학생은 D등급 입니다. {score}점입니다.")
            
    return overscore




####################

# 메인

scores = []    
MakeScoreList(scores)                      # 매개변수로 리스트 넣었더니 적용이 된다? 리스트는 참조가 되나?
overscore = Rating(scores)
total = Total(scores)
studentNum = len(scores)
aver = Average(total, studentNum)

print(f"평균: {aver}점입니다")               # 소수점 안자름
print(f"평균: {round(aver, 2)}점입니다")     # 소수점 2번째 반올림

print(f"80점 이상 학생수는 {overscore}명입니다")





####################


# 찾아보니 mutable(변경 가능한) 객체 타입이 있고 immutable(변경 불가능한) 타입이 있다

# mutable 타입 (변경 가능)
# 이 타입들은 함수 안에서 직접 수정하면 원본도 바뀜
# list → [1, 2, 3]
# dict → {"a": 1, "b": 2}
# set → {1, 2, 3}
# bytearray → bytearray(b"abc")
# 사용자 정의 클래스 객체 (대부분 기본적으로 mutable)

# 주의점: 함수 내부에서 수정했는데, 함수 밖에서도 값이 바뀌어 버려서 버그가 생길 수 있음
# 원본을 바꿔야 하는 경우: 그대로 사용
# 원본을 보호해야 하는 경우: copy()나 deepcopy()로 복사본을 만들어 사용



####################



# Immutable 타입 (변경 불가능)
# 이 타입들은 값 자체를 바꿀 수 없고, 새로운 객체가 만들어짐
# int → 10
# float → 3.14
# complex → 1+2j
# str → "hello"
# tuple → (1, 2, 3)
# frozenset → frozenset({1, 2, 3})
# bytes → b"abc"

# 값 자체를 바꿀 수 없음

# 주의점: 함수 안에서 값을 변경하려면 새로운 객체를 반환해야 함
# 원본을 수정하는 게 아니라, 새로운 값을 만들어서 리턴하는 패턴을 자주 사용
# → 함수 안에서 연산을 하면 새로운 객체가 만들어지고, 원본은 그대로 유지