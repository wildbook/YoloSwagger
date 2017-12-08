#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace leagueapi {
  struct LolLeaguesAchievedTier_t {
    LolLeaguesLeagueTier_t tier;
    uint64_t division;
    LolLeaguesLeagueQueueType_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesAchievedTier_t& v) {
    j["tier"] = v.tier;
    j["division"] = v.division;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesAchievedTier_t& v) {
    v.tier = j.at("tier").get<LolLeaguesLeagueTier_t>();
    v.division = j.at("division").get<uint64_t>();
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType_t>();
  }
  inline std::string to_string(const LolLeaguesAchievedTier_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
