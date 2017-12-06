#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGame_t {
    std::optional<std::vector<std::string>> gameServerRegions;
    LolGameQueuesQueueAvailability_t queueAvailability;
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t> spectatorPolicies;
    uint32_t spectatorSlotLimit;
    std::vector<LolGameQueuesQueueCustomGameSubcategory_t> subcategories;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGame_t& v) {
    if(v.gameServerRegions)
      j["gameServerRegions"] = *v.gameServerRegions;
    j["queueAvailability"] = v.queueAvailability;
    j["spectatorPolicies"] = v.spectatorPolicies;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit;
    j["subcategories"] = v.subcategories;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGame_t& v) {
    if(auto it = j.find("gameServerRegions"); it != j.end() !it->is_null())
      v.gameServerRegions = it->get<std::vector<std::string>>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t>>();
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>();
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory_t>>();
  }
}
