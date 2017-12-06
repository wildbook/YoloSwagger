#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SummonerLevel_t {
    uint64_t expTierMod;
    uint64_t expToNextLevel;
    uint32_t summonerLevel;
    uint64_t summonerTier;
  };

  inline void to_json(nlohmann::json& j, const SummonerLevel_t& v) {
    j["expTierMod"] = v.expTierMod;
    j["expToNextLevel"] = v.expToNextLevel;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerTier"] = v.summonerTier;
  }

  inline void from_json(const nlohmann::json& j, SummonerLevel_t& v) {
    v.expTierMod = j.at("expTierMod").get<uint64_t>();
    v.expToNextLevel = j.at("expToNextLevel").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.summonerTier = j.at("summonerTier").get<uint64_t>();
  }
}
