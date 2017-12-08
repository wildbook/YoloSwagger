#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig_t {
    bool useServiceEndpointV2;
    std::string notificationsStreamURL;
    int64_t notificationsLongPollMinutes;
    int64_t beappFailureLongPollMinutes;
    int64_t notificationsShortPollMinutes;
    std::string notificationsServiceEndpoint;
    bool notificationsEnabled;
    std::string notificationsAssetMagickURL;
    std::string notificationsServiceEndpointV2;
    std::string notificationsStreamGroupSlug;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    j["useServiceEndpointV2"] = v.useServiceEndpointV2;
    j["notificationsStreamURL"] = v.notificationsStreamURL;
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes;
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes;
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes;
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint;
    j["notificationsEnabled"] = v.notificationsEnabled;
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL;
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2;
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>();
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>();
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>();
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>();
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>();
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>();
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>();
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>();
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>();
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
