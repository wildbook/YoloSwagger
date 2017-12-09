#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsRosterDTO.hpp"
#include "LeaguesLcdsTeamIdDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsTeamDTO_t {
    LeaguesLcdsRosterDTO_t roster;
    std::string name;
    LeaguesLcdsTeamIdDTO_t teamId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamDTO_t& v) {
    j["roster"] = v.roster;
    j["name"] = v.name;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamDTO_t& v) {
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO_t>();
    v.name = j.at("name").get<std::string>();
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO_t>();
  }
  inline std::string to_string(const LeaguesLcdsTeamDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
