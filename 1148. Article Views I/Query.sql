# Write your MySQL query statement below

# ALTER TABLE Views CHANGE COLUMN author_id id int;

SELECT DISTINCT author_id as id FROM Views WHERE author_id=viewer_id ORDER BY id;
