#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGame_t {
    std::vector<LolGameQueuesQueueCustomGameSubcategory_t> subcategories;
    uint32_t spectatorSlotLimit;
    LolGameQueuesQueueAvailability_t queueAvailability;
    std::optional<std::vector<std::string>> gameServerRegions;
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t> spectatorPolicies;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGame_t& v) {
    j["subcategories"] = v.subcategories;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit;
    j["queueAvailability"] = v.queueAvailability;
    if(v.gameServerRegions)
      j["gameServerRegions"] = *v.gameServerRegions;
    j["spectatorPolicies"] = v.spectatorPolicies;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGame_t& v) {
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory_t>>();
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    if(auto it = j.find("gameServerRegions"); it != j.end() !it->is_null())
      v.gameServerRegions = it->get<std::vector<std::string>>();
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t>>();
  }
}
