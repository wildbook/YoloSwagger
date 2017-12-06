#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsRosterDTO.hpp"
#include "LeaguesLcdsTeamIdDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsTeamDTO_t {
    std::string name;
    LeaguesLcdsRosterDTO_t roster;
    LeaguesLcdsTeamIdDTO_t teamId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamDTO_t& v) {
    j["name"] = v.name;
    j["roster"] = v.roster;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamDTO_t& v) {
    v.name = j.at("name").get<std::string>();
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO_t>();
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO_t>();
  }
}
