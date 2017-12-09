#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueTeamMember.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueTeam_t {
    std::string name;
    std::vector<LolLeaguesLeagueTeamMember_t> members;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTeam_t& v) {
    j["name"] = v.name;
    j["members"] = v.members;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTeam_t& v) {
    v.name = j.at("name").get<std::string>();
    v.members = j.at("members").get<std::vector<LolLeaguesLeagueTeamMember_t>>();
    v.id = j.at("id").get<std::string>();
  }
  inline std::string to_string(const LolLeaguesLeagueTeam_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
