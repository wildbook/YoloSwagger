#ifndef SWAGGER_TYPES_LolClashTournamentWinnerHistory_HPP
#define SWAGGER_TYPES_LolClashTournamentWinnerHistory_HPP
#include <json.hpp>
#include "LolClashTournamentWinnerInfo.hpp"
namespace leagueapi {
  // 
  struct LolClashTournamentWinnerHistory {
    // 
    int64_t tournamentId;
    // 
    std::vector<LolClashTournamentWinnerInfo> winners;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerHistory& v) {
    j["tournamentId"] = v.tournamentId;
    j["winners"] = v.winners;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerHistory& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.winners = j.at("winners").get<std::vector<LolClashTournamentWinnerInfo>>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentWinnerHistory_HPP
