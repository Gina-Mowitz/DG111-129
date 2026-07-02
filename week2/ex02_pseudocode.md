1.) BEGIN [ตรวจสอบเกรด]
INPUT score
IF score >= 80 THEN
"A"
ELSE

IF score >= 70  THEN
"B"
ELSE

IF score >= 60  THEN
"C"
ELSE

IF score >= 50  THEN
"D"
ELSE "F"

END IF
OUTPUT  แสดงเกรด 



2.) BEGIN [ หาค่าสูงสุดจาก 2 ตัวเลข ]

INPUT รับ a และ b

IF a > b? THEN "แสดง a"

ELSE "แสดง b"



3.) BEGIN [ นับจาก 1 ถึง N ]

INPUT รับ N

 ให้ i = 1

WHILE  i <= N? DO 

PRINT " i "

i = i + 1

END WHILE
