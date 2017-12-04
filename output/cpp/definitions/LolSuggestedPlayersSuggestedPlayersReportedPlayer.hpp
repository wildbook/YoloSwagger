#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersReportedPlayer_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersReportedPlayer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSuggestedPlayersSuggestedPlayersReportedPlayer {
    // 
    uint64_t reportedSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersReportedPlayer& v) {
    j["reportedSummonerId"] = v.reportedSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersReportedPlayer& v) {
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersReportedPlayer_HPP
