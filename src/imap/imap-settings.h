#ifndef IMAP_SETTINGS_H
#define IMAP_SETTINGS_H

struct mail_user_settings;

/* <settings checks> */
enum imap_client_workarounds {
	WORKAROUND_DELAY_NEWMAIL		= 0x01,
	WORKAROUND_TB_EXTRA_MAILBOX_SEP		= 0x08,
	WORKAROUND_TB_LSUB_FLAGS		= 0x10
};
/* </settings checks> */

struct imap_settings {
	bool verbose_proctitle;

	/* imap: */
	uoff_t imap_max_line_length;
	unsigned int imap_idle_notify_interval;
	const char *imap_capability;
	const char *imap_client_workarounds;
	const char *imap_logout_format;
	const char *imap_id_send;
	const char *imap_id_log;

	/* imap urlauth: */
	const char *imap_urlauth_host;
	unsigned int imap_urlauth_port;

	enum imap_client_workarounds parsed_workarounds;
};

extern const struct setting_parser_info imap_setting_parser_info;

#endif
