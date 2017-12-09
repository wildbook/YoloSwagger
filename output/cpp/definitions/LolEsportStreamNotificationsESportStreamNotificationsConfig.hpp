#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig_t {
    bool useServiceEndpointV2;
    std::string notificationsAssetMagickURL;
    int64_t beappFailureLongPollMinutes;
    int64_t notificationsShortPollMinutes;
    std::string notificationsServiceEndpointV2;
    std::string notificationsStreamURL;
    std::string notificationsServiceEndpoint;
    int64_t notificationsLongPollMinutes;
    std::string notificationsStreamGroupSlug;
    bool notificationsEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    j["useServiceEndpointV2"] = v.useServiceEndpointV2;
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL;
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes;
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes;
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2;
    j["notificationsStreamURL"] = v.notificationsStreamURL;
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint;
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes;
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug;
    j["notificationsEnabled"] = v.notificationsEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>();
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>();
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>();
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>();
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>();
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>();
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>();
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>();
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>();
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
