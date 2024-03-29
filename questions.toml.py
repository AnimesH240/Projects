[python]
label = "Python"

    [[python.questions]]
    question     = "When was the first known use of the word 'quiz'"
    answers      = ["1781"]
    alternatives = ["1771", "1871", "1881"]

    [[python.questions]]
    question     = "Which built-in function can get information from the user"
    answers      = ["input"]
    alternatives = ["get", "print", "write"]

    [[python.questions]]
    question = "What's the purpose of the built-in zip() function"
    answers = ["To iterate over two or more sequences at the same time"]
    alternatives = [
        "To combine several strings into one",
        "To compress several files into one archive",
        "To get information from the user",
    ]

    [[python.questions]]
    question     = "What does dict.get(key) return if key isn't found in dict"
    answers      = ["None"]
    alternatives = ["key", "True", "False"]

    [[python.questions]]
    question = "How do you iterate over both the indices and elements in an iterable"
    answers = ["enumerate(iterable)"]
    alternatives = [
        "enumerate(iterable, start=1)",
        "range(iterable)",
        "range(iterable, start=1)",
    ]

    [[python.questions]]
    question = "What's the official name of the := operator"
    answers = ["Assignment expression"]
    alternatives = [
        "Named expression",
        "Walrus operator",
        "Colon equals operator",
    ]

    [[python.questions]]
    question = "What's one effect of calling random.seed(42)"
    answers = ["The random numbers are reproducible."]
    alternatives = [
        "The random numbers are more random.",
        "The computer clock is reset.",
        "The first random number is always 42.",
    ]

    [[python.questions]]
    question     = "Which version of Python is the first with TOML support built in"
    answers      = ["3.11"]
    alternatives = ["3.9", "3.10", "3.12"]

    [[python.questions]]
    question     = "How can you run a Python script named quiz.py"
    answers      = ["python quiz.py", "python -m quiz"]
    alternatives = ["python quiz", "python -m quiz.py"]
    hint         = "One option uses the filename, and the other uses the module name."

    [[python.questions]]
    question     = "What's the name of the list-like data structure in TOML"
    answers      = ["Array"]
    alternatives = ["List", "Sequence", "Set"]

    [[python.questions]]
    question = "What's a PEP"
    answers = ["A Python Enhancement Proposal"]
    alternatives = [
        "A Pretty Exciting Policy",
        "A Preciously Evolved Python",
        "A Potentially Epic Prize",
    ]
    hint = "PEPs are used to evolve Python."
    explanation = """
    Python Enhancement Proposals (PEPs) are design documents that provide
    information to the Python community. PEPs are used to propose new features
    for the Python language, to collect community input on an issue, and to
    document design decisions made about the language.
    """

    [[python.questions]]
    question = "How can you add a docstring to a function"
    answers = [
        "By writing a string literal as the first statement in the function",
        "By assigning a string to the function's .__doc__ attribute",
    ]
    alternatives = [
        "By using the built-in @docstring decorator",
        "By returning a string from the function",
    ]
    hint = "They are parsed from your code and stored on the function object."
    explanation = """
    Docstrings document functions and other Python objects. A docstring is a
    string literal that occurs as the first statement in a module, function,
    class, or method definition. Such a docstring becomes the .__doc__ special
    attribute of that object. See PEP 257 for more information.

    There's no built-in @docstring decorator. Many functions naturally return
    strings. Such a feature can therefore not be used for docstrings.
    """

    [[python.questions]]
    question = "When was the first public version of Python released"
    answers = ["February 1991"]
    alternatives = ["January 1994", "October 2000", "December 2008"]
    hint = "The first public version was labeled version 0.9.0."
    explanation = """
    Guido van Rossum started work on Python in December 1989. He posted
    Python v0.9.0 to the alt.sources newsgroup in February 1991. Python
    reached version 1.0.0 in January 1994. The next major versions,
    Python 2.0 and Python 3.0, were released in October 2000 and December
    2008, respectively.
    """

[capitals]
label = "Capitals"

    [[capitals.questions]]
    question = "What's the capital of Norway"
    answers = ["Oslo"]
    hint = "Lars Onsager, Jens Stoltenberg, Trygve Lie, and Børge Ousland."
    alternatives = ["Stockholm", "Copenhagen", "Helsinki", "Reykjavik"]
    explanation = """
    Oslo was founded as a city in the 11th century and established as a
    trading place. It became the capital of Norway in 1299. The city was
    destroyed by a fire in 1624 and rebuilt as Christiania, named in honor
    of the reigning king. The city was renamed back to Oslo in 1925.
    """

    [[capitals.questions]]
    question = "What's the state capital of Texas, USA"
    answers = ["Austin"]
    alternatives = ["Harrisburg", "Houston", "Galveston", "Columbia"]
    hint = "SciPy is held there each year."
    explanation = """
    Austin is named in honor of Stephen F. Austin. It was purpose-built to
    be the capital of Texas and was incorporated in December 1839. Houston,
    Harrisburg, Columbia, and Galveston are all earlier capitals of Texas.
    """