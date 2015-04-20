

select c.cid,p.c_name 
from 
customer c
left outer join 
order o
ON c.cid = o.cid
AND o.cid is NULL;

