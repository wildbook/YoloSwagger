#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerGameDelta_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerGameDelta_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryPlayerGameDelta {
    // 
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta champMastery;
    // 
    uint64_t gameId;
    // 
    std::string gamePlatformId;
    // 
    LolMatchHistoryMatchHistoryPlayerLeagueDelta leagueDelta;
    // 
    LolMatchHistoryMatchHistoryPlayerPlatformDelta platformDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    j["champMastery"] = v.champMastery;
    j["gameId"] = v.gameId;
    j["gamePlatformId"] = v.gamePlatformId;
    j["leagueDelta"] = v.leagueDelta;
    j["platformDelta"] = v.platformDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerGameDelta& v) {
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>;
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta>;
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryPlayerGameDelta_HPP
