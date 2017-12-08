#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SummonerLevel_t {
    uint64_t summonerTier;
    uint64_t expToNextLevel;
    uint64_t expTierMod;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const SummonerLevel_t& v) {
    j["summonerTier"] = v.summonerTier;
    j["expToNextLevel"] = v.expToNextLevel;
    j["expTierMod"] = v.expTierMod;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, SummonerLevel_t& v) {
    v.summonerTier = j.at("summonerTier").get<uint64_t>();
    v.expToNextLevel = j.at("expToNextLevel").get<uint64_t>();
    v.expTierMod = j.at("expTierMod").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
  inline std::string to_string(const SummonerLevel_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
