#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsRosterDTO.hpp"
#include "LeaguesLcdsTeamIdDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsTeamDTO_t {
    std::string name;
    LeaguesLcdsTeamIdDTO_t teamId;
    LeaguesLcdsRosterDTO_t roster;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamDTO_t& v) {
    j["name"] = v.name;
    j["teamId"] = v.teamId;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamDTO_t& v) {
    v.name = j.at("name").get<std::string>();
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO_t>();
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO_t>();
  }
  inline std::string to_string(const LeaguesLcdsTeamDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
