#ifndef SWAGGER_TYPES_PlayerLevelUpEventAck_HPP
#define SWAGGER_TYPES_PlayerLevelUpEventAck_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerLevelUpEventAck {
    // 
    bool seenThisEvent;
    // 
    uint32_t newSummonerLevel;
  };

  inline void to_json(nlohmann::json& j, const PlayerLevelUpEventAck& v) {
    j["seenThisEvent"] = v.seenThisEvent;
    j["newSummonerLevel"] = v.newSummonerLevel;
  }

  inline void from_json(const nlohmann::json& j, PlayerLevelUpEventAck& v) {
    v.seenThisEvent = j.at("seenThisEvent").get<bool>;
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerLevelUpEventAck_HPP
