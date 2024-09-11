# `godot-cpp` for `build2`

This is the `build2` package for [`godot-cpp`](https://github.com/godotengine/godot-cpp).

`godot-cpp` is the library C++ users must use to make [GDExtensions](https://docs.godotengine.org/en/stable/tutorials/scripting/gdextension/index.html) for the [Godot Engine](https://godotengine.org/), allowing using C++ for part or all the behavior of a game made with Godot.

## Requirements

This package requires the presence of `python >= 3.4` in the environment (https://github.com/Klaim/build2-godot-cpp/issues/1), used to run a code generator script before building the library.

# Importable Targets

- `godot-cpp%liba{godot-cpp}` :

    The `godot-cpp` library (exclusively static). Make your GDExtension shared library depend on this target for it's code to have acces to the C and C++ APIs (as specified by GDExtension documentation). Communication with Godot goes through the C API internally so there is no ABI, you can build however you want. Beware that on Windows C runtime implementation being different in "debug" and "release" configurations.

# Usage

- Make sure to be familiar with [how GDExtension works, see the official documentation](https://docs.godotengine.org/en/stable/tutorials/scripting/gdextension/index.html).
- Your GDEXtension library must be a shared library (`libs`) as it will be loaded at runtime by Godot.

## Compatibility with Godot Engine

When using this package, chose the version which matches your intended Godot Engine version. Otherwise, both API and ABI will not match as they are broken at each release.

If you want to use a custom build of the Godot Engine: TODO: we currently don't support directly this scenario but [it is planned](https://github.com/Klaim/build2-godot-cpp/issues/6).

## Configuration Options

- `config.godot_cpp.enable_hot_reload` (default: `true`) : Enables hot-reloading when using the Godot Engine Editor starting with versions 4.2. If `true`, you must also set `reloadable = true` in the `.gdextension` file going with your GDExtension to enable the feature. When the GDExtension binary file is changed, the editor will attempt to hot-reload it the next time it's windows acquires focus. This behavior will fail if your GDExtension was not built with this option and there will be no attempt if `reloadable = true` was not set in the `.gdextension` file.

TODO: The other options are not supported yet, see https://github.com/Klaim/build2-godot-cpp/issues/7


