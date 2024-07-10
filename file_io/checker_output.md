# task 3-cp.c

[copy_files] Filed copied: textfile_0
`[exec_bash_compare] Command to run:
rm -f test_folder/textfile_0_copy ; cp textfile_0 test_folder/textfile_0 ; chown -R no_permissions:no_permissions test_folder
su student_jail -c 'timeout 30 bash -c '"'"'rm -f test_folder/textfile_0_copy ; cp textfile_0 test_folder/textfile_0 ; chown -R no_permissions:no_permissions test_folder'"'"' `

	[exec_bash_compare] Return code: 1
	**[exec_bash_compare] Student stdout:
	[exec_bash_compare] Student stdout length: 0**
	[exec_bash_compare] Student stderr:
	chown: changing ownership of 'test_folder/3-cp_0': Operation not permitted
	chown: changing ownership of 'test_folder/textfile_0': Operation not permitted
	chown: changing ownership of 'test_folder': Operation not permitted
	[exec_bash_compare] Student stderr length: 222

	**[exec_bash_compare] Desired stdout:
	[exec_bash_compare] Desired stdout length: 0**

`[compare] Command to run:
./test_folder/3-cp_0 test_folder/textfile_0 test_folder/textfile_0_copy ; echo $?
su no_permissions -c 'timeout 30 bash -c '"'"'./test_folder/3-cp_0 test_folder/textfile_0 test_folder/textfile_0_copy ; echo $?'"'"''`

	[compare] Return code: 0
	**[compare] Student stdout:
	99
	[compare] Student stdout length: 3**
	[compare] Student stderr:
	*Error: Can't write to test_folder/textfile_0_copy*
	[compare] Student stderr length: 50

	**[compare] Desired stdout: 0
	[compare] Desired stdout length: 2**

# task 1, 2
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
