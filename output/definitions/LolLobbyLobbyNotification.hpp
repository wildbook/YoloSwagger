#ifndef SWAGGER_TYPES_LolLobbyLobbyNotification_HPP
#define SWAGGER_TYPES_LolLobbyLobbyNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyLobbyNotification {
    // 
    std::string notificationId;
    // 
    std::string notificationReason;
    // 
    std::vector<uint64_t> summonerIds;
    // 
    uint64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyNotification& v) {
    j["notificationId"] = v.notificationId;
    j["notificationReason"] = v.notificationReason;
    j["summonerIds"] = v.summonerIds;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyNotification& v) {
    v.notificationId = j.at("notificationId").get<std::string>;
    v.notificationReason = j.at("notificationReason").get<std::string>;
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyNotification_HPP
