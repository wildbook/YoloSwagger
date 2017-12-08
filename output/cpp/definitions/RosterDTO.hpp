#pragma once
#include <json.hpp>
#include <optional>
#include "PhaseRosterDTO.hpp"
#include "RosterMemberDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
namespace leagueapi {
  struct RosterDTO_t {
    std::vector<PhaseRosterDTO_t> phases;
    int32_t_t losses;
    std::string_t name;
    std::string_t shortName;
    int32_t_t wins;
    RosterDynamicStateDTO_t dynamicState;
    int32_t_t logoColor;
    int64_t_t id;
    int64_t_t tournamentId;
    std::vector<RosterMemberDTO_t> members;
    int32_t_t tier;
    int32_t_t logo;
    uint64_t_t captainId;
    bool_t eliminated;
  };

  inline void to_json(nlohmann::json& j, const RosterDTO_t& v) {
    j["phases"] = v.phases;
    j["losses"] = v.losses;
    j["name"] = v.name;
    j["shortName"] = v.shortName;
    j["wins"] = v.wins;
    j["dynamicState"] = v.dynamicState;
    j["logoColor"] = v.logoColor;
    j["id"] = v.id;
    j["tournamentId"] = v.tournamentId;
    j["members"] = v.members;
    j["tier"] = v.tier;
    j["logo"] = v.logo;
    j["captainId"] = v.captainId;
    j["eliminated"] = v.eliminated;
  }

  inline void from_json(const nlohmann::json& j, RosterDTO_t& v) {
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO_t>>();
    v.losses = j.at("losses").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
    v.shortName = j.at("shortName").get<std::string_t>();
    v.wins = j.at("wins").get<int32_t_t>();
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO_t>();
    v.logoColor = j.at("logoColor").get<int32_t_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
    v.members = j.at("members").get<std::vector<RosterMemberDTO_t>>();
    v.tier = j.at("tier").get<int32_t_t>();
    v.logo = j.at("logo").get<int32_t_t>();
    v.captainId = j.at("captainId").get<uint64_t_t>();
    v.eliminated = j.at("eliminated").get<bool_t>();
  }
  inline std::string to_string(const RosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
