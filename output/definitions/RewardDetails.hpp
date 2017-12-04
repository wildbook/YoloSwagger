#ifndef SWAGGER_TYPES_RewardDetails_HPP
#define SWAGGER_TYPES_RewardDetails_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RewardDetails {
    // 
    int64_t rosterId;
    // 
    std::vector<int64_t> teamMemberIds;
    // 
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const RewardDetails& v) {
    j["rosterId"] = v.rosterId;
    j["teamMemberIds"] = v.teamMemberIds;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, RewardDetails& v) {
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.teamMemberIds = j.at("teamMemberIds").get<std::vector<int64_t>>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_RewardDetails_HPP
