#pragma once
#include <json.hpp>
#include <optional>
#include "PhaseRosterDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
#include "RosterMemberDTO.hpp"
namespace leagueapi {
  struct RosterDTO_t {
    int32_t logoColor;
    int64_t tournamentId;
    int64_t id;
    std::vector<PhaseRosterDTO_t> phases;
    int32_t losses;
    bool eliminated;
    std::string shortName;
    RosterDynamicStateDTO_t dynamicState;
    int32_t wins;
    int32_t logo;
    std::string name;
    std::vector<RosterMemberDTO_t> members;
    int32_t tier;
    uint64_t captainId;
  };

  inline void to_json(nlohmann::json& j, const RosterDTO_t& v) {
    j["logoColor"] = v.logoColor;
    j["tournamentId"] = v.tournamentId;
    j["id"] = v.id;
    j["phases"] = v.phases;
    j["losses"] = v.losses;
    j["eliminated"] = v.eliminated;
    j["shortName"] = v.shortName;
    j["dynamicState"] = v.dynamicState;
    j["wins"] = v.wins;
    j["logo"] = v.logo;
    j["name"] = v.name;
    j["members"] = v.members;
    j["tier"] = v.tier;
    j["captainId"] = v.captainId;
  }

  inline void from_json(const nlohmann::json& j, RosterDTO_t& v) {
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO_t>>();
    v.losses = j.at("losses").get<int32_t>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.shortName = j.at("shortName").get<std::string>();
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.members = j.at("members").get<std::vector<RosterMemberDTO_t>>();
    v.tier = j.at("tier").get<int32_t>();
    v.captainId = j.at("captainId").get<uint64_t>();
  }
  inline std::string to_string(const RosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
