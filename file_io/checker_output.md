[compare] Command to run:
`./1-create_file_0 no_read_perm
:u no_permissions -c 'timeout 30 bash -c '"'"'./1-create_file_0 no_read_perm'"'"''`

	[compare] Return code: 0
	[compare] Student stdout:
	-1
	[compare] Student stdout length: 3
	[compare] Student stderr:
	[compare] Student stderr length: 0

[compare] Command to run:
`cat no_read_perm
su student_jail -c 'timeout 30 bash -c '"'"'cat no_read_perm'"'"''`

	[compare] Return code: 1
	**[compare] Student stdout:
	[compare] Student stdout length: 0**
	[compare] Student stderr:
	cat: no_read_perm: Permission denied
	[compare] Student stderr length: 37

	**[compare] Desired stdout:
		Wait !
		You should not be able to see this !
	[compare] Desired stdout length: 44**
