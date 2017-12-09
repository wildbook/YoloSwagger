#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGame_t {
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t> spectatorPolicies;
    std::vector<LolGameQueuesQueueCustomGameSubcategory_t> subcategories;
    uint32_t spectatorSlotLimit;
    std::optional<std::vector<std::string>> gameServerRegions;
    LolGameQueuesQueueAvailability_t queueAvailability;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGame_t& v) {
    j["spectatorPolicies"] = v.spectatorPolicies;
    j["subcategories"] = v.subcategories;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit;
    if(v.gameServerRegions)
      j["gameServerRegions"] = *v.gameServerRegions;
    j["queueAvailability"] = v.queueAvailability;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGame_t& v) {
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t>>();
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory_t>>();
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>();
    if(auto it = j.find("gameServerRegions"); it != j.end() && !it->is_null())
      v.gameServerRegions = it->get<std::vector<std::string>>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
  }
  inline std::string to_string(const LolGameQueuesQueueCustomGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
