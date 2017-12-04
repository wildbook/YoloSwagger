#ifndef SWAGGER_TYPES_RosterDTO_HPP
#define SWAGGER_TYPES_RosterDTO_HPP
#include <json.hpp>
#include "PhaseRosterDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
#include "RosterMemberDTO.hpp"
namespace leagueapi {
  // 
  struct RosterDTO {
    // 
    uint64_t captainId;
    // 
    RosterDynamicStateDTO dynamicState;
    // 
    bool eliminated;
    // 
    int64_t id;
    // 
    int32_t logo;
    // 
    int32_t logoColor;
    // 
    int32_t losses;
    // 
    std::vector<RosterMemberDTO> members;
    // 
    std::string name;
    // 
    std::vector<PhaseRosterDTO> phases;
    // 
    std::string shortName;
    // 
    int32_t tier;
    // 
    int64_t tournamentId;
    // 
    int32_t wins;
  };

  inline void to_json(nlohmann::json& j, const RosterDTO& v) {
    j["captainId"] = v.captainId;
    j["dynamicState"] = v.dynamicState;
    j["eliminated"] = v.eliminated;
    j["id"] = v.id;
    j["logo"] = v.logo;
    j["logoColor"] = v.logoColor;
    j["losses"] = v.losses;
    j["members"] = v.members;
    j["name"] = v.name;
    j["phases"] = v.phases;
    j["shortName"] = v.shortName;
    j["tier"] = v.tier;
    j["tournamentId"] = v.tournamentId;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, RosterDTO& v) {
    v.captainId = j.at("captainId").get<uint64_t>;
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO>;
    v.eliminated = j.at("eliminated").get<bool>;
    v.id = j.at("id").get<int64_t>;
    v.logo = j.at("logo").get<int32_t>;
    v.logoColor = j.at("logoColor").get<int32_t>;
    v.losses = j.at("losses").get<int32_t>;
    v.members = j.at("members").get<std::vector<RosterMemberDTO>>;
    v.name = j.at("name").get<std::string>;
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO>>;
    v.shortName = j.at("shortName").get<std::string>;
    v.tier = j.at("tier").get<int32_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.wins = j.at("wins").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_RosterDTO_HPP
