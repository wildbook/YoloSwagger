#ifndef SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchResource_HPP
#define SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchResource_HPP
#include <json.hpp>
#include "LolLobbyLobbyMatchmakingSearchErrorResource.hpp"
#include "LolLobbyLobbyMatchmakingSearchState.hpp"
#include "LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyMatchmakingSearchResource {
    // 
    LolLobbyLobbyMatchmakingSearchState searchState;
    // 
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource> errors;
    // 
    LolLobbyLobbyMatchmakingLowPriorityDataResource lowPriorityData;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchResource& v) {
    j["searchState"] = v.searchState;
    j["errors"] = v.errors;
    j["lowPriorityData"] = v.lowPriorityData;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchResource& v) {
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState>;
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource>>;
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchResource_HPP
