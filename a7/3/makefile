#to_create_exe_file
exe_file : linked_list.c use_linked_list.c linked_list.h
    gcc use_linked_list.c linked_list.c -I. -o exe_file.exe

#to_create_obj_files
obj_file : linked_list.c use_linked_list.c linked_list.h
    gcc -c linked_list.c use_linked_list.c -I.

#to_clean_obj_&_exe_files
clean :
    rm linked_list.o use_linked_list.o exe_file.exe