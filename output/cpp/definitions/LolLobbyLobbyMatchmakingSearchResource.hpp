#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyMatchmakingSearchState.hpp"
#include "LolLobbyLobbyMatchmakingSearchErrorResource.hpp"
#include "LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingSearchResource_t {
    LolLobbyLobbyMatchmakingSearchState_t searchState;
    LolLobbyLobbyMatchmakingLowPriorityDataResource_t lowPriorityData;
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource_t> errors;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchResource_t& v) {
    j["searchState"] = v.searchState;
    j["lowPriorityData"] = v.lowPriorityData;
    j["errors"] = v.errors;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchResource_t& v) {
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState_t>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource_t>();
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
