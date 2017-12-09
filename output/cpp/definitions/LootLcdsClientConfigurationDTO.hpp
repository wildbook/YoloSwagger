#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsClientConfigurationDTO_t {
    std::vector<std::string> lootMaterialsToAlwaysRender;
    std::vector<std::string> currenciesUsingCapWallets;
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsClientConfigurationDTO_t& v) {
    j["lootMaterialsToAlwaysRender"] = v.lootMaterialsToAlwaysRender;
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets;
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsClientConfigurationDTO_t& v) {
    v.lootMaterialsToAlwaysRender = j.at("lootMaterialsToAlwaysRender").get<std::vector<std::string>>();
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>();
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LootLcdsClientConfigurationDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
