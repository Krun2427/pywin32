// This file declares the IBackgroundCopyJob3 Interface for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIBackgroundCopyJob3 : public PyIBackgroundCopyJob2 {
   public:
    MAKE_PYCOM_CTOR(PyIBackgroundCopyJob3);
    static IBackgroundCopyJob3 *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *ReplaceRemotePrefix(PyObject *self, PyObject *args);
    static PyObject *AddFileWithRanges(PyObject *self, PyObject *args);
    static PyObject *SetFileACLFlags(PyObject *self, PyObject *args);
    static PyObject *GetFileACLFlags(PyObject *self, PyObject *args);

   protected:
    PyIBackgroundCopyJob3(IUnknown *pdisp);
    ~PyIBackgroundCopyJob3();
};
