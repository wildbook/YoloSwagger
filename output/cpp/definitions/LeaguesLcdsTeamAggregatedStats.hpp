#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
namespace leagueapi {
  struct LeaguesLcdsTeamAggregatedStats_t {
    std::vector<LeaguesLcdsPlayerAggregatedStats_t> playerAggregatedStatsList;
    std::string queueType;
    LeaguesLcdsTeamIdDTO_t id;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamAggregatedStats_t& v) {
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList;
    j["queueType"] = v.queueType;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamAggregatedStats_t& v) {
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats_t>>();
    v.queueType = j.at("queueType").get<std::string>();
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO_t>();
  }
}
