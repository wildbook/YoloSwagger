#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentWinnerInfo.hpp"
namespace leagueapi {
  struct LolClashTournamentWinnerHistory_t {
    std::vector<LolClashTournamentWinnerInfo_t> winners;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentWinnerHistory_t& v) {
    j["winners"] = v.winners;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentWinnerHistory_t& v) {
    v.winners = j.at("winners").get<std::vector<LolClashTournamentWinnerInfo_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
  inline std::string to_string(const LolClashTournamentWinnerHistory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
