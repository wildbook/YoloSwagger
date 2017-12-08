#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootCollectionsSummonerIcons_t {
    std::vector<int32_t> icons;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsSummonerIcons_t& v) {
    j["icons"] = v.icons;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsSummonerIcons_t& v) {
    v.icons = j.at("icons").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolLootCollectionsSummonerIcons_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
