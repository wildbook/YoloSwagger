#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsRosterDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsTeamDTO_t {
    LeaguesLcdsTeamIdDTO_t teamId;
    std::string_t name;
    LeaguesLcdsRosterDTO_t roster;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamDTO_t& v) {
    j["teamId"] = v.teamId;
    j["name"] = v.name;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamDTO_t& v) {
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO_t>();
    v.name = j.at("name").get<std::string_t>();
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO_t>();
  }
  inline std::string to_string(const LeaguesLcdsTeamDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
