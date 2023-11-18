import json

# 파일 경로
file_path = "file_1.meta"

# 파일 열기
with open(file_path, "r") as file:
    # JSON 파일 읽기
    meta_data = json.load(file)

# 결과 출력
print(meta_data)