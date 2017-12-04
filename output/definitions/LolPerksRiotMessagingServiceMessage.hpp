#ifndef SWAGGER_TYPES_LolPerksRiotMessagingServiceMessage_HPP
#define SWAGGER_TYPES_LolPerksRiotMessagingServiceMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksRiotMessagingServiceMessage {
    // 
    std::string payload;
    // 
    std::string resource;
    // 
    std::string service;
    // 
    int64_t timestamp;
    // 
    std::string version;
  };

  inline void to_json(nlohmann::json& j, const LolPerksRiotMessagingServiceMessage& v) {
    j["payload"] = v.payload;
    j["resource"] = v.resource;
    j["service"] = v.service;
    j["timestamp"] = v.timestamp;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, LolPerksRiotMessagingServiceMessage& v) {
    v.payload = j.at("payload").get<std::string>;
    v.resource = j.at("resource").get<std::string>;
    v.service = j.at("service").get<std::string>;
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.version = j.at("version").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksRiotMessagingServiceMessage_HPP
