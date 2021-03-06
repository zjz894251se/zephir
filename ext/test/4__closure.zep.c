
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(test_4__closure) {

	ZEPHIR_REGISTER_CLASS(test, 4__closure, test, 4__closure, test_4__closure_method_entry, ZEND_ACC_FINAL_CLASS);

	return SUCCESS;

}

PHP_METHOD(test_4__closure, __invoke) {

	zval *param1, param1_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&param1_sub);

	zephir_fetch_params_without_memory_grow(1, 0, &param1);




}

