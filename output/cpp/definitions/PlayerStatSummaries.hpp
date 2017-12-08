#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerStatSummary.hpp"
namespace leagueapi {
  struct PlayerStatSummaries_t {
    std::vector<PlayerStatSummary_t> playerStatSummarySet;
  };

  inline void to_json(nlohmann::json& j, const PlayerStatSummaries_t& v) {
    j["playerStatSummarySet"] = v.playerStatSummarySet;
  }

  inline void from_json(const nlohmann::json& j, PlayerStatSummaries_t& v) {
    v.playerStatSummarySet = j.at("playerStatSummarySet").get<std::vector<PlayerStatSummary_t>>();
  }
  inline std::string to_string(const PlayerStatSummaries_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
