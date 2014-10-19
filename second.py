"""this program wil print the members of the nested list and indent them"""
movies = ["dark knight", "troy", [
    "spiderman", "ps i love you", ["rush hour", "enter the dragon"]]]


def print_lol(a_list, level):
    for each_item in a_list:
        if isinstance(each_item, list):
            print_lol(each_item, level + 1)
        else:
            for tab in range(level):
                print("\t"),

            print(each_item)
print_lol(movies, 0)
