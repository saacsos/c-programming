/*
 * Function template maximum header file.
 */
template <class T> // or template <typename T>
T maximum(T value1, T value2, T value3)
{
    T maximumValue = value1; // assume value1 is maximum

    // determine whether value2 is greater than maximumValue
    if (value2 > maximumValue)
        maximumValue = value2;

    // determine whether value3 is greater than maximumValue
    if (value3 > maximumValue)
        maximumValue = value3;

    return maximumValue;
}
