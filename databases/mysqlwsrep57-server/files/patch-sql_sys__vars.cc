--- sql/sys_vars.cc.orig	2019-10-21 05:21:41 UTC
+++ sql/sys_vars.cc
@@ -1748,7 +1748,7 @@ static Sys_var_ulong Sys_interactive_timeout(
        "connection before closing it",
        SESSION_VAR(net_interactive_timeout),
        CMD_LINE(REQUIRED_ARG),
-       VALID_RANGE(1, LONG_TIMEOUT), DEFAULT(NET_WAIT_TIMEOUT), BLOCK_SIZE(1));
+       VALID_RANGE(1, INT_MAX32/1000), DEFAULT(NET_WAIT_TIMEOUT), BLOCK_SIZE(1));
 
 static Sys_var_ulong Sys_join_buffer_size(
        "join_buffer_size",
@@ -2628,7 +2628,7 @@ static Sys_var_ulong Sys_net_read_timeout(
        "Number of seconds to wait for more data from a connection before "
        "aborting the read",
        SESSION_VAR(net_read_timeout), CMD_LINE(REQUIRED_ARG),
-       VALID_RANGE(1, LONG_TIMEOUT), DEFAULT(NET_READ_TIMEOUT), BLOCK_SIZE(1),
+       VALID_RANGE(1, INT_MAX32/1000), DEFAULT(NET_READ_TIMEOUT), BLOCK_SIZE(1),
        NO_MUTEX_GUARD, NOT_IN_BINLOG, ON_CHECK(0),
        ON_UPDATE(fix_net_read_timeout));
 
@@ -2652,7 +2652,7 @@ static Sys_var_ulong Sys_net_write_timeout(
        "Number of seconds to wait for a block to be written to a connection "
        "before aborting the write",
        SESSION_VAR(net_write_timeout), CMD_LINE(REQUIRED_ARG),
-       VALID_RANGE(1, LONG_TIMEOUT), DEFAULT(NET_WRITE_TIMEOUT), BLOCK_SIZE(1),
+       VALID_RANGE(1, INT_MAX32/1000), DEFAULT(NET_WRITE_TIMEOUT), BLOCK_SIZE(1),
        NO_MUTEX_GUARD, NOT_IN_BINLOG, ON_CHECK(0),
        ON_UPDATE(fix_net_write_timeout));
 
@@ -4372,7 +4372,7 @@ static Sys_var_ulong Sys_net_wait_timeout(
        "The number of seconds the server waits for activity on a "
        "connection before closing it",
        SESSION_VAR(net_wait_timeout), CMD_LINE(REQUIRED_ARG),
-       VALID_RANGE(1, IF_WIN(INT_MAX32/1000, LONG_TIMEOUT)),
+       VALID_RANGE(1, INT_MAX32/1000),
        DEFAULT(NET_WAIT_TIMEOUT), BLOCK_SIZE(1));
 
 static Sys_var_plugin Sys_default_storage_engine(
