#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksRiotMessagingServiceMessage_t {
    std::string payload;
    int64_t timestamp;
    std::string resource;
    std::string service;
    std::string version;
  };

  inline void to_json(nlohmann::json& j, const LolPerksRiotMessagingServiceMessage_t& v) {
    j["payload"] = v.payload;
    j["timestamp"] = v.timestamp;
    j["resource"] = v.resource;
    j["service"] = v.service;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, LolPerksRiotMessagingServiceMessage_t& v) {
    v.payload = j.at("payload").get<std::string>();
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.resource = j.at("resource").get<std::string>();
    v.service = j.at("service").get<std::string>();
    v.version = j.at("version").get<std::string>();
  }
  inline std::string to_string(const LolPerksRiotMessagingServiceMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
