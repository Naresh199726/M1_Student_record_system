
|TEST ID	|TEST CASE OBJECTIVE	     |INPUT DATA	       |EXPECTED OUTPUT	   |ACTUAL OUTPUT	   |STATUS| 
 -------- | -------------------------|----------------|-------------------|-----------------|------|
|TC_01	  | for entering name	       |enter name: abc    |	nani              nani               |  PASS
|TC_02	  |for entering name	       |enter name: abc    |	nani                  _               		| FAIL
|TC_03	  |for entering rollnumber     | rollnumber:9    |   9                | 9             | pass
|TC_04	  |for entering rollnumber    |rollnumber: 9          9               |	_             |	FAIL
|TC_05	  |for entering Phone num       |enter phone num: 1234 |	1234	        | 1234	         |PASS
|TC_06	  |for entering phone num	     |enter phone num: 1234 |	1234          |	_             |	FAIL
|TC_07	  |for listing record        |nani 9 1234      |	nani 9 1234    |	nani 9 1234	     |PASS
|TC_08	  |for listing record        |nani 9 1234  |	nani 9 1234	| nani 1234 9     |	Fail
|TC_09	  |for listing record	       |nani 9 1234	| nani 9 1234 |	9 nani 1234 |	FAIL
|TC_10	  |for deleting record	     |9	| 9	| 2 |	FAIL
|TC_11	  |for deleting record	     |9 | 9	| 9	| PASS
