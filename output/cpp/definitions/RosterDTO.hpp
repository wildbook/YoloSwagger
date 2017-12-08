#pragma once
#include <json.hpp>
#include <optional>
#include "RosterMemberDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
#include "PhaseRosterDTO.hpp"
namespace leagueapi {
  struct RosterDTO_t {
    std::vector<PhaseRosterDTO_t> phases;
    std::string shortName;
    int32_t logoColor;
    int32_t losses;
    int32_t wins;
    uint64_t captainId;
    std::string name;
    int32_t tier;
    std::vector<RosterMemberDTO_t> members;
    int64_t tournamentId;
    int64_t id;
    int32_t logo;
    RosterDynamicStateDTO_t dynamicState;
    bool eliminated;
  };

  inline void to_json(nlohmann::json& j, const RosterDTO_t& v) {
    j["phases"] = v.phases;
    j["shortName"] = v.shortName;
    j["logoColor"] = v.logoColor;
    j["losses"] = v.losses;
    j["wins"] = v.wins;
    j["captainId"] = v.captainId;
    j["name"] = v.name;
    j["tier"] = v.tier;
    j["members"] = v.members;
    j["tournamentId"] = v.tournamentId;
    j["id"] = v.id;
    j["logo"] = v.logo;
    j["dynamicState"] = v.dynamicState;
    j["eliminated"] = v.eliminated;
  }

  inline void from_json(const nlohmann::json& j, RosterDTO_t& v) {
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO_t>>();
    v.shortName = j.at("shortName").get<std::string>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
    v.members = j.at("members").get<std::vector<RosterMemberDTO_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO_t>();
    v.eliminated = j.at("eliminated").get<bool>();
  }
  inline std::string to_string(const RosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
