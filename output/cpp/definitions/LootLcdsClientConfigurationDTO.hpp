#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsClientConfigurationDTO_t {
    std::vector<std::string> currenciesUsingCapWallets;
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
    std::vector<std::string> lootMaterialsToAlwaysRender;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsClientConfigurationDTO_t& v) {
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets;
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu;
    j["lootMaterialsToAlwaysRender"] = v.lootMaterialsToAlwaysRender;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsClientConfigurationDTO_t& v) {
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>();
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>();
    v.lootMaterialsToAlwaysRender = j.at("lootMaterialsToAlwaysRender").get<std::vector<std::string>>();
  }
}
