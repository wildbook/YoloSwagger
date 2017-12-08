#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeagueTierAndRankDTO_t {
    std::string playerOrTeamName;
    LeaguesLcdsLeagueTier_t tier;
    LeaguesLcdsLeagueRank_t rank;
    std::string playerOrTeamId;
    LeaguesLcdsQueueType_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO_t& v) {
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["tier"] = v.tier;
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO_t& v) {
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
  }
  inline std::string to_string(const LeagueTierAndRankDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
