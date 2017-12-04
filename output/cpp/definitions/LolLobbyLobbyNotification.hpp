#ifndef SWAGGER_TYPES_LolLobbyLobbyNotification_HPP
#define SWAGGER_TYPES_LolLobbyLobbyNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyLobbyNotification {
    // 
    std::string notificationId;
    // 
    uint64_t timestamp;
    // 
    std::string notificationReason;
    // 
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyNotification& v) {
    j["notificationId"] = v.notificationId;
    j["timestamp"] = v.timestamp;
    j["notificationReason"] = v.notificationReason;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyNotification& v) {
    v.notificationId = j.at("notificationId").get<std::string>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
    v.notificationReason = j.at("notificationReason").get<std::string>;
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyNotification_HPP
