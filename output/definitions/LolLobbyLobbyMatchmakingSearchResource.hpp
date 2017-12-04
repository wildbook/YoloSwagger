#ifndef SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchResource_HPP
#define SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchResource_HPP
#include <json.hpp>
#include "LolLobbyLobbyMatchmakingSearchState.hpp"
#include "LolLobbyLobbyMatchmakingSearchErrorResource.hpp"
#include "LolLobbyLobbyMatchmakingLowPriorityDataResource.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyMatchmakingSearchResource {
    // 
    std::vector<LolLobbyLobbyMatchmakingSearchErrorResource> errors;
    // 
    LolLobbyLobbyMatchmakingLowPriorityDataResource lowPriorityData;
    // 
    LolLobbyLobbyMatchmakingSearchState searchState;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchResource& v) {
    j["errors"] = v.errors;
    j["lowPriorityData"] = v.lowPriorityData;
    j["searchState"] = v.searchState;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchResource& v) {
    v.errors = j.at("errors").get<std::vector<LolLobbyLobbyMatchmakingSearchErrorResource>>;
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyLobbyMatchmakingLowPriorityDataResource>;
    v.searchState = j.at("searchState").get<LolLobbyLobbyMatchmakingSearchState>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchResource_HPP
