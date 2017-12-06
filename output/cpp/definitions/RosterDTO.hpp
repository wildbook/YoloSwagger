#pragma once
#include <json.hpp>
#include <optional>
#include "RosterDynamicStateDTO.hpp"
#include "PhaseRosterDTO.hpp"
#include "RosterMemberDTO.hpp"
namespace leagueapi {
  struct RosterDTO_t {
    int32_t logoColor;
    int32_t wins;
    RosterDynamicStateDTO_t dynamicState;
    std::vector<RosterMemberDTO_t> members;
    uint64_t captainId;
    std::string shortName;
    std::vector<PhaseRosterDTO_t> phases;
    int32_t tier;
    int64_t id;
    int32_t losses;
    bool eliminated;
    int64_t tournamentId;
    std::string name;
    int32_t logo;
  };

  inline void to_json(nlohmann::json& j, const RosterDTO_t& v) {
    j["logoColor"] = v.logoColor;
    j["wins"] = v.wins;
    j["dynamicState"] = v.dynamicState;
    j["members"] = v.members;
    j["captainId"] = v.captainId;
    j["shortName"] = v.shortName;
    j["phases"] = v.phases;
    j["tier"] = v.tier;
    j["id"] = v.id;
    j["losses"] = v.losses;
    j["eliminated"] = v.eliminated;
    j["tournamentId"] = v.tournamentId;
    j["name"] = v.name;
    j["logo"] = v.logo;
  }

  inline void from_json(const nlohmann::json& j, RosterDTO_t& v) {
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO_t>();
    v.members = j.at("members").get<std::vector<RosterMemberDTO_t>>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO_t>>();
    v.tier = j.at("tier").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.logo = j.at("logo").get<int32_t>();
  }
}
