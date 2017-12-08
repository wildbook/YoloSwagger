#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsLcdsDynamicClientConfig_t {
    nlohmann::json DisabledChampions;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsLcdsDynamicClientConfig_t& v) {
    j["DisabledChampions"] = v.DisabledChampions;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsLcdsDynamicClientConfig_t& v) {
    v.DisabledChampions = j.at("DisabledChampions").get<nlohmann::json>();
  }
  inline std::string to_string(const LolChampionsLcdsDynamicClientConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
