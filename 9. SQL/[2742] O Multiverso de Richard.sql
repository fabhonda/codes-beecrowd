SELECT life_registry.name, trunc(life_registry.omega*1.618,3) "Fator N"
FROM dimensions JOIN life_registry
ON dimensions.id = life_registry.dimensions_id
WHERE (dimensions.name = 'C774' or dimensions.name = 'C875') and (life_registry.name LIKE 'Richard%')
ORDER BY "Fator N"