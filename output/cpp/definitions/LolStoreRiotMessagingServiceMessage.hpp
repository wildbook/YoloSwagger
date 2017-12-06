#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreRiotMessagingServiceMessage_t {
    std::string service;
    int64_t timestamp;
    std::string resource;
    std::string payload;
    std::string version;
  };

  inline void to_json(nlohmann::json& j, const LolStoreRiotMessagingServiceMessage_t& v) {
    j["service"] = v.service;
    j["timestamp"] = v.timestamp;
    j["resource"] = v.resource;
    j["payload"] = v.payload;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, LolStoreRiotMessagingServiceMessage_t& v) {
    v.service = j.at("service").get<std::string>();
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.resource = j.at("resource").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.version = j.at("version").get<std::string>();
  }
}
