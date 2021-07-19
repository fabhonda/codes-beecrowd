SELECT people.name, TRUNC((10*people.salary)/100,2) "tax"
FROM people
WHERE people.salary>3000