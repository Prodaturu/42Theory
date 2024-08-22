//: --- --- --- Sequence Points Importance --- --- --- ://

// The expression ++a + ++a causes undefined behavior because it modifies a more than once between sequence points. A sequence point is a point in time at which the dust has settled and all side effects of previous evaluations are complete. In C, sequence points occur at the end of each statement and at certain operators, such as &&, ||, and ,.

// In the expression ++a + ++a, there's no sequence point between the two ++ operations, so the order in which they're evaluated is not specified. This means the result of the expression can vary depending on the compiler and the optimization settings.

// To avoid undefined behavior, you should never write code that depends on the order of evaluation of side effects. Instead, you should write something like this: