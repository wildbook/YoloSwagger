#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsPlayerAggregatedStats.hpp"
namespace leagueapi {
  struct LeaguesLcdsTeamAggregatedStats_t {
    std::string_t queueType;
    std::vector<LeaguesLcdsPlayerAggregatedStats_t> playerAggregatedStatsList;
    LeaguesLcdsTeamIdDTO_t id;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamAggregatedStats_t& v) {
    j["queueType"] = v.queueType;
    j["playerAggregatedStatsList"] = v.playerAggregatedStatsList;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamAggregatedStats_t& v) {
    v.queueType = j.at("queueType").get<std::string_t>();
    v.playerAggregatedStatsList = j.at("playerAggregatedStatsList").get<std::vector<LeaguesLcdsPlayerAggregatedStats_t>>();
    v.id = j.at("id").get<LeaguesLcdsTeamIdDTO_t>();
  }
  inline std::string to_string(const LeaguesLcdsTeamAggregatedStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
