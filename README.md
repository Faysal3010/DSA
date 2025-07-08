# DSA
___
## 1.Decorator

🌀 Step 1: Function কি এবং কিভাবে কাজ করে?
Python-এ function মানে হলো—কিছু কাজ করার জন্য কোড ব্লকের নাম দেওয়া। যেমন:
def greet():
    print("হ্যালো Faysal!")

greet()  # Output: হ্যালো Faysal!



🎁 Step 2: Function কে Argument হিসাবে pass করা
Python-এ function হলো first-class object, তাই function অন্য function-এ pass করা যায়!
def greet():
    print("হ্যালো!")

def call_function(func):
    print("Calling function...")
    func()

call_function(greet)  # greet() call হবে



🧩 Step 3: Decorator এর মূল রূপ
Decorator আসলে একটা function, যেটা অন্য একটা function কে modify করে। Structure নিচের মতো:
def my_decorator(func):
    def wrapper():
        print("Function চলার আগে")
        func()
        print("Function চলার পরে")
    return wrapper



🧵 Step 4: @ Syntax দিয়ে Decorator Apply করা
@my_decorator
def greet():
    print("হ্যালো!")

greet()


👉 Output হবে:
Function চলার আগে
হ্যালো!
Function চলার পরে


@my_decorator লিখলে Python বলে—এই greet() function এর উপরে my_decorator() apply করো।

🔧 Step 5: Arguments Handling সহ Decorator
Decorator যদি এমন function modify করে যেটাতে arguments থাকে, তখন wrapper function-ও সেই arguments নিতে হবে:
def smart_decorator(func):
    def wrapper(name):
        print("Decorated Function চলবে...")
        func(name)
    return wrapper

@smart_decorator
def say_hello(name):
    print(f"হ্যালো, {name}!")

say_hello("Faysal")

hhhhhhh
---

## 2. Linked List

___
