#include <Python.h>

PyObject *add(PyObject* self, PyObject* args)
{
	int value_a, value_b;

	if (!PyArg_ParseTuple(args, "ii", &value_a, &value_b))
		return NULL;
        return (Py_BuildValue("i", value_a + value_b));
}

PyObject *sub(PyObject* self, PyObject* args)
{
	int value_a, value_b;

        if (!PyArg_ParseTuple(args, "ii", &value_a, &value_b))
                return NULL;

        return Py_BuildValue("i", value_a - value_b);
}

PyObject *divi(PyObject* self, PyObject* args)
{
	int value_a, value_b;

        if (!PyArg_ParseTuple(args, "ii", &value_a, &value_b))
                return NULL;

        return Py_BuildValue("i", value_a / value_b);
}

PyObject *mul(PyObject* self, PyObject* args)
{
	int value_a, value_b;

        if (!PyArg_ParseTuple(args, "ii", &value_a, &value_b))
                return NULL;
        return Py_BuildValue("i", value_a * value_b);
}

PyObject *mod(PyObject* self, PyObject* args)
{
	int value_a, value_b;

        if (!PyArg_ParseTuple(args, "ii", &value_a, &value_b))
                return NULL;
        return Py_BuildValue("i", value_a % value_b);
}

PyMethodDef cops_methods[] = {
    {"add", add, METH_VARARGS, "Add two numbers"},
    {"sub", sub, METH_VARARGS, "Subtract two numbers"},
    {"divi", divi, METH_VARARGS, "divide two numbers"},
    {"mul", mul, METH_VARARGS, "multiply two numbers"},
    {"mod", mod, METH_VARARGS, "Add two numbers"},
    {NULL, NULL, 0, NULL}
};

struct PyModuleDef cops = {
    PyModuleDef_HEAD_INIT,
    "cops",
    NULL,
    -1,
    cops_methods
};

/* Module initialization function */
PyMODINIT_FUNC PyInit_cops(void) {
    return PyModule_Create(&cops);
}
