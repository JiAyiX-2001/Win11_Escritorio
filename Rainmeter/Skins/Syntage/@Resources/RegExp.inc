; Do NOT change this file unless you are sure you know what you are doing !!!
; ========================================================================

; © 2021 by xxenium

;Weather.com API

[Variables]
@Include=#@#Variables.inc

Location=(?siU)"v3-location-point":.*{"location":{"latitude":(.*),"longitude":(.*),.*,"adminDistrict":(.*),"adminDistrictCode":(.*),.*,"country":(.*),"countryCode":(.*),.*,"displayName":(.*),.*}

CurrentObservations=(?siU)"v3-wx-observations-current":.*{"cloudCeiling":.*,"cloudCoverPhrase":".*","dayOfWeek":".*","dayOrNight":".*","expirationTimeUtc":.*,"iconCode":(.*),"iconCodeExtend":.*,"obsQualifierCode":.*,"obsQualifierSeverity":.*,"precip1Hour":.*,"precip6Hour":.*,"precip24Hour":.*,"pressureAltimeter":(.*),"pressureChange":(.*),"pressureMeanSeaLevel":.*,"pressureTendencyCode":.*,"pressureTendencyTrend":"(.*)","relativeHumidity":(.*),"snow1Hour":.*,"snow6Hour":.*,"snow24Hour":.*,"sunriseTimeLocal":.*,"sunriseTimeUtc":.*,"sunsetTimeLocal":.*,"sunsetTimeUtc":.*,"temperature":(.*),"temperatureChange24Hour":.*,"temperatureDewPoint":(.*),"temperatureFeelsLike":(.*),"temperatureHeatIndex":.*,"temperatureMax24Hour":.*,"temperatureMaxSince7Am":.*,"temperatureMin24Hour":.*,"temperatureWindChill":.*,"uvDescription":"(.*)","uvIndex":(.*),"validTimeLocal":"(.*)","validTimeUtc":.*,"visibility":(.*),"windDirection":.*,"windDirectionCardinal":"(.*)","windGust":(.*),"windSpeed":(.*),"wxPhraseLong":"(.*)","wxPhraseMedium":.*,"wxPhraseShort":.*}

DailyForecastDayPart=(?siU)"v3-wx-forecast-daily-15day":.*{.*"daypartName":(.*),"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

DailyForecastDetails=(?siU)"v3-wx-forecast-daily-15day":.*{.*"iconCode":.*"narrative":(.*),"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"



; © 2021 by xxenium









