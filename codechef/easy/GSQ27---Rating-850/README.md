# GSQ27 - Rating 850

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** SQL  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-10T20:30:46.859Z  

```sql
/* write a query with the following conditions
- Destination city end in 'o' AND
- Origin city starts with 'M' 
*/


SELECT * FROM Flights
WHERE Destination LIKE '%o' AND Origin LIKE 'M%';
```

---

[View on CodeChef](https://www.codechef.com/problems/GSQ27)