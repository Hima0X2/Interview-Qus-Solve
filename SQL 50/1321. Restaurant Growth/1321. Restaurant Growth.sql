SELECT visited_on, amount, round(amount/7, 2) average_amount
FROM
(
    SELECT DISTINCT visited_on,
    sum(amount) OVER (ORDER BY visited_on range BETWEEN interval 6 day preceding AND current row) amount,
    MIN(visited_on) OVER() 1ST_date
    FROM customer
) t
WHERE visited_on >= 1st_date + 6
