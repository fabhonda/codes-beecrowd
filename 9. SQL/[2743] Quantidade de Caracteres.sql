SELECT people.name, length(people.name) "length"
FROM people
ORDER BY "length" desc