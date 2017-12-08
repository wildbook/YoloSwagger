#pragma once
#include <json.hpp>
#include <optional>
#include "RosterMemberDTO.hpp"
namespace leagueapi {
  struct PlayerRosterHistoryDTO_t {
    std::vector<RosterMemberDTO_t> rosters;
  };

  inline void to_json(nlohmann::json& j, const PlayerRosterHistoryDTO_t& v) {
    j["rosters"] = v.rosters;
  }

  inline void from_json(const nlohmann::json& j, PlayerRosterHistoryDTO_t& v) {
    v.rosters = j.at("rosters").get<std::vector<RosterMemberDTO_t>>();
  }
  inline std::string to_string(const PlayerRosterHistoryDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
