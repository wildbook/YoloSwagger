#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsTeamMemberInfoDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsRosterDTO_t {
    std::vector<LeaguesLcdsTeamMemberInfoDTO_t> memberList;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsRosterDTO_t& v) {
    j["memberList"] = v.memberList;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsRosterDTO_t& v) {
    v.memberList = j.at("memberList").get<std::vector<LeaguesLcdsTeamMemberInfoDTO_t>>();
  }
  inline std::string to_string(const LeaguesLcdsRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
