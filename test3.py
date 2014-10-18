movies=["tom","jerry",["kate",["som","kri"]]]
for fun in movies:
     if isinstance(fun,list):
         for each_item in fun:
             if isinstance(each_item,list):
                 for nested_item in each_item:
                     print nested_item
             else:
                  print(each_item)
     else:
         print fun
