#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta_t {
    LolMatchHistoryMatchHistoryPlayerPlatformDelta_t platformDelta;
    uint64_t gameId;
    std::string gamePlatformId;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t champMastery;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta_t leagueDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    j["platformDelta"] = v.platformDelta;
    j["gameId"] = v.gameId;
    j["gamePlatformId"] = v.gamePlatformId;
    j["champMastery"] = v.champMastery;
    j["leagueDelta"] = v.leagueDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>();
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t>();
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta_t>();
  }
}
