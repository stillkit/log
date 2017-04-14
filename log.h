/**
 * @file log.h
 * log tools class
 *
 * @author kit <zxyy123456@163.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Print the correct usage.
 */
static void usage(const char *reason);

/**
 * The log functino will printf the follow 8 class information
 * 1,1:emerg,紧急-系统无法使用
 * 2,2:alert,必须立即采取措施
 * 3,3:crit,致命情况
 * 4,4:error,错误情况
 * 5,5:warn,警告情况
 * 6,6:notice,一般重要情况
 * 7,7:info,普通性息
 * 8,8:debug,出错级别信息
 *
 */
void loges(int infoNum,const char *str,const char *fileStr,int lineNum,const char *funcStr);
