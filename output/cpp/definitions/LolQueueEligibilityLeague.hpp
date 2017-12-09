#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilityLeague_t {
    std::string leagueTier;
    std::string queueType;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityLeague_t& v) {
    j["leagueTier"] = v.leagueTier;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityLeague_t& v) {
    v.leagueTier = j.at("leagueTier").get<std::string>();
    v.queueType = j.at("queueType").get<std::string>();
  }
  inline std::string to_string(const LolQueueEligibilityLeague_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
