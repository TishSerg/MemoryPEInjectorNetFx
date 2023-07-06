Memory PE Injector .NET Framework Wrapper
=========================================

This library wraps [MemoryPEInjector](https://github.com/TishSerg/MemoryPEInjector) C++ class into .NET Framework DLL, so you can use it in your .NET projects.

Usage
-----

Add dependency to your project and use as follows:

```cs
byte[] peFile = File.ReadAllBytes(peFilePath);
MemoryPEInjector.PEInjector peInjector = new MemoryPEInjector.PEInjector();
unsafe
{
    fixed (byte* ptr = peFile)
    {
        peInjector.Inject(ptr);
    }
}
```
