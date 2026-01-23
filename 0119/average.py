def Average(total, num):
    aver = total / num
    return aver

def Get_Total(scores):
    total = 0
    for score in scores:
        total += score
    return total

def Rating(scores):
    overscore = 0
    for i, score in enumerate(scores):
        if score >= 90:
            print(f"{i + 1}번째 학생은 A등급 입니다")
            overscore += 1

        elif score >= 80:
            print(f"{i + 1}번째 학생은 B등급 입니다")
            overscore += 1
            
        elif score >= 70:
            print(f"{i + 1}번째 학생은 C등급 입니다")

        else:
            print(f"{i + 1}번째 학생은 D등급 입니다")
            
    return overscore



########################



scores = [72, 85, 90, 58, 77, 92, 64]

overscore = Rating(scores)
total = Get_Total(scores)
aver = Average(total, len(scores))

print(f"평균 점수는 {round(aver, 2)}점 입니다")
print(f"80점 이상 학생수는 {overscore}명 입니다")

f = open("새파일.txt", 'w')
f.close()
