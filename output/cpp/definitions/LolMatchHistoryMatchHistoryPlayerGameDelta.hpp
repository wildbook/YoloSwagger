#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta_t {
    LolMatchHistoryMatchHistoryPlayerPlatformDelta_t platformDelta;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t champMastery;
    uint64_t gameId;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta_t leagueDelta;
    std::string gamePlatformId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    j["platformDelta"] = v.platformDelta;
    j["champMastery"] = v.champMastery;
    j["gameId"] = v.gameId;
    j["leagueDelta"] = v.leagueDelta;
    j["gamePlatformId"] = v.gamePlatformId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta_t>();
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta_t>();
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
