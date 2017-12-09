#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentWinnerInfo.hpp"
namespace leagueapi {
  struct LolClashTournamentWinnerHistory_t {
    int64_t tournamentId;
    std::vector<LolClashTournamentWinnerInfo_t> winners;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerHistory_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["winners"] = v.winners;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerHistory_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.winners = j.at("winners").get<std::vector<LolClashTournamentWinnerInfo_t>>();
  }
  inline std::string to_string(const LolClashTournamentWinnerHistory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
