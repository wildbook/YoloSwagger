#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyRiotMessagingServiceMessage_t {
    std::string resource;
    std::string payload;
    std::string version;
    std::string service;
    int64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyRiotMessagingServiceMessage_t& v) {
    j["resource"] = v.resource;
    j["payload"] = v.payload;
    j["version"] = v.version;
    j["service"] = v.service;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyRiotMessagingServiceMessage_t& v) {
    v.resource = j.at("resource").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.version = j.at("version").get<std::string>();
    v.service = j.at("service").get<std::string>();
    v.timestamp = j.at("timestamp").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyRiotMessagingServiceMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
