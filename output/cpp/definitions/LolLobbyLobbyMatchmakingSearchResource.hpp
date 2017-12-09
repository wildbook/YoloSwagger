#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyMatchmakingSearchState.hpp"
#include "LolLobbyLobbyMatchmakingSearchErrorResource.hpp"
#include "LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMatchmakingSearchResource_t {
    LolLobbyLobbyMatchmakingSearchState_t searchState;
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource_t> errors;
    LolLobbyLobbyMatchmakingLowPriorityDataResource_t lowPriorityData;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchResource_t& v) {
    j["searchState"] = v.searchState;
    j["errors"] = v.errors;
    j["lowPriorityData"] = v.lowPriorityData;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchResource_t& v) {
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState_t>();
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource_t>>();
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource_t>();
  }
  inline std::string to_string(const LolLobbyLobbyMatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
