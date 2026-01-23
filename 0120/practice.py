# 연습문제

# 저녁식사를 초대하고 싶은 사람이 셋 이상 포함된 리스트를 만드세요
# 그리고 리스트를 사용해서 각 사람을 저녁식사에 초대하는 메세지를 출력하세요

# 손님 리스트 변경
# 손님 중 한명이 저녁식사를 참여할 수 없다고 했습니다. 다른 사람에게 초대장을 보내 초대해야합니다. 
# 1. 참여하지 못하는 손님의 이름을 출력하세요
# 2. 리스트를 수정해서 참가하지 못한 손님 이름을 새로 초대하는 손님 이름으로 바꾸세요
# 3. 리스트의 각 손님에 대해 두 번째 초대장을 출력하세요.

dinner_guest = ['가', '나', '다', '라']
name = dinner_guest[0]
print(f"{name}, 저녁 식사에 초대합니다.")

name = dinner_guest[1]
print(f"{name}, 저녁 식사에 초대합니다.")

name = dinner_guest[2]
print(f"{name}, 저녁 식사에 초대합니다.")

name = dinner_guest[3]
print(f"{name}, 저녁 식사에 초대합니다.")

name = dinner_guest[1]
print(f"{name}, 참여 불가")
dinner_guest[1] = '마'

name = dinner_guest[0]
print(f"{name}, 저녁 식사에 초대합니다.")

name = dinner_guest[1]
print(f"{name}, 저녁 식사에 초대합니다.")

name = dinner_guest[2]
print(f"{name}, 저녁 식사에 초대합니다.")

name = dinner_guest[3]
print(f"{name}, 저녁 식사에 초대합니다.")




