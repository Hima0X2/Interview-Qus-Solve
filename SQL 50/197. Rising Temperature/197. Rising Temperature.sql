select w1.id as id from Weather w1,Weather w2 where DATEDIFF(w1.recordDate,w2.recordDate)=1 and w1.temperature>w2.temperature;
