#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
namespace leagueapi {
  struct LeagueTierAndRankDTO_t {
    LeaguesLcdsQueueType_t queueType;
    LeaguesLcdsLeagueTier_t tier;
    std::string playerOrTeamName;
    LeaguesLcdsLeagueRank_t rank;
    std::string playerOrTeamId;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO_t& v) {
    j["queueType"] = v.queueType;
    j["tier"] = v.tier;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO_t& v) {
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
  }
  inline std::string to_string(const LeagueTierAndRankDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
