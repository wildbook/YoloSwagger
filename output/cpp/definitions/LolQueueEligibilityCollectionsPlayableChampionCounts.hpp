#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilityCollectionsPlayableChampionCounts_t {
    uint32_t championsOwned;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsPlayableChampionCounts_t& v) {
    j["championsOwned"] = v.championsOwned;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsPlayableChampionCounts_t& v) {
    v.championsOwned = j.at("championsOwned").get<uint32_t>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsPlayableChampionCounts_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
