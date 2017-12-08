#pragma once
#include <json.hpp>
#include <optional>
#include "PhaseRosterDTO.hpp"
#include "RosterMemberDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
namespace leagueapi {
  struct RosterDTO_t {
    std::vector<PhaseRosterDTO_t> phases;
    int32_t losses;
    std::string name;
    std::string shortName;
    int32_t wins;
    RosterDynamicStateDTO_t dynamicState;
    int32_t logoColor;
    int64_t id;
    int64_t tournamentId;
    std::vector<RosterMemberDTO_t> members;
    int32_t tier;
    int32_t logo;
    uint64_t captainId;
    bool eliminated;
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
    v.losses = j.at("losses").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
    v.wins = j.at("wins").get<int32_t>();
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.members = j.at("members").get<std::vector<RosterMemberDTO_t>>();
    v.tier = j.at("tier").get<int32_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.eliminated = j.at("eliminated").get<bool>();
  }
  inline std::string to_string(const RosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
