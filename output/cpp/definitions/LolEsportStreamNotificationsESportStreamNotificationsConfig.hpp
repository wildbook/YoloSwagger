#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig_t {
    int64_t beappFailureLongPollMinutes;
    int64_t notificationsShortPollMinutes;
    std::string notificationsAssetMagickURL;
    int64_t notificationsLongPollMinutes;
    std::string notificationsStreamURL;
    std::string notificationsStreamGroupSlug;
    bool notificationsEnabled;
    std::string notificationsServiceEndpointV2;
    bool useServiceEndpointV2;
    std::string notificationsServiceEndpoint;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes;
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes;
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL;
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes;
    j["notificationsStreamURL"] = v.notificationsStreamURL;
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug;
    j["notificationsEnabled"] = v.notificationsEnabled;
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2;
    j["useServiceEndpointV2"] = v.useServiceEndpointV2;
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>();
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>();
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>();
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>();
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>();
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>();
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>();
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>();
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>();
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
