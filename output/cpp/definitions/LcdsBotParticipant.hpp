#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsBotParticipant_t {
    int32_t botSkillLevel;
    uint64_t summonerId;
    std::string summonerInternalName;
    std::string summonerName;
    std::string teamId;
  };

  inline void to_json(nlohmann::json& j, const LcdsBotParticipant_t& v) {
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, LcdsBotParticipant_t& v) {
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.teamId = j.at("teamId").get<std::string>();
  }
}
