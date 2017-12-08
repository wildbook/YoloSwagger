#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyNotification_t {
    std::string notificationId;
    uint64_t timestamp;
    std::string notificationReason;
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyNotification_t& v) {
    j["notificationId"] = v.notificationId;
    j["timestamp"] = v.timestamp;
    j["notificationReason"] = v.notificationReason;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyNotification_t& v) {
    v.notificationId = j.at("notificationId").get<std::string>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.notificationReason = j.at("notificationReason").get<std::string>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
