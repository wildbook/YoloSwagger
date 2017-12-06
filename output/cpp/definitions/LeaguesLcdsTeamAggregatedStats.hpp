#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
#include "LeaguesLcdsTeamIdDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsTeamAggregatedStats_t {
    LeaguesLcdsTeamIdDTO_t id;
    std::vector<LeaguesLcdsPlayerAggregatedStats_t> playerAggregatedStatsList;
    std::string queueType;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamAggregatedStats_t& v) {
    j["id"] = v.id;
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamAggregatedStats_t& v) {
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO_t>();
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats_t>>();
    v.queueType = j.at("queueType").get<std::string>();
  }
}
