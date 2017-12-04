#ifndef SWAGGER_TYPES_LcdsBotParticipant_HPP
#define SWAGGER_TYPES_LcdsBotParticipant_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LcdsBotParticipant {
    // 
    int32_t botSkillLevel;
    // 
    std::string summonerInternalName;
    // 
    uint64_t summonerId;
    // 
    std::string teamId;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsBotParticipant& v) {
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerId"] = v.summonerId;
    j["teamId"] = v.teamId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsBotParticipant& v) {
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.teamId = j.at("teamId").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsBotParticipant_HPP
