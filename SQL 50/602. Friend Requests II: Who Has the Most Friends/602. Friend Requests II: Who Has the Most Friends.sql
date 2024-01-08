select id,count(frd_id) as num
from(
    select requester_id as id, accepter_id as frd_id from RequestAccepted
    union 
    select accepter_id as id, requester_id as frd_id
    from RequestAccepted
) as friend
group by id
order by num desc limit 1;
