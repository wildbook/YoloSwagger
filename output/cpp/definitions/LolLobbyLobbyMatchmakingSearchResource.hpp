#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp"
#include "LolLobbyLobbyMatchmakingSearchErrorResource.hpp"
#include "LolLobbyLobbyMatchmakingSearchState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingSearchResource_t {
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource_t> errors;
    LolLobbyLobbyMatchmakingLowPriorityDataResource_t lowPriorityData;
    LolLobbyLobbyMatchmakingSearchState_t searchState;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchResource_t& v) {
    j["errors"] = v.errors;
    j["lowPriorityData"] = v.lowPriorityData;
    j["searchState"] = v.searchState;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchResource_t& v) {
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource_t>>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource_t>();
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState_t>();
  }
  inline std::string to_string(const LolLobbyLobbyMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
