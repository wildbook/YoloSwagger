#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsBotParticipant_t {
    int32_t_t botSkillLevel;
    std::string_t summonerInternalName;
    uint64_t_t summonerId;
    std::string_t teamId;
    std::string_t summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsBotParticipant_t& v) {
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerId"] = v.summonerId;
    j["teamId"] = v.teamId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsBotParticipant_t& v) {
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.teamId = j.at("teamId").get<std::string_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
  }
  inline std::string to_string(const LcdsBotParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
