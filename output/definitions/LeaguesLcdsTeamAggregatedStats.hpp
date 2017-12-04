#ifndef SWAGGER_TYPES_LeaguesLcdsTeamAggregatedStats_HPP
#define SWAGGER_TYPES_LeaguesLcdsTeamAggregatedStats_HPP
#include <json.hpp>
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
namespace test {
  // 
  struct LeaguesLcdsTeamAggregatedStats {
'    // 
    LeaguesLcdsTeamIdDTO id;
    // 
    std::vector<LeaguesLcdsPlayerAggregatedStats> playerAggregatedStatsList;
    // 
    std::string queueType;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsTeamAggregatedStats& v) {
    j["id"] = v.id;
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList;
    j["queueType"] = v.queueType;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsTeamAggregatedStats& v) {
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO>;
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats>>;
    v.queueType = j.at("queueType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsTeamAggregatedStats_HPP
