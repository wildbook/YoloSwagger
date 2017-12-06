#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersReportedPlayer_t {
    uint64_t reportedSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersReportedPlayer_t& v) {
    j["reportedSummonerId"] = v.reportedSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersReportedPlayer_t& v) {
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
  }
}
