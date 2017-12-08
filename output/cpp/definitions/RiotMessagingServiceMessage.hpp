#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RiotMessagingServiceMessage_t {
    int64_t_t timestamp;
    std::string_t version;
    std::string_t resource;
    std::string_t payload;
    std::string_t service;
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceMessage_t& v) {
    j["timestamp"] = v.timestamp;
    j["version"] = v.version;
    j["resource"] = v.resource;
    j["payload"] = v.payload;
    j["service"] = v.service;
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceMessage_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t_t>();
    v.version = j.at("version").get<std::string_t>();
    v.resource = j.at("resource").get<std::string_t>();
    v.payload = j.at("payload").get<std::string_t>();
    v.service = j.at("service").get<std::string_t>();
  }
  inline std::string to_string(const RiotMessagingServiceMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
