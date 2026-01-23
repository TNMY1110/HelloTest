# 리스트
# cars = ['bmw', 'audi', 'toyota', 'subaru']
# print(sorted(cars))
# print(cars)

# cars.sort()
# print(cars)

# cars.reverse()
# print(cars)

# print(len(cars))

####################

# magicians = ['alice', 'david', 'carolina']
# for magician in magicians:
#     print(f"{magician}, 대단한 마술사야")

# print(f"이 분들은 전부 대단한 마술사야")

####################

# numbers = list(range(1, 6))
# print(numbers)

# numbers = list(range(1, 10, 3)) # 3번째 인자를 추가하면 건너뜀
# print(numbers)

# squares = []

# for value in range(1, 11):
#     squares.append(value ** 2)

# print(squares)
# print(min(squares))
# print(max(squares))
# print(sum(squares))

####################

# players = ['charles', 'martina', 'michael', 'florence', 'eli']
# players2 = players[:]
# players.append('yi')
# print(players)
# print(players2)

# for player in players[0:3]:
#     print(player)


####################

# dimension = (200, 50)     
# dimension[0] = 250        # 튜플은 변경 불가

####################

# requested_toppings = ['버섯', '감자튀김', '엑스트라 치즈']

# for requested_topping in requested_toppings:
#     if requested_topping == '감자튀김':
#         print(f"지금 {requested_topping}이/가 없습니다.")
        
#     else:
#         print(f"{requested_topping}이/가 추가되었습니다.")

####################

# favorite_languages = {
#     'jen': 'python',
#     'sarah': 'c',
#     'edward': 'rust',
#     'phil': 'python',
# }

# language = favorite_languages.get('sangho', 'no value')
# print(f"{language}")
    
####################

# prompt = "\nTell me something, I will repeat it back to you!"
# prompt += "\nEnter 'quit' to end the program\n"

# while True:
#     message = input(prompt)
#     if message == 'quit':
#         break
#     else:
#         print(message)

####################

response = {}
active = True

while True:
    # 참가자의 이름과 응답을 받기
    name = input("\n당신의 이름은?: ")
    mountain = input("등산하고 싶은 산이 무엇인가요?: ")

    if name == "" or mountain == "":
        print("잘못 입력하셨습니다.")
        continue
    # 응답을 딕셔너리에 저장
    response[name] = mountain

    # 설문에 응할 사람이 더 있는지 확인하기
    while active:
        repeat = input("또 다른 사람의 정보가 필요한가요?(Y / N)")
        if repeat.upper() == 'N':
            active = False
            break
        elif repeat.upper() == 'Y':
            break
        else:
            print("잘못 입력하셨습니다.")
    
    if active == False:
        break

# 설문이 끝나면 결과 출력

for name, mountain in response.items():
    print(f"{name}이/가 등산하고 싶은 산은 {mountain}입니다")