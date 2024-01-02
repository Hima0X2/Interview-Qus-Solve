select 
case 
when id % 2 = 1 and id=(select max(id) from Seat) then id
when id % 2 = 1 then id+1
else id-1
end
as id,student from Seat order by id;
