select distinct a.num as ConsecutiveNums from Logs a,Logs b,Logs c where a.id+1=b.id and a.id+2=c.id and a.num=b.num and b.num=c.num;
