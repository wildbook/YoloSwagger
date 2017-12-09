#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootGameDataSummonerEmote_t {
    std::string name;
    int64_t id;
    std::string description;
    std::string inventoryIcon;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerEmote_t& v) {
    j["name"] = v.name;
    j["id"] = v.id;
    j["description"] = v.description;
    j["inventoryIcon"] = v.inventoryIcon;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerEmote_t& v) {
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>();
  }
  inline std::string to_string(const LolLootGameDataSummonerEmote_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
