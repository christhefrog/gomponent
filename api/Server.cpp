#include "api.hpp"
#include "Gomponent.hpp"

#ifdef __cplusplus
extern "C"
{
#endif

	GOMPONENT_EXPORT void server_printLnU8(const char* fmt, ...)
	{
		ICore* core = Gomponent::Get()->core;

		va_list args;
		va_start(args, fmt);

		core->vprintLnU8(fmt, args);

		va_end(args);
	}

	GOMPONENT_EXPORT void server_logLnU8(int logLevel, const char* fmt, ...)
	{
		ICore* core = Gomponent::Get()->core;

		va_list args;
		va_start(args, fmt);

		core->vlogLnU8(LogLevel(logLevel), fmt, args);

		va_end(args);
	}

	GOMPONENT_EXPORT void server_setModeText(String text)
	{
		ICore* core = Gomponent::Get()->core;

		if (core)
		{
			core->setData(SettableCoreDataType::ModeText, StringView(text.buf, text.length));
		}
	}

	GOMPONENT_EXPORT void server_setWeather(int weather)
	{
		ICore* core = Gomponent::Get()->core;

		if (core)
		{
			core->setWeather(weather);
		}
	}

	GOMPONENT_EXPORT void server_setWorldTime(int hours)
	{
		ICore* core = Gomponent::Get()->core;

		if (core)
		{
			core->setWorldTime(Hours(hours));
		}
	}

	GOMPONENT_EXPORT void server_enableStuntBonuses()
	{
		ICore* core = Gomponent::Get()->core;

		if (core)
		{
			core->useStuntBonuses(true);
		}
	}

	GOMPONENT_EXPORT void server_setServerName(String name)
	{
		ICore* core = Gomponent::Get()->core;

		if (core)
		{
			core->setData(SettableCoreDataType::ServerName, StringView(name.buf, name.length));
		}
	}

	GOMPONENT_EXPORT void server_setMapName(String name)
	{
		ICore* core = Gomponent::Get()->core;

		if (core)
		{
			core->setData(SettableCoreDataType::MapName, StringView(name.buf, name.length));
		}
	}

	GOMPONENT_EXPORT void server_setLanguage(String language)
	{
		ICore* core = Gomponent::Get()->core;

		if (core)
		{
			core->setData(SettableCoreDataType::Language, StringView(language.buf, language.length));
		}
	}

	GOMPONENT_EXPORT void server_setURL(String url)
	{
		ICore* core = Gomponent::Get()->core;

		if (core)
		{
			core->setData(SettableCoreDataType::URL, StringView(url.buf, url.length));
		}
	}

#ifdef __cplusplus
}
#endif
