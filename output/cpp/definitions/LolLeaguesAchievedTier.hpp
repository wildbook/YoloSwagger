#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace leagueapi {
  struct LolLeaguesAchievedTier_t {
    uint64_t division;
    LolLeaguesLeagueQueueType_t queueType;
    LolLeaguesLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesAchievedTier_t& v) {
    j["division"] = v.division;
    j["queueType"] = v.queueType;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesAchievedTier_t& v) {
    v.division = j.at("division").get<uint64_t>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
    v.tier = j.at("tier").get<LolLeaguesLeagueTier_t>();
  }
}
