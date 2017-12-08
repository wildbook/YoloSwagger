#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGame_t {
    LolGameQueuesQueueAvailability_t queueAvailability;
    uint32_t spectatorSlotLimit;
    std::vector<LolGameQueuesQueueCustomGameSubcategory_t> subcategories;
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t> spectatorPolicies;
    std::optional<std::vector<std::string>> gameServerRegions;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGame_t& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit;
    j["subcategories"] = v.subcategories;
    j["spectatorPolicies"] = v.spectatorPolicies;
    if(v.gameServerRegions)
      j["gameServerRegions"] = *v.gameServerRegions;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGame_t& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>();
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory_t>>();
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy_t>>();
    if(auto it = j.find("gameServerRegions"); it != j.end() && !it->is_null())
      v.gameServerRegions = it->get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolGameQueuesQueueCustomGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
