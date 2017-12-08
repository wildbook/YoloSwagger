#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyNotification_t {
    std::vector<uint64_t> summonerIds;
    std::string notificationReason;
    uint64_t timestamp;
    std::string notificationId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyNotification_t& v) {
    j["summonerIds"] = v.summonerIds;
    j["notificationReason"] = v.notificationReason;
    j["timestamp"] = v.timestamp;
    j["notificationId"] = v.notificationId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyNotification_t& v) {
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
    v.notificationReason = j.at("notificationReason").get<std::string>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.notificationId = j.at("notificationId").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
