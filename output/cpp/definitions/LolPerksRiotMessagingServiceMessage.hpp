#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksRiotMessagingServiceMessage_t {
    int64_t timestamp;
    std::string version;
    std::string resource;
    std::string payload;
    std::string service;
  };

  inline void to_json(nlohmann::json& j, const LolPerksRiotMessagingServiceMessage_t& v) {
    j["timestamp"] = v.timestamp;
    j["version"] = v.version;
    j["resource"] = v.resource;
    j["payload"] = v.payload;
    j["service"] = v.service;
  }

  inline void from_json(const nlohmann::json& j, LolPerksRiotMessagingServiceMessage_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.version = j.at("version").get<std::string>();
    v.resource = j.at("resource").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.service = j.at("service").get<std::string>();
  }
  inline std::string to_string(const LolPerksRiotMessagingServiceMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
