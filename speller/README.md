# Questions

## What is pneumonoultramicroscopicsilicovolcanoconiosis?

 a made-up word said to mean a lung disease contracted by inhaling fine ash or sand dust

## According to its man page, what does `getrusage` do?

It's about resource usage. It can be a function or a data type declared as a struct. the function reports usage totals for processes, specified by processes and stored in *rusage. The values can be applied to RUSAGE_SELF or RUSAGE_CHILD. The data type stores various usage values for resource usage of a process.

## Per that same man page, how many members are in a variable of type `struct rusage`?

16 members are listed and noted that others could also be included.

## Why do you think we pass `before` and `after` by reference (instead of by value) to `calculate`, even though we're not changing their contents?

Because it marks a time stamp to subtract from a later times stamp to measure the time it takes a process to run.

## Explain as precisely as possible, in a paragraph or more, how `main` goes about reading words from a file. In other words, convince us that you indeed understand how that function's `for` loop works.

TODO

## Why do you think we used `fgetc` to read each word's characters one at a time rather than use `fscanf` with a format string like `"%s"` to read whole words at a time? Put another way, what problems might arise by relying on `fscanf` alone?

fgetc reads a string one character at a time and fscanf returns the number of unput items successfully matched to the format. fgetc will allow each letter to be considered one at a time, checked aginst the dictionary letters one at a time.

## Why do you think we declared the parameters for `check` and `load` as `const` (which means "constant")?

TODO
