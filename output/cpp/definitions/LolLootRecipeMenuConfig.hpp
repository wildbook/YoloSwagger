#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeMenuConfig_t {
    bool enabled;
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
    std::vector<std::string> alwaysShowLootIds;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeMenuConfig_t& v) {
    j["enabled"] = v.enabled;
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu;
    j["alwaysShowLootIds"] = v.alwaysShowLootIds;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeMenuConfig_t& v) {
    v.enabled = j.at("enabled").get<bool>();
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>();
    v.alwaysShowLootIds = j.at("alwaysShowLootIds").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLootRecipeMenuConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
