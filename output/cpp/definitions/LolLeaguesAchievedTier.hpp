#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace leagueapi {
  struct LolLeaguesAchievedTier_t {
    uint64_t division;
    LolLeaguesLeagueTier_t tier;
    LolLeaguesLeagueQueueType_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesAchievedTier_t& v) {
    j["division"] = v.division;
    j["tier"] = v.tier;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesAchievedTier_t& v) {
    v.division = j.at("division").get<uint64_t>();
    v.tier = j.at("tier").get<LolLeaguesLeagueTier_t>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
  }
  inline std::string to_string(const LolLeaguesAchievedTier_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
