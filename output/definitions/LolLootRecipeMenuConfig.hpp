#ifndef SWAGGER_TYPES_LolLootRecipeMenuConfig_HPP
#define SWAGGER_TYPES_LolLootRecipeMenuConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootRecipeMenuConfig {
    // 
    std::vector<std::string> alwaysShowLootIds;
    // 
    bool enabled;
    // 
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
  };

  void to_json(nlohmann::json& j, const LolLootRecipeMenuConfig& v) {
    j["alwaysShowLootIds"] = v.alwaysShowLootIds;
    j["enabled"] = v.enabled;
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu;
  }

  void from_json(const nlohmann::json& j, LolLootRecipeMenuConfig& v) {
    v.alwaysShowLootIds = j.at("alwaysShowLootIds").get<std::vector<std::string>>;
    v.enabled = j.at("enabled").get<bool>;
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolLootRecipeMenuConfig_HPP
