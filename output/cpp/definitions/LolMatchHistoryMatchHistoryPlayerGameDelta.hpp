#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPlayerLeagueDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerPlatformDelta.hpp"
#include "LolMatchHistoryMatchHistoryPlayerChampMasteryDelta.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerGameDelta_t {
    std::string gamePlatformId;
    LolMatchHistoryMatchHistoryPlayerLeagueDelta_t leagueDelta;
    LolMatchHistoryMatchHistoryPlayerPlatformDelta_t platformDelta;
    LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t champMastery;
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    j["gamePlatformId"] = v.gamePlatformId;
    j["leagueDelta"] = v.leagueDelta;
    j["platformDelta"] = v.platformDelta;
    j["champMastery"] = v.champMastery;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    v.gamePlatformId = j.at("gamePlatformId").get<std::string>();
    v.leagueDelta = j.at("leagueDelta").get<LolMatchHistoryMatchHistoryPlayerLeagueDelta_t>();
    v.platformDelta = j.at("platformDelta").get<LolMatchHistoryMatchHistoryPlayerPlatformDelta_t>();
    v.champMastery = j.at("champMastery").get<LolMatchHistoryMatchHistoryPlayerChampMasteryDelta_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerGameDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
