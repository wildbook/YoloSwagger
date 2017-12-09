#pragma once
#include <json.hpp>
#include <optional>
#include "PhaseRosterDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
#include "RosterMemberDTO.hpp"
namespace leagueapi {
  struct RosterDTO_t {
    int64_t tournamentId;
    int32_t logoColor;
    std::string shortName;
    uint64_t captainId;
    bool eliminated;
    int32_t losses;
    std::vector<RosterMemberDTO_t> members;
    std::string name;
    std::vector<PhaseRosterDTO_t> phases;
    int32_t wins;
    int64_t id;
    int32_t logo;
    RosterDynamicStateDTO_t dynamicState;
    int32_t tier;
  };

  inline void to_json(nlohmann::json& j, const RosterDTO_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["logoColor"] = v.logoColor;
    j["shortName"] = v.shortName;
    j["captainId"] = v.captainId;
    j["eliminated"] = v.eliminated;
    j["losses"] = v.losses;
    j["members"] = v.members;
    j["name"] = v.name;
    j["phases"] = v.phases;
    j["wins"] = v.wins;
    j["id"] = v.id;
    j["logo"] = v.logo;
    j["dynamicState"] = v.dynamicState;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, RosterDTO_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.losses = j.at("losses").get<int32_t>();
    v.members = j.at("members").get<std::vector<RosterMemberDTO_t>>();
    v.name = j.at("name").get<std::string>();
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO_t>>();
    v.wins = j.at("wins").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO_t>();
    v.tier = j.at("tier").get<int32_t>();
  }
  inline std::string to_string(const RosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
