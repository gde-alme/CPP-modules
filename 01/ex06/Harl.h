#ifndef __HARL_H__
#define __HARL_H__

enum string_code {
    debugc,
    infoc,
    warningc,
    errorc,
    NO_LEVEL
};

string_code hashHit(std::string level) {
    if (level.compare("debug") == 0) return debugc;
    if (level.compare("info") == 0) return infoc;
    if (level.compare("warning") == 0) return warningc;
    if (level.compare("error") == 0) return errorc;
    return (NO_LEVEL);
}

#endif