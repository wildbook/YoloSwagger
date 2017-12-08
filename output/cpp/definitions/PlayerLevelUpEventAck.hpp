#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEventAck_t {
    bool_t seenThisEvent;
    uint32_t_t newSummonerLevel;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEventAck_t& v) {
    j["seenThisEvent"] = v.seenThisEvent;
    j["newSummonerLevel"] = v.newSummonerLevel;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEventAck_t& v) {
    v.seenThisEvent = j.at("seenThisEvent").get<bool_t>();
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t_t>();
  }
  inline std::string to_string(const PlayerLevelUpEventAck_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
