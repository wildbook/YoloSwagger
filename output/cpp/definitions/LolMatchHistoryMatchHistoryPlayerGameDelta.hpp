#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta_t {
    LolMatchHistoryMatchHistoryPlayerLeagueDelta_t leagueDelta;
    LolMatchHistoryMatchHistoryPlayerPlatformDelta_t platformDelta;
    std::string gamePlatformId;
    uint64_t gameId;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t champMastery;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    j["leagueDelta"] = v.leagueDelta;
    j["platformDelta"] = v.platformDelta;
    j["gamePlatformId"] = v.gamePlatformId;
    j["gameId"] = v.gameId;
    j["champMastery"] = v.champMastery;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta_t>();
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta_t>();
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
