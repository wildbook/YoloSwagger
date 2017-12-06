#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeagueTierAndRankDTO_t {
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    LeaguesLcdsQueueType_t queueType;
    LeaguesLcdsLeagueRank_t rank;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO_t& v) {
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO_t& v) {
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
}
