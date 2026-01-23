# 삽입 정렬 함수: 작은 구간(run)을 정렬할 때 사용
def insertion_sort(arr, left, right):
    for i in range(left + 1, right + 1):
        key = arr[i]          # 현재 원소 선택
        j = i - 1
        # key보다 큰 원소들을 오른쪽으로 이동
        while j >= left and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key      # 올바른 위치에 key 삽입

# 병합 함수: 두 개의 정렬된 구간(run)을 합칠 때 사용
def merge(arr, l, m, r):
    left = arr[l:m+1]         # 왼쪽 구간
    right = arr[m+1:r+1]      # 오른쪽 구간

    i = j = 0                 # 왼쪽/오른쪽 인덱스
    k = l                     # 원래 배열에 채워 넣을 위치

    # 두 구간을 비교하며 작은 값부터 채워 넣기
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1

    # 왼쪽 구간에 남은 원소 처리
    while i < len(left):
        arr[k] = left[i]
        i += 1
        k += 1

    # 오른쪽 구간에 남은 원소 처리
    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1

# 팀 정렬 함수: 삽입 정렬 + 병합 정렬 결합
def tim_sort(arr):
    n = len(arr)
    RUN = 32  # run의 크기 (작은 구간 길이)

    # Step 1: 작은 구간(run)을 삽입 정렬로 정리
    for i in range(0, n, RUN):
        insertion_sort(arr, i, min((i + RUN - 1), (n - 1)))

    # Step 2: run들을 병합 정렬 방식으로 합치기
    size = RUN
    while size < n:         # 32보다 어레이 크기가 작을 경우
        for left in range(0, n, 2 * size):
            mid = min(n - 1, left + size - 1)
            right = min((left + 2 * size - 1), (n - 1))
            if mid < right:
                merge(arr, left, mid, right)
        size *= 2  # 병합할 구간 크기를 두 배로 확장

# 실행 예시
arr = [5, 2, 9, 1, 3, 7, 6, 8, 4]
print("원본 리스트:", arr)
tim_sort(arr)
print("정렬된 리스트:", arr)
