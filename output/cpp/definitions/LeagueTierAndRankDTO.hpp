#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
namespace leagueapi {
  struct LeagueTierAndRankDTO_t {
    LeaguesLcdsLeagueTier_t tier;
    std::string_t playerOrTeamName;
    LeaguesLcdsQueueType_t queueType;
    LeaguesLcdsLeagueRank_t rank;
    std::string_t playerOrTeamId;
  };

  inline void to_json(nlohmann::json& j, const LeagueTierAndRankDTO_t& v) {
    j["tier"] = v.tier;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
  }

  inline void from_json(const nlohmann::json& j, LeagueTierAndRankDTO_t& v) {
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string_t>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string_t>();
  }
  inline std::string to_string(const LeagueTierAndRankDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
