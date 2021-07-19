SELECT customers.name, rentals.rentals_date
FROM customers JOIN rentals
ON customers.id = rentals.id_customers
WHERE extract(month from rentals.rentals_date)=9