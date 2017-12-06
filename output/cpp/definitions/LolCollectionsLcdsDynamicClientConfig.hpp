#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsLcdsDynamicClientConfig_t {
    nlohmann::json DisabledChampions;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLcdsDynamicClientConfig_t& v) {
    j["DisabledChampions"] = v.DisabledChampions;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLcdsDynamicClientConfig_t& v) {
    v.DisabledChampions = j.at("DisabledChampions").get<nlohmann::json>();
  }
}
