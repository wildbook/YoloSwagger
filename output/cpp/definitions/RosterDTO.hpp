#pragma once
#include <json.hpp>
#include <optional>
#include "RosterMemberDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
#include "PhaseRosterDTO.hpp"
namespace leagueapi {
  struct RosterDTO_t {
    std::vector<PhaseRosterDTO_t> phases;
    bool eliminated;
    int32_t wins;
    int32_t logoColor;
    std::string shortName;
    int64_t tournamentId;
    uint64_t captainId;
    RosterDynamicStateDTO_t dynamicState;
    int32_t logo;
    int64_t id;
    std::string name;
    std::vector<RosterMemberDTO_t> members;
    int32_t losses;
    int32_t tier;
  };

  inline void to_json(nlohmann::json& j, const RosterDTO_t& v) {
    j["phases"] = v.phases;
    j["eliminated"] = v.eliminated;
    j["wins"] = v.wins;
    j["logoColor"] = v.logoColor;
    j["shortName"] = v.shortName;
    j["tournamentId"] = v.tournamentId;
    j["captainId"] = v.captainId;
    j["dynamicState"] = v.dynamicState;
    j["logo"] = v.logo;
    j["id"] = v.id;
    j["name"] = v.name;
    j["members"] = v.members;
    j["losses"] = v.losses;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, RosterDTO_t& v) {
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO_t>>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.wins = j.at("wins").get<int32_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.members = j.at("members").get<std::vector<RosterMemberDTO_t>>();
    v.losses = j.at("losses").get<int32_t>();
    v.tier = j.at("tier").get<int32_t>();
  }
  inline std::string to_string(const RosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
