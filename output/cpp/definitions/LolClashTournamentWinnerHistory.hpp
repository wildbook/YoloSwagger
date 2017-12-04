#ifndef SWAGGER_TYPES_LolClashTournamentWinnerHistory_HPP
#define SWAGGER_TYPES_LolClashTournamentWinnerHistory_HPP
#include <json.hpp>
#include "LolClashTournamentWinnerInfo.hpp"
namespace leagueapi {
  // 
  struct LolClashTournamentWinnerHistory {
    // 
    std::vector<LolClashTournamentWinnerInfo> winners;
    // 
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerHistory& v) {
    j["winners"] = v.winners;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerHistory& v) {
    v.winners = j.at("winners").get<std::vector<LolClashTournamentWinnerInfo>>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentWinnerHistory_HPP
