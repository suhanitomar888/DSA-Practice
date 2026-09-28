select query_name,
ROUND(SUM(rating / position) / COUNT(*),2) as quality,
ROUND((COUNT(CASE WHEN rating < 3 THEN 1 END) / COUNT(*)) * 100,2) as poor_query_percentage
from queries 
group by query_name;