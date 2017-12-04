#ifndef SWAGGER_TYPES_LcdsBotParticipant_HPP
#define SWAGGER_TYPES_LcdsBotParticipant_HPP
#include <json.hpp>
namespace test {
  // 
  struct LcdsBotParticipant {
'    // 
    int32_t botSkillLevel;
    // 
    uint64_t summonerId;
    // 
    std::string summonerInternalName;
    // 
    std::string summonerName;
    // 
    std::string teamId;
  };

  void to_json(nlohmann::json& j, const LcdsBotParticipant& v) {
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
  }

  void from_json(const nlohmann::json& j, LcdsBotParticipant& v) {
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.teamId = j.at("teamId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsBotParticipant_HPP
