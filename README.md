# Spicy — A C++ Parser Generator for Dissecting Protocols & Files

## Overview

Spicy is a C++ parser generator that makes it easy to create robust
parsers for network protocols, file formats, and more. Spicy is a bit
like a "yacc for protocols", but it's much more than that: It's an
all-in-one system enabling developers to write attributed grammars
that define both syntax and semantics of an input format using a
single, unified language. Think of Spicy as a domain-specific
scripting language for all your parsing needs.

The Spicy toolchain turns such grammars into efficient C++ parsing
code that exposes an API to host applications for instantiating
parsers, feeding them input, and retrieving their results. At runtime,
parsing proceeds fully incrementally—and potentially highly
concurrently—on input streams of arbitrary size. Compilation of Spicy
parsers takes place either just-in-time at startup (through
Clang/LLVM), or ahead-of-time either by creating pre-compiled shared
libraries or simply by giving you C++ code that you can link into your
application.

Spicy comes with a [Zeek](https://www.zeek.org>) plugin that enables
adding new protocols to Zeek without having to write any C++ code. You
define the grammar, specify which Zeek events to generate, and Spicy
takes care of the rest.

## Download

There are no releases yet. To download the source code from GitHub, run:

```
    # git clone --recursive https://github.com/zeek/spicy
```

We will start providing binary builds soon.

## Getting Started

- [Spicy Manual](https://docs.zeek.org/projects/spicy>)
    * [Installation](https://docs.zeek.org/projects/spicy/installation.html>)
    * [Getting Started](https://docs.zeek.org/projects/spicy/getting-started.html>)
    * [FAQ](https://docs.zeek.org/projects/faq.html>)

## Getting in Touch

Having trouble using Spicy? Have ideas how to make Spicy better? We'd
like to hear from you!

- Check out the [FAQ](http://docs.zeek.org/projects/spicy>) to see if any of that helps.
- Report issues on [GitHub](https://github.com/zeek/spicy/issues>).
- Ask the `#spicy` channel [on `Zeek's Slack]](zeekorg.slack.com>).
- Subscribe to the [Spicy mailing list](http://mailman.icsi.berkeley.edu/mailman/spicy>).
- To follow deveopment, subscribe to the [commits mailing list](http://mailman.icsi.berkeley.edu/mailman/spicy-commits>) (it can
  be noisy ...).

## Status

Spicy is currently in a very early beta phase, it's *not* yet ready
for production usage. You'll find plenty rough edges still, including
unstable code, missing features, and confusing error messages if you
do something unexpected. Specifics of the language and the toolchain
may still change as well---there's no release yet, just a git `master`
branch that keeps moving. We don't recommend Spicy and its parsers for
anything critical yet, but we're very interested in feedback as we're
working to stabilize all this.

## License

Spicy is open source and released under a BSD license, which allows
for pretty much unrestricted use as long as you leave the license
header in place. You fully own any parsers that Spicy generates from
your grammars.

## History

Spicy was originally developed as a research prototype at the
`International Computer Science Institute
<http://www.icsi.berkeley.edu/>`_ with funding from the `U.S. National
Science Foundation <https://www.nsf.gov>`_. Since then, Spicy has been
rebuilt from the ground up by `Corelight
<https://www.corelight.com>`_, who has contributed the new
implementation to the Zeek Project.
