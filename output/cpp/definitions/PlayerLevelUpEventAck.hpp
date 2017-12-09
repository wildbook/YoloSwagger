#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLevelUpEventAck_t {
    uint32_t newSummonerLevel;
    bool seenThisEvent;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEventAck_t& v) {
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["seenThisEvent"] = v.seenThisEvent;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEventAck_t& v) {
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>();
    v.seenThisEvent = j.at("seenThisEvent").get<bool>();
  }
  inline std::string to_string(const PlayerLevelUpEventAck_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
