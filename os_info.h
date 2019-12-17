#ifndef __OS_INFO_H__
#define __OS_INFO_H__

#include <iomanip>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include <sys/statvfs.h>

#define GB_TO_B 1073741824.0

using namespace std;

class OS_info {
private:
    struct sysinfo sys_info;
    struct statvfs vfs_info;
    string path = "NULL";
    string name = "NULL";
    string distr = "NULL";
    unsigned long ram_free = 0, ram_total = 0, disk_free = 0, disk_total = 0;
public:
    OS_info(string, string);
    virtual ~OS_info();
    void update(const char*);
    long get_info(int);
    ostringstream return_info(int);
};

#endif