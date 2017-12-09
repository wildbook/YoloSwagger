#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPlayerParticipant_t {
    std::string summonerInternalName;
    std::string summonerName;
    int32_t botSkillLevel;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LcdsPlayerParticipant_t& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["summonerName"] = v.summonerName;
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LcdsPlayerParticipant_t& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LcdsPlayerParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
