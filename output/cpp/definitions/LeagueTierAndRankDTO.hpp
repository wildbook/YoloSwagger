#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeagueTierAndRankDTO_t {
    LeaguesLcdsLeagueRank_t rank;
    LeaguesLcdsLeagueTier_t tier;
    std::string playerOrTeamName;
    LeaguesLcdsQueueType_t queueType;
    std::string playerOrTeamId;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO_t& v) {
    j["rank"] = v.rank;
    j["tier"] = v.tier;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["queueType"] = v.queueType;
    j["playerOrTeamId"] = v.playerOrTeamId;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO_t& v) {
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
  }
}
