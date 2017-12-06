#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig_t {
    int64_t notificationsShortPollMinutes;
    std::string notificationsStreamURL;
    std::string notificationsServiceEndpoint;
    std::string notificationsServiceEndpointV2;
    bool notificationsEnabled;
    int64_t beappFailureLongPollMinutes;
    bool useServiceEndpointV2;
    std::string notificationsAssetMagickURL;
    std::string notificationsStreamGroupSlug;
    int64_t notificationsLongPollMinutes;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes;
    j["notificationsStreamURL"] = v.notificationsStreamURL;
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint;
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2;
    j["notificationsEnabled"] = v.notificationsEnabled;
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes;
    j["useServiceEndpointV2"] = v.useServiceEndpointV2;
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL;
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug;
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>();
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>();
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>();
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>();
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>();
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>();
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>();
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>();
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>();
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>();
  }
}
