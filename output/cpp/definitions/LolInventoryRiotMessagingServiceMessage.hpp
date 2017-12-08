#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryRiotMessagingServiceMessage_t {
    int64_t timestamp;
    std::string version;
    std::string resource;
    std::string payload;
    std::string service;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryRiotMessagingServiceMessage_t& v) {
    j["timestamp"] = v.timestamp;
    j["version"] = v.version;
    j["resource"] = v.resource;
    j["payload"] = v.payload;
    j["service"] = v.service;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryRiotMessagingServiceMessage_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.version = j.at("version").get<std::string>();
    v.resource = j.at("resource").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.service = j.at("service").get<std::string>();
  }
  inline std::string to_string(const LolInventoryRiotMessagingServiceMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
