#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersDynamicClientConfig_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersDynamicClientConfig_HPP
#include <json.hpp>
#include "LolSuggestedPlayersSuggestedPlayersConfig.hpp"
namespace test {
  // 
  struct LolSuggestedPlayersSuggestedPlayersDynamicClientConfig {
'    // 
    LolSuggestedPlayersSuggestedPlayersConfig SuggestedPlayers;
  };

  void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersDynamicClientConfig& v) {
    j["SuggestedPlayers"] = v.SuggestedPlayers;
  }

  void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersDynamicClientConfig& v) {
    v.SuggestedPlayers = j.at("SuggestedPlayers").get<LolSuggestedPlayersSuggestedPlayersConfig>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersDynamicClientConfig_HPP
