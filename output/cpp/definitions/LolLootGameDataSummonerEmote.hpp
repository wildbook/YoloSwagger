#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootGameDataSummonerEmote_t {
    std::string description;
    int64_t id;
    std::string name;
    std::string inventoryIcon;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerEmote_t& v) {
    j["description"] = v.description;
    j["id"] = v.id;
    j["name"] = v.name;
    j["inventoryIcon"] = v.inventoryIcon;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerEmote_t& v) {
    v.description = j.at("description").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>();
  }
  inline std::string to_string(const LolLootGameDataSummonerEmote_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
