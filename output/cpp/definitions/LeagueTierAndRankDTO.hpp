#ifndef SWAGGER_TYPES_LeagueTierAndRankDTO_HPP
#define SWAGGER_TYPES_LeagueTierAndRankDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
namespace leagueapi {
  // 
  struct LeagueTierAndRankDTO {
    // 
    LeaguesLcdsLeagueTier tier;
    // 
    std::string playerOrTeamName;
    // 
    LeaguesLcdsQueueType queueType;
    // 
    LeaguesLcdsLeagueRank rank;
    // 
    std::string playerOrTeamId;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO& v) {
    j["tier"] = v.tier;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO& v) {
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>;
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>;
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>;
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>;
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LeagueTierAndRankDTO_HPP
