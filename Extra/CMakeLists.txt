cmake_minimum_required(VERSION 3.20)
project(ExamRank02_Prep C)

set(CMAKE_C_STANDARD 99)

add_executable(ExamRank02_Prep ft_isalpha.c ft_isdigit.c ExamRank02_Prep.h /
        ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c /
        ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_bzero.c ft_strlcat.c /
        ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c /
        ft_strlcpy.c ft_strdup.c ft_atoi.c ft_itoa.c ft_calloc.c ft_substr.c ft_strtrim.c /
        ft_double_pt.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c /
        ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c /
        ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c /
        ft_lstiter.c ft_lstmap.c ft_extra_concatenate_2_strings.c ft_extra_years_weeks_days.c /
        ft_extra_datatypes_size.c ft_extra_farenheit2celsius.c ft_extra_string_reverse.c /
        ft_extra_strcmp.c ft_extra_leapyear.c ft_extra_lists.c ft_extra_quicksort.c /
        ft_extra_largest_nb.c ft_extra_swap_2digits_nb.c ft_extra_reverse_nb.c /
        ft_extra_Amstrong_nb.c ft_extra_nb_to_binary.c ft_extra_binary_to_dec.c /
        ft_extra_sum_recursive.c ft_extra_print_array_recursive.c ft_extra_factorial_recursive.c /
        ft_extra_swap_pointer.c ft_extra_print_bits.c ft_extra_reverse_bits.c /
        "Exam_files_grademe/Level 1/first_word.c" "Exam_files_grademe/Level 1/fizzbuzz.c" /
        "Exam_files_grademe/Level 1/ft_putstr.c" "Exam_files_grademe/Level 1/ft_strcpy.c" /
        "Exam_files_grademe/Level 1/ft_strlen_2.c" "Exam_files_grademe/Level 1/ft_swap.c" /
        "Exam_files_grademe/Level 1/repeat_alpha.c" "Exam_files_grademe/Level 1/rev_print.c" /
        "Exam_files_grademe/Level 1/rot_13.c" "Exam_files_grademe/Level 1/rotone.c" /
        "Exam_files_grademe/Level 1/search_and_replace.c" "Exam_files_grademe/Level 1/ulstr.c" /
        "Exam_files_grademe/Level 2/alpha_mirror.c" "Exam_files_grademe/Level 2/camel_to_snake.c" /
        "Exam_files_grademe/Level 2/do_op.c" "Exam_files_grademe/Level 2/ft_atoi_2.c" /
        "Exam_files_grademe/Level 2/ft_strcmp_2.c" "Exam_files_grademe/Level 2/ft_strcspn.c" /
        "Exam_files_grademe/Level 2/ft_strdup_2.c" "Exam_files_grademe/Level 2/ft_strpbrk_2.c" "Exam_files_grademe/Level 2/ft_strrev_2.c" "Exam_files_grademe/Level 2/ft_strspn_2.c" "Exam_files_grademe/Level 2/inter_2.c" "Exam_files_grademe/Level 2/is_power_of_2.c" "Exam_files_grademe/Level 2/last_word.c" "Exam_files_grademe/Level 2/max.c" "Exam_files_grademe/Level 2/print_bits_2.c" "Exam_files_grademe/Level 2/reverse_bits_2.c" "Exam_files_grademe/Level 2/snake_to_camel_2.c" "Exam_files_grademe/Level 2/swap_bits_2.c" "Exam_files_grademe/Level 2/union_2.c" "Exam_files_grademe/Level 2/wdmatch.c" "Exam_files_grademe_2/Level 1/ft_putstr.c" "Exam_files_grademe_2/Level 1/ft_strcpy.c" "Exam_files_grademe_2/Level 1/ft_strlen.c" "Exam_files_grademe_2/Level 1/ft_swap.c" "Exam_files_grademe_2/Level 1/repeat_alpha.c" "Exam_files_grademe_2/Level 1/rev_print.c" "Exam_files_grademe_2/Level 1/rot_13.c" "Exam_files_grademe_2/Level 1/rotone.c" "Exam_files_grademe_2/Level 1/search_and_replace.c" "Exam_files_grademe_2/Level 1/ulstr.c" "Exam_files_grademe_2/Level 2/alpha_mirror.c" "Exam_files_grademe_2/Level 2/camel_to_snake.c" "Exam_files_grademe_2/Level 2/do_op.c" "Exam_files_grademe_2/Level 2/ft_atoi.c" "Exam_files_grademe_2/Level 2/ft_strcmp.c" "Exam_files_grademe_2/Level 2/ft_strcspn.c" "Exam_files_grademe_2/Level 2/ft_strdup.c" "Exam_files_grademe_2/Level 2/ft_strpbrk.c" "Exam_files_grademe_2/Level 2/ft_strrev.c" "Exam_files_grademe_2/Level 2/ft_strspn.c" "Exam_files_grademe_2/Level 2/inter.c" "Exam_files_grademe_2/Level 2/is_power_of_2.c" "Exam_files_grademe_2/Level 2/last_word.c" "Exam_files_grademe_2/Level 2/max.c" "Exam_files_grademe_2/Level 2/print_bits.c" "Exam_files_grademe_2/Level 2/swap_bits.c" "Exam_files_grademe_2/Level 2/snake_to_camel.c" "Exam_files_grademe_2/Level 2/union.c" "Exam_files_grademe_2/Level 2/wdmatch.c" "Exam_files_grademe_2/Level 3/add_prime_sum.c" "Exam_files_grademe_2/Level 3/epur_str.c" "Exam_files_grademe_2/Level 3/expand_str.c" "Exam_files_grademe_2/Level 3/ft_atoi_base.c" "Exam_files_grademe_2/Level 3/ft_list.h" "Exam_files_grademe_2/Level 3/ft_list_size.c" "Exam_files_grademe_2/Level 3/ft_range.c" "Exam_files_grademe_2/Level 3/ft_rrange.c" "Exam_files_grademe_2/Level 3/hidenp.c" "Exam_files_grademe_2/Level 3/lcm.c" "Exam_files_grademe_2/Level 3/paramsum.c" "Exam_files_grademe_2/Level 3/pgcd.c" "Exam_files_grademe_2/Level 3/print_hex.c" "Exam_files_grademe_2/Level 3/rstr_capitalizer.c" "Exam_files_grademe_reload/level_1/first_word.c" "Exam_files_grademe_reload/level_1/fizzbuzz.c" "Exam_files_grademe_reload/level_1/ft_putstr.c" "Exam_files_grademe_reload/level_1/ft_strcpy.c" "Exam_files_grademe_reload/level_1/ft_strlen.c" "Exam_files_grademe_reload/level_1/ft_swap.c" "Exam_files_grademe_reload/level_1/repeat_alpha.c" "Exam_files_grademe_reload/level_1/rev_print.c" "Exam_files_grademe_reload/level_1/rot_13.c" "Exam_files_grademe_reload/level_1/rotone.c" "Exam_files_grademe_reload/level_1/search_and_replace.c" "Exam_files_grademe_reload/level_1/ulstr.c" "Exam_files_grademe_reload/level_2/alpha_mirror.c" Exam_files_grademe_reload/level_2/camel_to_snake.c Exam_files_grademe_reload/level_2/do_op.c Exam_files_grademe_reload/level_2/ft_atoi.c Exam_files_grademe_reload/level_2/ft_strcmp.c Exam_files_grademe_reload/level_2/ft_strcspn.c Exam_files_grademe_reload/level_2/ft_strdup.c Exam_files_grademe_reload/level_2/ft_strpbrk.c Exam_files_grademe_reload/level_2/ft_strrev.c Exam_files_grademe_reload/level_2/ft_strspn.c Exam_files_grademe_reload/level_2/inter.c Exam_files_grademe_reload/level_2/is_power_of_2.c Exam_files_grademe_reload/level_2/last_word.c)
