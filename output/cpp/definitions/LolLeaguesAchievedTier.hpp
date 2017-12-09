#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
namespace leagueapi {
  struct LolLeaguesAchievedTier_t {
    LolLeaguesLeagueQueueType_t queueType;
    LolLeaguesLeagueTier_t tier;
    uint64_t division;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesAchievedTier_t& v) {
    j["queueType"] = v.queueType;
    j["tier"] = v.tier;
    j["division"] = v.division;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesAchievedTier_t& v) {
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
    v.tier = j.at("tier").get<LolLeaguesLeagueTier_t>();
    v.division = j.at("division").get<uint64_t>();
  }
  inline std::string to_string(const LolLeaguesAchievedTier_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
