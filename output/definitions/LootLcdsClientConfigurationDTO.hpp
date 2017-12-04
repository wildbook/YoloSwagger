#ifndef SWAGGER_TYPES_LootLcdsClientConfigurationDTO_HPP
#define SWAGGER_TYPES_LootLcdsClientConfigurationDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct LootLcdsClientConfigurationDTO {
'    // 
    std::vector<std::string> currenciesUsingCapWallets;
    // 
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
    // 
    std::vector<std::string> lootMaterialsToAlwaysRender;
  };

  void to_json(nlohmann::json& j, const LootLcdsClientConfigurationDTO& v) {
    j["currenciesUsingCapWallets"] = v.currenciesUsingCapWallets;
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu;
    j["lootMaterialsToAlwaysRender"] = v.lootMaterialsToAlwaysRender;
  }

  void from_json(const nlohmann::json& j, LootLcdsClientConfigurationDTO& v) {
    v.currenciesUsingCapWallets = j.at("currenciesUsingCapWallets").get<std::vector<std::string>>;
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>;
    v.lootMaterialsToAlwaysRender = j.at("lootMaterialsToAlwaysRender").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsClientConfigurationDTO_HPP
