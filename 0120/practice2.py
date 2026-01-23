# 좋아하는 피자를 세가지 생각하고 피자이름을 리스트에 저장하고 for 루프를 써서 피자의 이름을 출력하기 
# - 나는 페페로니 피자가 좋습니다. 나오도록하기 

# favorite_pizza = ['포테이토', '페퍼로니', '고르곤졸라', '불고기']
# for pizza in favorite_pizza:
#     print(f"{pizza} 피자")

# print(f"나는 {favorite_pizza[1]} 피자가 좋습니다")

####################

# for 루프를 사용해서 1에서 20까지의 숫자를 출력하세요.

# for value in range(1, 21):
#     print(value, end=' ')

# print('\n')
# # range()함수의 세 번째 인수를 써서 1에서 20까지의 홀수를 리스트로 만드세요. for 루프를 써서 각 숫자를 출력 하세요 
# odd_numbers = range(1, 21, 2)

# for odd in odd_numbers:
#     print(odd, end=' ')

####################

# 이 리스트에서 admin일 경우 다르게 출력하도록하기


# usernames = ['eric', 'willie', 'admin', 'erin', 'ever']

# for username in usernames:
#     if username == 'admin':
#         print(f"{username}이 어떻게 사람 이름")
    
#     else:
#         print(f"이름: {username}")

####################

# new_users리스트를 순회하면서 각 사용자 이름이 이미 사용되고 있는지 확인하세요. 중복이라면 새 사용자 이름을 입력하라는 메시지를 출력하세요
# current_users = ['eric', 'willie', 'admin', 'erin', 'Ever']
# new_users = ['sarah', 'Willie', 'PHIL', 'ever', 'Iona']

# current_user_title = [current_user.title() for current_user in current_users]

# print(current_user_title)

# for new_user in new_users:
#     if new_user.title() in current_user_title:
#         print(f"{new_user.title()}은 중복된 이름입니다. 새 사용자 이름을 입력하세요.")
#     else:
#         print(f"{new_user.title()}은 사용 가능한 이름입니다.")

    
####################


# 이름, 성, 나이, 거주지를 딕셔너리로 저장하기
# first_name , last_name, age, city 
# person = { 
#     'first_name': 'Eric', 
#     'last_name': 'matthes', 
#     'age': 42, 
#     'city': 'seoul', 
#           }

# # print(person['first_name'])
# # print(person['last_name'])
# # print(person['age'])
# # print(person['city'])

# for key, value in person.items():
#     print(f"Key: {key}")
#     print(f"Value: {value}")

    
####################

# 영화 티켓 
# 손님의 나이에 따라 입장료를 다르게 받는 극장이 있습니다. 
# 3세 미만은 무료, 3세 이상 12세 미만은 10달러, 12세 이상은 15달러. 사용자의 나이를 묻고 입장료를 알려주는 루프를 만드세요 
# quit이라고 입력하면 나가기

# age_prompt = '나이가 어떻게 되시나요?'
# age_prompt += '\nquit을 입력하시면 종료됩니다. \n'

# while True:
#     age_ask = input(age_prompt)
#     if age_ask == 'quit':
#         break

#     try:
#         age = int(age_ask)
#     except ValueError:
#         print("정수를 입력해야 합니다.")
#         continue

#     if age >= 12:
#         print("영화 티켓은 15달러입니다")
#         pass
#     elif age >= 3:
#         print("영화 티켓은 10달러입니다")
#         pass
#     else:
#         print("영화 티켓은 무료입니다")
#         pass

####################

# 샌드위치
# sandwitch_orders 리스트에 여러가지 샌드위치 이름을 저장하세요. 
# 그런 다음 빈 리스트 finished_sandwitches를 만드세요. 
# "주문된 샌드위치를 만들었습니다." 같은 매시지를 출력하세요. 
# 이 샌드위치를 finished _sandwitches 리스트로 이동하세요. 
# 샌드위치를 모두 만들면 이들을 나열하는 메시지를 출력하세요.  

sandwitch_orders = ['참치', '햄', '에그', '민트초코 하와이안']
finished_sandwitches = []
active = True

while True:
    print(sandwitch_orders)
    order = input("\n원하시는 샌드위치를 선택해주세요: ")

    if order in sandwitch_orders:
        finished_sandwitches.append(order)
        print("샌드위치 주문 완료")
    else:
        print("잘못 입력하셨습니다.")
        continue
    
    while active:
        repeat = input("추가로 주문하시겠어요?(Y / N)")
        if repeat.upper() == 'N':
            active = False
            break
        elif repeat.upper() == 'Y':
            break
        else:
            print("잘못 입력하셨습니다.")
    
    if active == False:
        break

for index, finished_sandwitche in enumerate(finished_sandwitches):
    if index != len(finished_sandwitches) - 1:
        print(f"{finished_sandwitche} 샌드위치", end = ', ')
    else:
        print(f"{finished_sandwitche} 샌드위치가 나왔습니다")
