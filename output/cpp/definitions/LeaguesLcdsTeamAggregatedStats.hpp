#ifndef SWAGGER_TYPES_LeaguesLcdsTeamAggregatedStats_HPP
#define SWAGGER_TYPES_LeaguesLcdsTeamAggregatedStats_HPP
#include <json.hpp>
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsTeamAggregatedStats {
    // 
    std::string queueType;
    // 
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList;
    // 
    LeaguesLcdsTeamIdDTO id;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamAggregatedStats& v) {
    j["queueType"] = v.queueType;
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamAggregatedStats& v) {
    v.queueType = j.at("queueType").get<std::string>;
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>;
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsTeamAggregatedStats_HPP
