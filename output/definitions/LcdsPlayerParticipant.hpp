#ifndef SWAGGER_TYPES_LcdsPlayerParticipant_HPP
#define SWAGGER_TYPES_LcdsPlayerParticipant_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LcdsPlayerParticipant {
    // 
    int32_t botSkillLevel;
    // 
    uint64_t summonerId;
    // 
    std::string summonerInternalName;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsPlayerParticipant& v) {
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsPlayerParticipant& v) {
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsPlayerParticipant_HPP
