./: {*/ -build/ -upstream/ -__pycache__/} doc{README.md} manifest

# Don't install tests.
#
tests/: install = false
