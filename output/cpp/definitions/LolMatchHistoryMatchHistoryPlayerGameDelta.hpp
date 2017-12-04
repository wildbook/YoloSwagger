#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerGameDelta_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerGameDelta_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPlayerGameDelta {
    // 
    LolMatchHistoryMatchHistoryPlayerLeagueDelta leagueDelta;
    // 
    LolMatchHistoryMatchHistoryPlayerPlatformDelta platformDelta;
    // 
    std::string gamePlatformId;
    // 
    uint64_t gameId;
    // 
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta champMastery;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    j["leagueDelta"] = v.leagueDelta;
    j["platformDelta"] = v.platformDelta;
    j["gamePlatformId"] = v.gamePlatformId;
    j["gameId"] = v.gameId;
    j["champMastery"] = v.champMastery;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta>;
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta>;
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerGameDelta_HPP
