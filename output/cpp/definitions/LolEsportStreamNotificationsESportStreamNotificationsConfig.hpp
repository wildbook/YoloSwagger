#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig_t {
    int64_t beappFailureLongPollMinutes;
    std::string notificationsAssetMagickURL;
    bool notificationsEnabled;
    int64_t notificationsLongPollMinutes;
    std::string notificationsServiceEndpoint;
    std::string notificationsServiceEndpointV2;
    int64_t notificationsShortPollMinutes;
    std::string notificationsStreamGroupSlug;
    std::string notificationsStreamURL;
    bool useServiceEndpointV2;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes;
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL;
    j["notificationsEnabled"] = v.notificationsEnabled;
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes;
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint;
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2;
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes;
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug;
    j["notificationsStreamURL"] = v.notificationsStreamURL;
    j["useServiceEndpointV2"] = v.useServiceEndpointV2;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>();
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>();
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>();
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>();
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>();
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>();
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>();
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>();
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>();
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>();
  }
}
