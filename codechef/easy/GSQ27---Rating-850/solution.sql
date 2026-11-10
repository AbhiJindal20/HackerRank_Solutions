/* write a query with the following conditions
- Destination city end in 'o' AND
- Origin city starts with 'M' 
*/


SELECT * FROM Flights
WHERE Destination LIKE '%o' AND Origin LIKE 'M%';