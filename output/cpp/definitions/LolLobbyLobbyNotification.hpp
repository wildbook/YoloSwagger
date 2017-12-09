#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyNotification_t {
    uint64_t timestamp;
    std::string notificationId;
    std::vector<uint64_t> summonerIds;
    std::string notificationReason;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyNotification_t& v) {
    j["timestamp"] = v.timestamp;
    j["notificationId"] = v.notificationId;
    j["summonerIds"] = v.summonerIds;
    j["notificationReason"] = v.notificationReason;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyNotification_t& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.notificationId = j.at("notificationId").get<std::string>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
    v.notificationReason = j.at("notificationReason").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
