select e.person_name from (select person_name,turn,weight,sum(weight) over (order by turn ) as Total_weight from Queue) e where e.Total_weight<=1000 order by e.turn desc limit 1
