# GSQ10 - Rating 775

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Practice Problem - Alter table

Listen

You are given a table -  **employee**  (mentioned below)

Write a query which does the following

- Add a new column 'Hourly_Pay' to the table employee and set the value as 100 by default.
- Output the entire table
- Original table has the following rows

```
┌─────────────┬────────────────┬────────────┐
│ Employee_id │ Employee_Name  │ Department │
├─────────────┼────────────────┼────────────┤
│ 1           │ Kayla Thompson │ Sales      │
│ 2           │ Ethan Chen     │ Hr         │
│ 3           │ Julia Lee      │ Operations │
│ 4           │ Marcus Garcia  │ Hr         │
└─────────────┴────────────────┴────────────┘

```

## Solution

**Language:** SQL  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T19:54:47.873Z  

```sql
/* Write a query which does the following
- Add a new column 'Hourly_Pay' to the table employee and set the value as 100 by default.
- Output the entire table
*/

ALTER TABLE employee 
ADD COLUMN Hourly_Pay 
INT default 100;

SELECT * FROM employee;
```

---

[View on CodeChef](https://www.codechef.com/problems/GSQ10)