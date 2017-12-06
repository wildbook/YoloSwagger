#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPlayerParticipant_t {
    int32_t botSkillLevel;
    uint64_t summonerId;
    std::string summonerInternalName;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsPlayerParticipant_t& v) {
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsPlayerParticipant_t& v) {
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}
