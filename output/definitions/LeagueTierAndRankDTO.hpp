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
    std::string playerOrTeamId;
    // 
    std::string playerOrTeamName;
    // 
    LeaguesLcdsQueueType queueType;
    // 
    LeaguesLcdsLeagueRank rank;
    // 
    LeaguesLcdsLeagueTier tier;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO& v) {
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO& v) {
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>;
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>;
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>;
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>;
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>;
  }

}
#endif // SWAGGER_TYPES_LeagueTierAndRankDTO_HPP
