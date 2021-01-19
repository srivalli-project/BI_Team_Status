if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores
    query_name = raw_input()
    students = student_marks.keys()
    for key in student_marks.keys():
        if key == query_name:
            marklist = student_marks[key]
            total = sum(marklist)
            avg = total/3
    print("{0:.2f}".format(avg))