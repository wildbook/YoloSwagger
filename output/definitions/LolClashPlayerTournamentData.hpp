#ifndef SWAGGER_TYPES_LolClashPlayerTournamentData_HPP
#define SWAGGER_TYPES_LolClashPlayerTournamentData_HPP
#include <json.hpp>
#include "LolClashPlayerState.hpp"
namespace leagueapi {
  // 
  struct LolClashPlayerTournamentData {
    // 
    int64_t bracketId;
    // 
    std::string rosterId;
    // 
    LolClashPlayerState state;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerTournamentData& v) {
    j["bracketId"] = v.bracketId;
    j["rosterId"] = v.rosterId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerTournamentData& v) {
    v.bracketId = j.at("bracketId").get<int64_t>;
    v.rosterId = j.at("rosterId").get<std::string>;
    v.state = j.at("state").get<LolClashPlayerState>;
  }

}
#endif // SWAGGER_TYPES_LolClashPlayerTournamentData_HPP
