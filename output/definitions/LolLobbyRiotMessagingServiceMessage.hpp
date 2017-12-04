#ifndef SWAGGER_TYPES_LolLobbyRiotMessagingServiceMessage_HPP
#define SWAGGER_TYPES_LolLobbyRiotMessagingServiceMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyRiotMessagingServiceMessage {
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

  void to_json(nlohmann::json& j, const LolLobbyRiotMessagingServiceMessage& v) {
    j["payload"] = v.payload;
    j["resource"] = v.resource;
    j["service"] = v.service;
    j["timestamp"] = v.timestamp;
    j["version"] = v.version;
  }

  void from_json(const nlohmann::json& j, LolLobbyRiotMessagingServiceMessage& v) {
    v.payload = j.at("payload").get<std::string>;
    v.resource = j.at("resource").get<std::string>;
    v.service = j.at("service").get<std::string>;
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.version = j.at("version").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyRiotMessagingServiceMessage_HPP
