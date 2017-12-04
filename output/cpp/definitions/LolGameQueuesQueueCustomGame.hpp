#ifndef SWAGGER_TYPES_LolGameQueuesQueueCustomGame_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueCustomGame_HPP
#include <json.hpp>
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
namespace leagueapi {
  // 
  struct LolGameQueuesQueueCustomGame {
    // 
    LolGameQueuesQueueAvailability queueAvailability;
    // 
    uint32_t spectatorSlotLimit;
    // 
    std::vector<LolGameQueuesQueueCustomGameSubcategory> subcategories;
    // 
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy> spectatorPolicies;
    // 
    std::vector<std::string> gameServerRegions;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGame& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit;
    j["subcategories"] = v.subcategories;
    j["spectatorPolicies"] = v.spectatorPolicies;
    j["gameServerRegions"] = v.gameServerRegions;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGame& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>;
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>;
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory>>;
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy>>;
    v.gameServerRegions = j.at("gameServerRegions").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueCustomGame_HPP
