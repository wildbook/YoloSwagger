#ifndef SWAGGER_TYPES_LootLcdsRecipeSlotClientDTO_HPP
#define SWAGGER_TYPES_LootLcdsRecipeSlotClientDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootLcdsRecipeSlotClientDTO {
    // 
    std::string quantityExpression;
    // 
    std::string query;
    // 
    int32_t slotNumber;
  };

  void to_json(nlohmann::json& j, const LootLcdsRecipeSlotClientDTO& v) {
    j["quantityExpression"] = v.quantityExpression;
    j["query"] = v.query;
    j["slotNumber"] = v.slotNumber;
  }

  void from_json(const nlohmann::json& j, LootLcdsRecipeSlotClientDTO& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string>;
    v.query = j.at("query").get<std::string>;
    v.slotNumber = j.at("slotNumber").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeSlotClientDTO_HPP
