# GSQ25

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** SQL  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-10T20:11:54.928Z  

```sql
/*write a query that returns the rows which meet the following conditions
- Either Origin is Mumbai or the Destination is Mumbai */

SELECT * FROM Flights
WHERE Origin = 'Mumbai' OR Destination = 'Mumbai';
```

---

[View on CodeChef](https://www.codechef.com/problems/GSQ25)