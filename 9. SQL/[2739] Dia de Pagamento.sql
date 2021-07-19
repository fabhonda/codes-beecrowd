SELECT loan.name, cast(extract(day from loan.payday) as int) "day"
FROM loan