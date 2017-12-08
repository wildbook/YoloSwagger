#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPlayerParticipant_t {
    std::string summonerName;
    uint64_t summonerId;
    std::string summonerInternalName;
    int32_t botSkillLevel;
  };

  inline void to_json(nlohmann::json& j, const LcdsPlayerParticipant_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
    j["botSkillLevel"] = v.botSkillLevel;
  }

  inline void from_json(const nlohmann::json& j, LcdsPlayerParticipant_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>();
  }
  inline std::string to_string(const LcdsPlayerParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
