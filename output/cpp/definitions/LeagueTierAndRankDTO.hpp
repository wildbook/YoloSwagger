#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace leagueapi {
  struct LeagueTierAndRankDTO_t {
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    LeaguesLcdsLeagueRank_t rank;
    LeaguesLcdsQueueType_t queueType;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO_t& v) {
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["rank"] = v.rank;
    j["queueType"] = v.queueType;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO_t& v) {
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
  inline std::string to_string(const LeagueTierAndRankDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
