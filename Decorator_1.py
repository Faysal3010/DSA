def repeat_decorator(times):
    def actual_decorator(func):
        def wrapper(*args, **kwargs):
            for _ in range(times):
                func(*args, **kwargs)
        return wrapper
    return actual_decorator

@repeat_decorator(3)
def greet(name):
    print(f"Hello, {name}!")

greet("Faysal")

# hello, Faysal!
# hello, Faysal!
# hello, Faysal!
