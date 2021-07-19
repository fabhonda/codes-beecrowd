SELECT candidate.name, trunc(((score.math*2)+(score.specific*3)+(score.project_plan*5))/10,2) "avg"
FROM candidate JOIN score
ON candidate.id = score.candidate_id
ORDER BY "avg"desc