
// Iron Man 1 [Action, Adventure]
// Spider Man [Action , Comedy]
// Iron Man 2 [Action, Adventure]

//movies [movieId, title]-> genere [gnereId, name]

//Watcher [,moveID,gnereId]

// create table Watcher moveID int,generID int;

"give me all movies that are either action or comedy"



select title from movies 
where moviID in (
(select movieID from 
 watcher where generID in 
( (select generID from genere 
where name in ('action','comedy') ) ) 
)
 
 
"improvemnt 1"

select p.titele 
from movies p
inner join 
( select t.movieID as movieID  from watcher t //1
inner join
(select generID from genere  //2
where name in ('action','comedy') ) r
on r.generID = t.generID
) q
on p.moveID = q.moveID;


"improvement 2"

select m.title 
from movies m
JOIN watcher w on m.movieId = w.movieId
JOIN genres g on w.genreId = g.genreId
Where
g.name in ('action' , 'comedy');




