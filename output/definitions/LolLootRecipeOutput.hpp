#ifndef SWAGGER_TYPES_LolLootRecipeOutput_HPP
#define SWAGGER_TYPES_LolLootRecipeOutput_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootRecipeOutput {
    // 
    std::string lootName;
    // 
    int32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeOutput& v) {
    j["lootName"] = v.lootName;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeOutput& v) {
    v.lootName = j.at("lootName").get<std::string>;
    v.quantity = j.at("quantity").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootRecipeOutput_HPP
