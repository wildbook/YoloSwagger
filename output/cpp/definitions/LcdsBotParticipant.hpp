#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsBotParticipant_t {
    std::string summonerName;
    std::string teamId;
    uint64_t summonerId;
    std::string summonerInternalName;
    int32_t botSkillLevel;
  };

  inline void to_json(nlohmann::json& j, const LcdsBotParticipant_t& v) {
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["botSkillLevel"] = v.botSkillLevel;
  }

  inline void from_json(const nlohmann::json& j, LcdsBotParticipant_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.teamId = j.at("teamId").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>();
  }
  inline std::string to_string(const LcdsBotParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
