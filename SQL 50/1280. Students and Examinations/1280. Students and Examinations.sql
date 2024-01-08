SELECT
    s.student_id,
    s.student_name,
    sub.subject_name,
    (SELECT COUNT(*) FROM Examinations e WHERE e.student_id = s.student_id AND e.subject_name = sub.subject_name) AS attended_exams
FROM
    Students s,
    Subjects sub
ORDER BY
    s.student_id, sub.subject_name;
