/* Debug this query to get the correct output */

select DISTINCT passenger_name
from flights
where gender = 'Male'
and origin = 'Mumbai';