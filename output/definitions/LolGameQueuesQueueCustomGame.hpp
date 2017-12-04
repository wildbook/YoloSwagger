#ifndef SWAGGER_TYPES_LolGameQueuesQueueCustomGame_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueCustomGame_HPP
#include <json.hpp>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  // 
  struct LolGameQueuesQueueCustomGame {
    // 
    std::vector<std::string> gameServerRegions;
    // 
    LolGameQueuesQueueAvailability queueAvailability;
    // 
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy> spectatorPolicies;
    // 
    uint32_t spectatorSlotLimit;
    // 
    std::vector<LolGameQueuesQueueCustomGameSubcategory> subcategories;
  };

  void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGame& v) {
    j["gameServerRegions"] = v.gameServerRegions;
    j["queueAvailability"] = v.queueAvailability;
    j["spectatorPolicies"] = v.spectatorPolicies;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit;
    j["subcategories"] = v.subcategories;
  }

  void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGame& v) {
    v.gameServerRegions = j.at("gameServerRegions").get<std::vector<std::string>>;
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>;
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy>>;
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>;
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory>>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueCustomGame_HPP
