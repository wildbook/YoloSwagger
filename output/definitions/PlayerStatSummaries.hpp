#ifndef SWAGGER_TYPES_PlayerStatSummaries_HPP
#define SWAGGER_TYPES_PlayerStatSummaries_HPP
#include <json.hpp>
#include "PlayerStatSummary.hpp"
namespace leagueapi {
  // 
  struct PlayerStatSummaries {
    // 
    std::vector<PlayerStatSummary> playerStatSummarySet;
  };

  void to_json(nlohmann::json& j, const PlayerStatSummaries& v) {
    j["playerStatSummarySet"] = v.playerStatSummarySet;
  }

  void from_json(const nlohmann::json& j, PlayerStatSummaries& v) {
    v.playerStatSummarySet = j.at("playerStatSummarySet").get<std::vector<PlayerStatSummary>>;
  }

}
#endif // SWAGGER_TYPES_PlayerStatSummaries_HPP
