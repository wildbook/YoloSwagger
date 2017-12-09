#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
#include "LeaguesLcdsTeamIdDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsTeamAggregatedStats_t {
    std::string queueType;
    LeaguesLcdsTeamIdDTO_t id;
    std::vector<LeaguesLcdsPlayerAggregatedStats_t> playerAggregatedStatsList;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamAggregatedStats_t& v) {
    j["queueType"] = v.queueType;
    j["id"] = v.id;
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamAggregatedStats_t& v) {
    v.queueType = j.at("queueType").get<std::string>();
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO_t>();
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats_t>>();
  }
  inline std::string to_string(const LeaguesLcdsTeamAggregatedStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
