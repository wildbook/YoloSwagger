#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig_t {
    bool_t useServiceEndpointV2;
    std::string_t notificationsStreamURL;
    int64_t_t notificationsLongPollMinutes;
    int64_t_t beappFailureLongPollMinutes;
    int64_t_t notificationsShortPollMinutes;
    std::string_t notificationsServiceEndpoint;
    bool_t notificationsEnabled;
    std::string_t notificationsAssetMagickURL;
    std::string_t notificationsServiceEndpointV2;
    std::string_t notificationsStreamGroupSlug;
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
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool_t>();
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string_t>();
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t_t>();
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t_t>();
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t_t>();
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string_t>();
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool_t>();
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string_t>();
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string_t>();
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportStreamNotificationsConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
