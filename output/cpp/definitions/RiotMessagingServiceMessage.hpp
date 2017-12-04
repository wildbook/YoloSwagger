#ifndef SWAGGER_TYPES_RiotMessagingServiceMessage_HPP
#define SWAGGER_TYPES_RiotMessagingServiceMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RiotMessagingServiceMessage {
    // 
    int64_t timestamp;
    // 
    std::string version;
    // 
    std::string resource;
    // 
    std::string payload;
    // 
    std::string service;
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceMessage& v) {
    j["timestamp"] = v.timestamp;
    j["version"] = v.version;
    j["resource"] = v.resource;
    j["payload"] = v.payload;
    j["service"] = v.service;
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceMessage& v) {
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.version = j.at("version").get<std::string>;
    v.resource = j.at("resource").get<std::string>;
    v.payload = j.at("payload").get<std::string>;
    v.service = j.at("service").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RiotMessagingServiceMessage_HPP
