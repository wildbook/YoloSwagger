#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPlayerParticipant_t {
    uint64_t summonerId;
    int32_t botSkillLevel;
    std::string summonerName;
    std::string summonerInternalName;
  };

  inline void to_json(nlohmann::json& j, const LcdsPlayerParticipant_t& v) {
    j["summonerId"] = v.summonerId;
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerName"] = v.summonerName;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  inline void from_json(const nlohmann::json& j, LcdsPlayerParticipant_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
  }
  inline std::string to_string(const LcdsPlayerParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
