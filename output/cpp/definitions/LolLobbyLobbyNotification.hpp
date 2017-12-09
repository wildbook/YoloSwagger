#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyNotification_t {
    std::string notificationId;
    std::string notificationReason;
    uint64_t timestamp;
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyNotification_t& v) {
    j["notificationId"] = v.notificationId;
    j["notificationReason"] = v.notificationReason;
    j["timestamp"] = v.timestamp;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyNotification_t& v) {
    v.notificationId = j.at("notificationId").get<std::string>();
    v.notificationReason = j.at("notificationReason").get<std::string>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
