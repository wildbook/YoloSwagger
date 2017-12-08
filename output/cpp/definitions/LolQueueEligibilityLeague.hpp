#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilityLeague_t {
    std::string_t leagueTier;
    std::string_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityLeague_t& v) {
    j["leagueTier"] = v.leagueTier;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityLeague_t& v) {
    v.leagueTier = j.at("leagueTier").get<std::string_t>();
    v.queueType = j.at("queueType").get<std::string_t>();
  }
  inline std::string to_string(const LolQueueEligibilityLeague_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
