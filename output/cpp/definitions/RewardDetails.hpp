#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RewardDetails_t {
    int64_t rosterId;
    std::vector<int64_t> teamMemberIds;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const RewardDetails_t& v) {
    j["rosterId"] = v.rosterId;
    j["teamMemberIds"] = v.teamMemberIds;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, RewardDetails_t& v) {
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.teamMemberIds = j.at("teamMemberIds").get<std::vector<int64_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
  inline std::string to_string(const RewardDetails_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
