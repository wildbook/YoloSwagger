#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace leagueapi {
  struct LeagueTierAndRankDTO_t {
    LeaguesLcdsLeagueRank_t rank;
    std::string playerOrTeamName;
    std::string playerOrTeamId;
    LeaguesLcdsQueueType_t queueType;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO_t& v) {
    j["rank"] = v.rank;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["queueType"] = v.queueType;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO_t& v) {
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
  inline std::string to_string(const LeagueTierAndRankDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
