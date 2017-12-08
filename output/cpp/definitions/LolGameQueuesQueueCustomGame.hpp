#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGame_t {
    LolGameQueuesQueueAvailability_t queueAvailability;
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t> spectatorPolicies;
    std::vector<LolGameQueuesQueueCustomGameSubcategory_t> subcategories;
    std::optional<std::vector<std::string>> gameServerRegions;
    uint32_t spectatorSlotLimit;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGame_t& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["spectatorPolicies"] = v.spectatorPolicies;
    j["subcategories"] = v.subcategories;
    if(v.gameServerRegions)
      j["gameServerRegions"] = *v.gameServerRegions;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGame_t& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t>>();
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory_t>>();
    if(auto it = j.find("gameServerRegions"); it != j.end() && !it->is_null())
      v.gameServerRegions = it->get<std::vector<std::string>>();
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>();
  }
  inline std::string to_string(const LolGameQueuesQueueCustomGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
