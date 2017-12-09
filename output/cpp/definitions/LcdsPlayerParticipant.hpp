#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPlayerParticipant_t {
    int32_t botSkillLevel;
    uint64_t summonerId;
    std::string summonerName;
    std::string summonerInternalName;
  };

  inline void to_json(nlohmann::json& j, const LcdsPlayerParticipant_t& v) {
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  inline void from_json(const nlohmann::json& j, LcdsPlayerParticipant_t& v) {
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
  }
  inline std::string to_string(const LcdsPlayerParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
