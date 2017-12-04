#ifndef SWAGGER_TYPES_LolClashTournamentGameEnd_HPP
#define SWAGGER_TYPES_LolClashTournamentGameEnd_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashTournamentGameEnd {
    // 
    int64_t bracketId;
    // 
    int64_t tournamentId;
  };

  void to_json(nlohmann::json& j, const LolClashTournamentGameEnd& v) {
    j["bracketId"] = v.bracketId;
    j["tournamentId"] = v.tournamentId;
  }

  void from_json(const nlohmann::json& j, LolClashTournamentGameEnd& v) {
    v.bracketId = j.at("bracketId").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentGameEnd_HPP
