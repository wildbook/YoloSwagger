#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyMatchmakingSearchErrorResource.hpp"
#include "LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp"
#include "LolLobbyLobbyMatchmakingSearchState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingSearchResource_t {
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource_t> errors;
    LolLobbyLobbyMatchmakingSearchState_t searchState;
    LolLobbyLobbyMatchmakingLowPriorityDataResource_t lowPriorityData;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchResource_t& v) {
    j["errors"] = v.errors;
    j["searchState"] = v.searchState;
    j["lowPriorityData"] = v.lowPriorityData;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchResource_t& v) {
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource_t>>();
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState_t>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource_t>();
  }
}
