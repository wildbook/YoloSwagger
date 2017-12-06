#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RewardDetails_t {
    std::vector<int64_t> teamMemberIds;
    int64_t tournamentId;
    int64_t rosterId;
  };

  inline void to_json(nlohmann::json& j, const RewardDetails_t& v) {
    j["teamMemberIds"] = v.teamMemberIds;
    j["tournamentId"] = v.tournamentId;
    j["rosterId"] = v.rosterId;
  }

  inline void from_json(const nlohmann::json& j, RewardDetails_t& v) {
    v.teamMemberIds = j.at("teamMemberIds").get<std::vector<int64_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
  }
}
