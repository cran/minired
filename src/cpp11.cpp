// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// red_dictionary.cpp
SEXP redatam_open(const std::string& dictionary_name);
extern "C" SEXP _minired_redatam_open(SEXP dictionary_name) {
  BEGIN_CPP11
    return cpp11::as_sexp(redatam_open(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(dictionary_name)));
  END_CPP11
}
// red_dictionary.cpp
void redatam_save(SEXP dic, const std::string& name);
extern "C" SEXP _minired_redatam_save(SEXP dic, SEXP name) {
  BEGIN_CPP11
    redatam_save(cpp11::as_cpp<cpp11::decay_t<SEXP>>(dic), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(name));
    return R_NilValue;
  END_CPP11
}
// red_dictionary.cpp
void redatam_close(SEXP dic);
extern "C" SEXP _minired_redatam_close(SEXP dic) {
  BEGIN_CPP11
    redatam_close(cpp11::as_cpp<cpp11::decay_t<SEXP>>(dic));
    return R_NilValue;
  END_CPP11
}
// red_dictionary.cpp
cpp11::writable::list redatam_entities(SEXP dic);
extern "C" SEXP _minired_redatam_entities(SEXP dic) {
  BEGIN_CPP11
    return cpp11::as_sexp(redatam_entities(cpp11::as_cpp<cpp11::decay_t<SEXP>>(dic)));
  END_CPP11
}
// red_dictionary.cpp
cpp11::writable::list redatam_variables(SEXP dic, const std::string& entity_name);
extern "C" SEXP _minired_redatam_variables(SEXP dic, SEXP entity_name) {
  BEGIN_CPP11
    return cpp11::as_sexp(redatam_variables(cpp11::as_cpp<cpp11::decay_t<SEXP>>(dic), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(entity_name)));
  END_CPP11
}
// red_execute.cpp
cpp11::writable::list redatam_query(SEXP dic, const std::string& spc);
extern "C" SEXP _minired_redatam_query(SEXP dic, SEXP spc) {
  BEGIN_CPP11
    return cpp11::as_sexp(redatam_query(cpp11::as_cpp<cpp11::decay_t<SEXP>>(dic), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(spc)));
  END_CPP11
}
// red_execute.cpp
cpp11::writable::list redatam_run(SEXP dic, const std::string& file_name);
extern "C" SEXP _minired_redatam_run(SEXP dic, SEXP file_name) {
  BEGIN_CPP11
    return cpp11::as_sexp(redatam_run(cpp11::as_cpp<cpp11::decay_t<SEXP>>(dic), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(file_name)));
  END_CPP11
}
// red_initialize.cpp
std::string redatam_version();
extern "C" SEXP _minired_redatam_version() {
  BEGIN_CPP11
    return cpp11::as_sexp(redatam_version());
  END_CPP11
}
// red_initialize.cpp
void redatam_init_(std::string pachageDir);
extern "C" SEXP _minired_redatam_init_(SEXP pachageDir) {
  BEGIN_CPP11
    redatam_init_(cpp11::as_cpp<cpp11::decay_t<std::string>>(pachageDir));
    return R_NilValue;
  END_CPP11
}
// red_initialize.cpp
void redatam_destroy_();
extern "C" SEXP _minired_redatam_destroy_() {
  BEGIN_CPP11
    redatam_destroy_();
    return R_NilValue;
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_minired_redatam_close",     (DL_FUNC) &_minired_redatam_close,     1},
    {"_minired_redatam_destroy_",  (DL_FUNC) &_minired_redatam_destroy_,  0},
    {"_minired_redatam_entities",  (DL_FUNC) &_minired_redatam_entities,  1},
    {"_minired_redatam_init_",     (DL_FUNC) &_minired_redatam_init_,     1},
    {"_minired_redatam_open",      (DL_FUNC) &_minired_redatam_open,      1},
    {"_minired_redatam_query",     (DL_FUNC) &_minired_redatam_query,     2},
    {"_minired_redatam_run",       (DL_FUNC) &_minired_redatam_run,       2},
    {"_minired_redatam_save",      (DL_FUNC) &_minired_redatam_save,      2},
    {"_minired_redatam_variables", (DL_FUNC) &_minired_redatam_variables, 2},
    {"_minired_redatam_version",   (DL_FUNC) &_minired_redatam_version,   0},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_minired(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
