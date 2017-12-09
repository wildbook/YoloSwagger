#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta_t {
    uint64_t gameId;
    std::string gamePlatformId;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta_t leagueDelta;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t champMastery;
    LolMatchHistoryMatchHistoryPlayerPlatformDelta_t platformDelta;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    j["gameId"] = v.gameId;
    j["gamePlatformId"] = v.gamePlatformId;
    j["leagueDelta"] = v.leagueDelta;
    j["champMastery"] = v.champMastery;
    j["platformDelta"] = v.platformDelta;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>();
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta_t>();
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t>();
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
