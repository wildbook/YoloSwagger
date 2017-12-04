#ifndef SWAGGER_TYPES_PlayerLevelUpEventAck_HPP
#define SWAGGER_TYPES_PlayerLevelUpEventAck_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerLevelUpEventAck {
    // 
    uint32_t newSummonerLevel;
    // 
    bool seenThisEvent;
  };

  void to_json(nlohmann::json& j, const PlayerLevelUpEventAck& v) {
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["seenThisEvent"] = v.seenThisEvent;
  }

  void from_json(const nlohmann::json& j, PlayerLevelUpEventAck& v) {
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>;
    v.seenThisEvent = j.at("seenThisEvent").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PlayerLevelUpEventAck_HPP
