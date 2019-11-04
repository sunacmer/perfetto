// Generated by ../../gn/write_buildflag_header.py

// fix_include_guards: off
#ifndef GEN_BUILD_CONFIG_PERFETTO_BUILD_FLAGS_H_
#define GEN_BUILD_CONFIG_PERFETTO_BUILD_FLAGS_H_

// clang-format off
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_ANDROID_BUILD() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_CHROMIUM_BUILD() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_STANDALONE_BUILD() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_START_DAEMONS() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_IPC() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_WATCHDOG() (PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_ANDROID() || PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX())
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_COMPONENT_BUILD() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_FORCE_DLOG_ON() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_FORCE_DLOG_OFF() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_VERSION_GEN() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_SQLITE() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_PERCENTILE() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_LINENOISE() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_METRICS() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_FTRACE() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_HTTPD() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_SYSTEM_PROBES() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_ANDROID_PROBES() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_GRAPHICS() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_JSON() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_JSON_IMPORT() (0)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_FUCHSIA() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_TP_SYSCALLS() (1)
#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_LOCAL_SYMBOLIZER() (PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX())

// clang-format on
#endif  // GEN_BUILD_CONFIG_PERFETTO_BUILD_FLAGS_H_
