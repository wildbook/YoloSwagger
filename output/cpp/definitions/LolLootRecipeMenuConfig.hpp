#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeMenuConfig_t {
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
    bool enabled;
    std::vector<std::string> alwaysShowLootIds;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeMenuConfig_t& v) {
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu;
    j["enabled"] = v.enabled;
    j["alwaysShowLootIds"] = v.alwaysShowLootIds;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeMenuConfig_t& v) {
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>();
    v.enabled = j.at("enabled").get<bool>();
    v.alwaysShowLootIds = j.at("alwaysShowLootIds").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLootRecipeMenuConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
